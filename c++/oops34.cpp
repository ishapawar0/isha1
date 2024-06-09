#include<iostream>
using namespace std;


struct emp 
{
    int empno;
    char name[20];
    float salary;
    
    void get(void)
    {
        cin>>empno>>name>>salary;
    }

    void display(void)
    {
        cout<<setw(6)<<empno<<setw(12)<<name<<setw(8)<<salary<<"\n";
    }  
};
 int main(void)
 {
    emp e;
    cout<<"enter empno,name and salary\n";
    e.get();
    cout<<"details of the employee \n";
    e.display();

    return 0;
 }