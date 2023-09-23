#include<iostream>
using namespace std;
void area(float);
void area(int,int);
void area(float,float);
void area(double,double);
int main()
{
    area(4.5);
    area(2,3);
    area(22.25f,55.25f);
    // area(float(22.25),float(55.25));
    area(42000.725,60000.725);
    return 0;
}
void area(float r)
{
    float area;
    area=3.142*r*r;
    cout<<"area of circle="<<area<<endl;
}
void area(int a,int b)
{
    int area;
    area=a*b;
    cout<<"area of square="<<area<<endl;
}
void area(float m,float n)
{
    float area;
    area=m*n;
    cout<<"area of rectangle="<<area<<endl;
}
void area(double s,double t)
{
    double area;
    area=0.5*s*t;
    cout<<"area of triangle="<<area<<endl;
}