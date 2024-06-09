#include<iostream>

class employee
{
    private:
    int employee;
    char name{20};
    float salary;
    
    public:
    void get();
    void display();
};

void employee :: get()
{
    cout<<"enter employee,name and salary\n";
    cin>>employee>>name>>salary;
}

void employee :: display()
{
    cout<<"employee="<<employee<<"\n";
    cout<<"name="<<name<<"\n";
    cout<<"salary="<<salary;
}

int main(void)
{
    employee e, *ep;

    ep = &e;
    ep -> get();
    ep -> display();
    return 0;
}