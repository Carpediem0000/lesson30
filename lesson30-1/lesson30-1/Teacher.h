#pragma once
#include "Employee.h"
class Teacher: public Employee
{
protected:
	double cost;
	int hours;
public:
	Teacher();
	Teacher(string name, double salary, double cost, int hours);

	void setCost(double cost);
	void setHours(int hours);

	double getCost()const;
	int getHours()const;

	double calcSalary()const override;
	void print()const override;
};

