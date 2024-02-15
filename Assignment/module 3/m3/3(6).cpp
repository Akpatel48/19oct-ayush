/*Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */
#include<iostream>
using namespace std;
class  employee
{
    string name;
    int employeeId,salary,performace;
    public:
    employee()
    {
        cout<<"enter employee name: ";
        cin>>name;
        cout<<"eneter employeeId: ";
        cin>>employeeId;
        cout<<"enter base salary: ";
        cin>>salary;
        cout<<"enter employee performace \n1.a\n2.b\n3.c\n";
        cin>>performace;
    }
    int set_salary()
    {
        if (performace==1)
        {
            cout<<name<<"'s salary="<<salary+5000;
        }
        else if (performace==2)
        {
            cout<<name<<"'s salary="<<salary+2500;
        }
        else if (performace==3)

        {
            cout<<name<<"'s salary="<<salary+1000;
        }
        else
            cout<<name<<"'s salary="<<salary+500;
    }

};
int main(int argc, char const *argv[])
{
    employee emp;
    emp.set_salary();
    return 0;
}
