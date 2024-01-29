#include<iostream>
using namespace std;
class circal
{
private:
    int r,pi=3.14,ca,cf;
public:
    int circalarea()
    {
        cout<<"enter values";
        cin>>r;
        ca=pi*r*r;
        cout<<"area of circal="<<ca;
    }
    int circumference()
    {
        cf=2*(pi*r);
        cout<<endl<<"circumference="<<cf;
    }
};
int main(int argc, char const *argv[])
{
    circal ci;
    ci.circalarea();
    ci.circumference();
    return 0;
}
