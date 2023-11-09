#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"

int main()
{
	Employee a("Vanya1", 15000);
	/*a.print();
	cout << a.calcSalary() << endl;
	cout << "=====================\n";*/

	Teacher a1("Vanya2", 9000, 450, 5);
	/*a1.print();
	cout << a1.calcSalary() << endl;
	cout << "=====================\n";*/

	Manager a2("Vanya3", 7500, 7, 13000);
	/*a2.print();
	cout << a2.calcSalary() << endl;
	cout << "=====================\n";*/

	const int size = 6;
	Employee* arr[size] = { &a, &a1, &a2,
		new Manager("Vanya4", 7000, 30, 50000),
		new Teacher("Vanya5", 9000, 1000, 10),
		new Manager("Vanya6", 9000, 67, 50000)};

	for (int i = 0; i < 3; i++)
	{
		
		arr[i]->print(); cout << endl;
	}
	cout << "=====================\n";
	double sum = 0.0;
	for (size_t i = 0; i < size; i++)
	{
		cout << "\n" << arr[i]->type() << endl;
		cout << arr[i]->getName() << ": " <<
			arr[i]->calcSalary() << "uah\n";
		sum += arr[i]->calcSalary();
	}
	cout << "all salsry: " << sum << "uah\n";
	cout << "=====================\n";

	cout << "Input new salary teachers: ";
	double k = 0;
	cin >> k;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]->type() == "Teacher")
		{
			arr[i]->setSalary(arr[i]->getSalary() + k);
			cout << arr[i]->getName() << ": " <<
				arr[i]->getSalary() << "uah\n";
		}
	}

	cout << "=====================\n";

	for (int i = 0; i < size; i++)
	{
		if (arr[i]->type() == "Manager")
		{
			Manager* p = (Manager*)arr[i];
			p->setPercent(p->getPercent() + 5);
			cout << arr[i]->getName() << ": " <<
				p->getPercent() << "%\n";
		}
	}

	delete arr[3];
	delete arr[4];
	delete arr[5];
}