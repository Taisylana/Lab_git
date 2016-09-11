
# include <iostream>                    

int r;
using namespace std;


struct bk bank[strk];

struct bk bad;

int sch = 0;


void enter_new()
{
	cout << "Ввод информации" << endl;
	if (sch < strk)
	{
		cout << "Строка номер ";
		cout << sch + 1;
		cout << endl << "Ф.И.О " << endl;
		cin >> bank[sch].name;
		cout << "Тип счета " << endl;
		cin >> bank[sch].type;
		cout << "Номер счета  " << endl;
		cin >> bank[sch].number;
		cout << "Сумма на счете  " << endl;
		cin >> bank[sch].sum;
		cout << "Дата последнего изменения " << endl;
		cin >> bank[sch].date;
		sch++;
	}
	else
		cout << "Введено максимальное кол-во строк";
	cout << "Что дальше?" << endl;
	cin >> r;
}



void del()
{
	int d;
	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
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
	cout << "Что дальше?" << endl;
	cin >> r;
}

void change()
{
	int n, per;
	cout << "\nВведите номер строки" << endl;
	cin >> n;
	do
	{
		cout << "Введите: " << endl;
		cout << "1-для изменения ФИО" << endl;
		cout << "2-для типа счета" << endl;
		cout << "3-для номер счета" << endl;
		cout << "4-для изменение суммы" << endl;
		cout << "5-для изменения даты"<< endl;
			cout << "6-конец\n";
		cin >> per;
		switch (per)
		{
		case 1: cout << "Следующее ФИО";
			cin >> bank[n - 1].name;   break;
		case 2: cout << "Следующий тип счета";
			cin >> bank[n - 1].type;     break;
		case 3: cout << "Следующий номер счета ";
			cin >> bank[n - 1].number; break;
		case 4: cout << "Сумма ";
			cin >> bank[n - 1].sum;     break;
		case 5: cout << "Дата последнего изменения";
			cin >> bank[n - 1].date;     break;
		}
	} while (per != 6);
	cout << "Что дальше?" << endl;
	cin >> r;
}

void out()
{
	int sw, n;
	cout << "1-вывод 1 строки" << endl;
	cout << "2-вывод всех строк" << endl;
	cin >> sw;
	if (sw == 1)
	{
		cout << "Номер выводимой строки " << endl;   cin >> n;  cout << endl;
		cout << "Ф.И.О";
		cout << bank[n - 1].name << endl;
		cout << "Тип счета ";
		cout << bank[n - 1].type << endl;
		cout << "Номер счета ";
		cout << bank[n - 1].number << endl;
		cout << "Сумма на счете ";
		cout << bank[n - 1].sum << endl;
		cout << "Дата последнего изменения";
		cout << bank[n - 1].date << endl;
	}
	if (sw == 2)
	{
		for (int i = 0; i < sch; i++)
		{
			cout << "Ф.И.О ";
			cout << bank[i].name << endl;
			cout << "Тип счета ";
			cout << bank[i].type << endl;
			cout << "Номер счета ";
			cout << bank[i].number << endl;
			cout << "Сумма на счете ";
			cout << bank[i].sum << endl;
			cout << "Дата последнего изменения";
			cout << bank[i].date << endl;
		}
	}
	cout << "Что дальше?" << endl; cin >> r;
} 	int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Данных нет" << endl;
	cout << "Введите:" << endl;
	cout << "1-для удаления записи" << endl;
	cout << "2-для ввода новой записи" << endl;
	cout << "3-для изменения записи" << endl;
	cout << "4-для вывода записи(ей)" << endl;
	cout << "5-для выхода" << endl;
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

