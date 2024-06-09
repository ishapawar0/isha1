#include<iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;
    void setlength(int l);
    void setbreadth(int b);
    int getarea();
    int getperimeter();
};

void rectangle :: setlength(int l)
{
    length=l;
}
void rectangle :: setbreadth(int b) 
{
    breadth=b;
}
int rectangle :: getarea()
{
    return length* breadth;
}
int rectangle :: getperimeter()
{
    return  2*(length + breadth);
}

int main()
{
    rectangle r;
    r.setlength(7);
    r.setbreadth(4);
    int area= r.getarea();
    cout<<"area:"<<area<<endl;
    int perimeter = r.getperimeter();
    cout<<"perimeter:"<<perimeter<<endl;
    
    return 0;
}