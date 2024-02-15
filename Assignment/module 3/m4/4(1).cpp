/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class cricketer
{
public:
    string batsma;
    int run[5],total_run=0,best_performance=0,max;
    float average_rum;
};
class batsman:public cricketer
{
public:
    int input_data()    //get data
    {
        cout<<"enter bastsmane name:";
        cin>>batsma;
    }
    int avg()   //avreg run
    {
        int i;
        for ( i = 1; i <= 5; i++)
        {
            cout<<"enter "<<i<<" match run:";
            cin>>run[i];
        }
    }
    int Total() //totle run
    {
        for(int i=0;i<5;i++)
        {
            total_run=total_run+run[i];
        }
        average_rum=(float)total_run/5;
    }

    int performance()   //purfomens in match
        {
            for (int i = 1; i <= 5; i++)
            {
                if (run[i]>max)
                {
                    max=run[i];
                }
            }
        }
        int show()  //show data
        {
            cout<<"bastsmane name:"<<batsma;
            cout<<endl<<"total run:"<<total_run;
            cout<<endl<<"avg run:"<<average_rum;
            cout<<endl<<"best performance in "<<max;
        }
};
int main(int argc, char const *argv[])
{
    batsman b1;
    b1.input_data();
    b1.avg();
    b1.performance();
    b1.Total();
    b1.show();
    return 0;
}