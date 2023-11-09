#include "Employee.h"

Employee::Employee()
{
    this->name = "Undefine";
    this->salary = 7000;
}

Employee::Employee(string name, double salary)
{
    this->name = name;
    this->salary = salary;
}

void Employee::setName(string name){ this->name = name;}

void Employee::setSalary(double x){ this->salary = x;}

string Employee::getName() const{ return name;}

double Employee::getSalary() const{ return salary;}

double Employee::calcSalary() const {
    return salary *0.78;
}

void Employee::print() const
{
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}

string Employee::type() const
{
    return "Employee";
}
