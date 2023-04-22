#include<iostream>
using namespace std;

class student{      
    int rno;
    char name[15];
    float percent;

    public:    //Access specifier to public because private is default
    void accept_stud_rec()
    {
        cout<<"\nEnter the roll number:";
        cin>>rno;
        cout<<"\nEnter the name:";
        cin>>name;
        cout<<"\nEnter the marks in percentage:";
        cin>>percent;
    }
    void display()
    {
        cout<<"\nName:"<<name;
        cout<<"\nRoll number:"<<rno;
        cout<<"\nMarks:"<<percent;        
    }
};

int main()
{
    student s1,s2,s3;           //instance of the class or Obejct
    s1.accept_stud_rec();
    s2.accept_stud_rec();
    s1.display();
    s2.display();
}