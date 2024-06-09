#include<iostream>
using namespace std;

class integer
{
    private:
    int x;
    public:
    void get();
    void display();
    void sum(integer&);
};

void integer :: get()
{
    cin>>x;
}
void integer :: display()
{
    cout<<x<<"\n";
    }
void integer :: sum(integer& b)
{
    x+=b.x;
}

int main(void)
{
    integer a[10],s;
    int n,i;

    cout<<"enter the number of objects\n";
    cin>>n;
    cout<<"enter"<<n<<"integer"<<"\n";
    for(i=0;i<n;i++)
    a[i].get();

    s=a[0];
    for(i=1;i<n;i++)
    s.sum(a[i]);

    cout<<"sum=";
    s.display();


    return 0;

}