
# include <iostream>                    

int r;
using namespace std;


struct bk bank[strk];

struct bk bad;

int sch = 0;


void enter_new()
{
	cout << "���� ����������" << endl;
	if (sch < strk)
	{
		cout << "������ ����� ";
		cout << sch + 1;
		cout << endl << "�.�.� " << endl;
		cin >> bank[sch].name;
		cout << "��� ����� " << endl;
		cin >> bank[sch].type;
		cout << "����� �����  " << endl;
		cin >> bank[sch].number;
		cout << "����� �� �����  " << endl;
		cin >> bank[sch].sum;
		cout << "���� ���������� ��������� " << endl;
		cin >> bank[sch].date;
		sch++;
	}
	else
		cout << "������� ������������ ���-�� �����";
	cout << "��� ������?" << endl;
	cin >> r;
}



void del()
{
	int d;
	cout << "\n����� ������, ������� ���� ������� (��� �������� ���� ����� ������ 99)" << endl;
	cin >> d;
	if (d != 99)
	{
		for (int de1 = (d - 1); de1 < sch; de1++)
			bank[de1] = bank[de1 + 1];
		sch = sch - 1;
	}
	if (d == 99)
		for (int i = 0; i < strk; i++)
			bank[i] = bad;
	cout << "��� ������?" << endl;
	cin >> r;
}

void change()
{
	int n, per;
	cout << "\n������� ����� ������" << endl;
	cin >> n;
	do
	{
		cout << "�������: " << endl;
		cout << "1-��� ��������� ���" << endl;
		cout << "2-��� ���� �����" << endl;
		cout << "3-��� ����� �����" << endl;
		cout << "4-��� ��������� �����" << endl;
		cout << "5-��� ��������� ����"<< endl;
			cout << "6-�����\n";
		cin >> per;
		switch (per)
		{
		case 1: cout << "��������� ���";
			cin >> bank[n - 1].name;   break;
		case 2: cout << "��������� ��� �����";
			cin >> bank[n - 1].type;     break;
		case 3: cout << "��������� ����� ����� ";
			cin >> bank[n - 1].number; break;
		case 4: cout << "����� ";
			cin >> bank[n - 1].sum;     break;
		case 5: cout << "���� ���������� ���������";
			cin >> bank[n - 1].date;     break;
		}
	} while (per != 6);
	cout << "��� ������?" << endl;
	cin >> r;
}

void out()
{
	int sw, n;
	cout << "1-����� 1 ������" << endl;
	cout << "2-����� ���� �����" << endl;
	cin >> sw;
	if (sw == 1)
	{
		cout << "����� ��������� ������ " << endl;   cin >> n;  cout << endl;
		cout << "�.�.�";
		cout << bank[n - 1].name << endl;
		cout << "��� ����� ";
		cout << bank[n - 1].type << endl;
		cout << "����� ����� ";
		cout << bank[n - 1].number << endl;
		cout << "����� �� ����� ";
		cout << bank[n - 1].sum << endl;
		cout << "���� ���������� ���������";
		cout << bank[n - 1].date << endl;
	}
	if (sw == 2)
	{
		for (int i = 0; i < sch; i++)
		{
			cout << "�.�.� ";
			cout << bank[i].name << endl;
			cout << "��� ����� ";
			cout << bank[i].type << endl;
			cout << "����� ����� ";
			cout << bank[i].number << endl;
			cout << "����� �� ����� ";
			cout << bank[i].sum << endl;
			cout << "���� ���������� ���������";
			cout << bank[i].date << endl;
		}
	}
	cout << "��� ������?" << endl; cin >> r;
} 	int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������ ���" << endl;
	cout << "�������:" << endl;
	cout << "1-��� �������� ������" << endl;
	cout << "2-��� ����� ����� ������" << endl;
	cout << "3-��� ��������� ������" << endl;
	cout << "4-��� ������ ������(��)" << endl;
	cout << "5-��� ������" << endl;
	cin >> r;
	do
	{
		switch (r)
		{
		case 1:  del();     break;
		case 2:  enter_new();     break;
		case 3:  change();     break;
		case 4:  out();     break;
		}
	} while (r != 5);
}

