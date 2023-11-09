#pragma once
#include "Employee.h"
class Manager: public Employee
{
protected:
	int percent;
	double sales;
public:
	Manager();
	Manager(string name, double salary, int percent, double sales);

	void setPercent(int percent);
	void setSales(double sales);

	int getPercent()const;
	double getSales()const;

	double calcSalary()const override;
	void print()const override;
};

