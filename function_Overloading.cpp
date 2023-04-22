#include<iostream>
using namespace std;

int mul(int, int);
float mul(float, int);
float mul(float, float);
float mul(int, float);
void display(float, float);

int main()
{
    float n1;
    float n2;
    n1=10.15f;
    n2=20.50f;
    display(n1,n2);
    return 0;
}

int mul(int a, int b)
{
   return a*b;
}

float mul(float a, int b)
{
   return a*b;
}
float mul(float a, float b)
{
   return a*b;
}
float mul(int a, float b)
{
   return a*b;
}

void display(float a, float b)
{
    cout<<"\t"<<mul(a,b);
    cout<<"\t"<<mul(b,a);
    cout<<"\t"<<mul(a,b);
    cout<<"\t"<<mul(a,b);
    
}