#include "Teacher.h"

Teacher::Teacher()
{
    this->cost = 200;
    this->hours = 10;
}

Teacher::Teacher(string name, double salary, double cost, int hours)
    :Employee(name, salary)
{
    this->cost = cost;
    this->hours = hours;
}

void Teacher::setCost(double cost)
{
    this->cost = cost;
}

void Teacher::setHours(int hours)
{
    this->hours = hours;
}

double Teacher::getCost() const
{
    return cost;
}

int Teacher::getHours() const
{
    return hours;
}

double Teacher::calcSalary() const
{
    return (salary + hours * cost)*0.78;
}

void Teacher::print() const
{
    Employee::print();
    cout << "Hours: " << hours << endl;
    cout << "Cost: " << cost << endl;
    cout << "Current cost: " << this->calcSalary() << endl;
}
