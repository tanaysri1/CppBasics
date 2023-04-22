#include<iostream>
using namespace std;

void swap(int ,int);

int main()
{
    int a=10, b=20;
    swap(a,b);
    cout<<"\nThe first number is " <<a;
    cout<<"\nThe second number is "<<b;
    return 0;

}

void swap(int n1, int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    
}

