/*Write a program to find the multiplication values and the cubic values using
inline function*/
#include<iostream>
using namespace std;
class cube
{
    public:
   inline int cb()  //elcute cube 
    {
        int no1,no2,mul,cu;
        cout<<"enter first values=";
        cin>>no1;
        cout<<"enter second values=";
        cin>>no2;

        cu=3*no1;
        cout<<"cube values ="<<cu;
        mul=no1*no2;
        cout<<endl<<"multiplication ="<<mul;
    }
};
int main(int argc, char const *argv[])
{
    cube c1;
    c1.cb();
    return 0;
}
