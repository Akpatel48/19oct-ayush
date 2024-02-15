/*Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables*/
#include<iostream>
using namespace std;
class called
{
private:
    string name,country;
    int age;
public:
    void get()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        cout<<"enter country:";
        cin>>country;
    }
    void set()
    {
        cout<<name<<" your age is "<<age<<" and country "<<country<<".";
    }
};
int main(int argc, char const *argv[])
{
    called ca;
    ca.get();
    ca.set();
    return 0;
}
