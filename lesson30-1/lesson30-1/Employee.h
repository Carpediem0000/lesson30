#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
	string name;
	double salary;
public:
	Employee();
	Employee(string name, double salary);

	void setName(string name);
	void setSalary(double x);

	string getName()const;
	double getSalary()const;

	virtual double calcSalary()const;
	virtual void print()const;
};

