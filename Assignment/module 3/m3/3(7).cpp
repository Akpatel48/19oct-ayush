/*Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class date
{
    int day,month,year;
public:
    int get()
    {
        cout<<"enter day:";
        cin>>day;
        cout<<"enter month";
        cin>>month;
        cout<<"enter year";
        cin>>year;
        if (day>=31 && month>=12)
        {
            cout<<"enter valid date";
        }
        else
        {
            cout<<day<<"/"<<month<<"/"<<year;
        }
    }



};
int main(int argc, char const *argv[])
{
    date d1;
    d1.get();
    return 0;
}
