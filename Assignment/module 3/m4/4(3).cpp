/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person    
{
protected:
    string name;
    int age;
};
class student
{
protected:
    int percentage;
};
class teacher : virtual person,virtual student
{
    int salary;
public:
    void write()    //get data
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        cout<<"enter salary:";
        cin>>salary;
    }
    void read()     //display data
    {
        cout<<endl<<"your name:"<<name;
        cout<<endl<<"your age:"<<age;
        cout<<endl<<"teacher salary:"<<salary<<endl;
    }
};
int main(int argc, char const *argv[])
{
    teacher teach;
    teach.write();
    teach.read();
    return 0;
}
