#include "Employee.h"
#include "Teacher.h"
#include "Manager.h"

int main()
{
	Employee a("Vanya", 15000);
	/*a.print();
	cout << a.calcSalary() << endl;
	cout << "=====================\n";*/

	Teacher a1("Vanya", 9000, 450, 5);
	/*a1.print();
	cout << a1.calcSalary() << endl;
	cout << "=====================\n";*/

	Manager a2("Vanya", 7500, 7, 13000);
	/*a2.print();
	cout << a2.calcSalary() << endl;
	cout << "=====================\n";*/

	Employee* arr[3] = { &a, &a1, &a2 };

	for (int i = 0; i < 3; i++)
	{
		arr[i]->print(); cout << endl;
	}

}