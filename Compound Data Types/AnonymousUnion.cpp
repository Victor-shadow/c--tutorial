#include <iostream>
using namespace std;

struct Employee{
    int id;
    //Anonymous union
    union{
        float hourlyRate;
        float salary;
    };
};

int main(){
    Employee emp;
    emp.id = 1;
    //Access anonymous inner member
    emp.hourlyRate = 3.5;

    cout << "Employee ID: " << emp.id << endl;
    cout << "Hourly Rate: " << emp.hourlyRate << endl;

    //Only one member is active
    emp.salary = 100000;
    cout << "The Salary is: " << emp.salary << endl;

    return 0;

}