/*Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation 
*/
#include<iostream>
using namespace std;
class student
{
    string name,Class;
    int marks,roll_number;
public:
    int set(string name,string Class,int marks,int roll_number)
    {
        this->name=name;
        this->Class=Class;
        this->marks=marks;
        this->roll_number=roll_number;
    }
    int grade()
    {
        if (marks>=80)
        {
            cout<<"grade: A";
        }
        else if (marks>=60)
        {
            cout<<"grade: B";
        }
        else if (marks>=40)
        {
            cout<<"grade: C";
        }
        else if (marks>=25)
        {
            cout<<"grade :D";
        }
        else
        {
            cout<<"File";
        }
    }
};
int main(int argc, char const *argv[])
{
    string name,Class;
    int marks,roll_number;
        cout<<"enter student name: ";
        cin>>name;
        cout<<"enter student class: ";
        cin>>Class;
        cout<<"enter roll number: ";
        cin>>roll_number;
        cout<<"enter student marks: ";
        cin>>marks;
    student stu;
    stu.get();
    stu.grade();
    return 0;
}
