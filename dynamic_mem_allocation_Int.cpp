#include<iostream>
using namespace std;

class Integer_Array             //class 
{
    int size;
    int *arr;                   //base address to store array arr

    public:
    Integer_Array()             //default constructor with 0 and null as its values
    {
        size=0;
        arr=NULL;
        cout<<"\n The default constructor is called..";
    }

    Integer_Array(int s)            //parameterized constructor 
    {
        size=s;     
        arr=new int[size];              //pointer stores the base address of the new array
        for(int i=0;i<size;i++)
            arr[i]=0;
        cout<<"\n The parameterized constructor is called..";
    }
    
    ~Integer_Array()                //destructor because of constructor
    {
        delete []arr;               //releasing the memory from the pointer
        arr=NULL;                      
        cout<<"\n The destructor is called..";
    }
    
    Integer_Array(const Integer_Array &I)  //&I is the reference to the object which is to be copied
    {
        size=I.size;  //this->size=I.size
        arr=new int[size];
        for(int i=0;i<size;i++)
            arr[i]=I.arr[i];                    //new base address but the size is the same
        cout<<"\n copy constructor is called";
    }
    
    const Integer_Array & operator =(const Integer_Array &I) //comparison operator overloading
    {
        if (arr!=NULL)
            delete []arr;
        size=I.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
            {
                arr[i]=I.arr[i];
            }
        cout<<"\n assignment operator is called..";         
        return *this;
    }

    void accept_values()
    {
        int i;
        for(i=0;i<size;i++)
        {
            cout<<"\n Enter the values for the array";
            cin>>arr[i];
        }
    }
    
    void display()
    {   
        int i;
        for(i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    Integer_Array I1;
    Integer_Array I2(5);
    Integer_Array I3(I2);

    I3.accept_values();

    I2.display();
    I3.display();

    Integer_Array I4;
    I4.display();
    I4=I3;
    I4.display();
    return 0;
}
/*

#include<iostream>
using namespace std;

class integer
{
    int size;
    int *arr;

    integer()
    {
        size=0;
        arr=NULL;
        printf("Default constructor is called...\n");
    }

    integer(int s)
    {
        size=s;
        arr=new int[size];
        printf("Parameterized constructor is called.. \n");
    }

    ~integer()
    {
        delete []arr;
        size=NULL;
        printf("Destructor is called...\n");

    }

    const integer(const &)




};*/