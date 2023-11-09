#include "Manager.h"

Manager::Manager()
{
    this->percent = 5;
    this->sales = 0;
}

Manager::Manager(string name, double salary, int percent, double sales)
    :Employee(name, salary)
{
    this->percent = percent;
    this->sales = sales;
}

void Manager::setPercent(int percent)
{
    this->percent = percent;
}

void Manager::setSales(double sales)
{
    this->sales = sales;
}

int Manager::getPercent() const
{
    return percent;
}

double Manager::getSales() const
{
    return sales;
}

double Manager::calcSalary() const
{
    return (sales + sales * percent / 100) * 0.78;
}

void Manager::print() const
{
    Employee::print();
    cout << "Percent: " << percent << endl;
    cout << "Sales: " << sales << endl;
    cout << "Current sales: " << this->calcSalary() << endl;
}

string Manager::type() const
{
    return "Manager";
}
