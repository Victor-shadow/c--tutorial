#include <iostream>
using namespace std;

struct Employee{
    char name[20];
    int id;

    union Pay{
        float hourlyRate;
        float salary;
    } payment;
};




int main(){
    Employee emp;
    emp.id = 10;
    //Access nested union member
    emp.payment.hourlyRate = 300.0;

    cout << "Employee ID: " << emp.id << endl;
    cout << "Hourly Rate: " << emp.payment.hourlyRate << endl;

    //Assign salary
    emp.payment.salary = 10000;
    cout << "Employee Salary: " << emp.payment.salary << endl;
    return 0;

}