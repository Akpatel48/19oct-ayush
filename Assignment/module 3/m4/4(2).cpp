/*Write a C++ Program to find Area of Rectangle using inheritance*/
#include<iostream>
using namespace std;
class get
{
protected:
    int width,lenth,area;
    get()
    {
        int width,lenth;
        cout<<"enter width:";
        cin>>width;
        cout<<"enter lenth:";
        cin>>lenth;
        area=width*lenth;
    }
};
class  rectangle: virtual get
{
    public:
    int rect()
    {
        cout<<"Rectangle area="<<area;
    }

};
int main(int argc, char const *argv[])
{
    rectangle rec;
    rec.rect();
    return 0;
}
