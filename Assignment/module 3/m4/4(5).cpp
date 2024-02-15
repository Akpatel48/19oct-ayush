/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
int roll;
class Students  //get roll number
{
protected:
    Students()  //cunstercter
    {
        cout<<"enter Students roll number:-";
        cin>>roll;
    }

};
class test: virtual Students  //Inheritance clas  
{
protected:
    int sub1,sub2;
    test()
    {
        cout<<"enter first subject mark:-";
        cin>>sub1;
        cout<<"enter secand subject mark:-";
        cin>>sub2;
    }
};
class result: virtual test
{
public:
    int totle;
    result()
    {
        totle=sub1+sub2;
        cout<<"student roll number:-"<<roll;
        cout<<endl<<"student totle mark:-"<<totle;

    }
};
int main(int argc, char const *argv[])
{
    result resul;
    resul.totle;
    return 0;
}
