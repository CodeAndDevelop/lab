// 1. wap to show use of virtual base class in multipath inheritance 
#include<iostream>


using namespace std; 

class Person
{
    protected: 

    char name[20]; 
    char address[20]; 

    public: 
    void input()
    {
        cout<<"Enter Your Name: "; 
        cin>>name; 
    
        cout<<"Enter Your Address: "; 
        cin>>address;
        
    }

    void display()
    {
        cout<<"Name= "<<name <<" Address= "<<address; 
    }
};


class student:virtual public Person{
     
    protected: 
    int id; 


    public: 
    void input()
    {
        cout<<"Enter your ID: ";
        cin>>id;  
    }

    void display()
    {
        cout<<"ID="<<id; 
    }



};

class Employee:virtual public Person
{
    protected: 
    float salary; 


    public: 
    void input()
    {
        cout<<"Enter your Salary: "; 
        cin>>salary; 
    }
}; 

class intern: public Employee,  public student{

    char branch[20];
    
    public: 
    void input()
    {
        Person::input(); 
        Employee::input(); 
        student::input(); 

        cout<<"Enter Your Brach: "; 
        cin>>branch; 
    }

    void display()
    {
        Person::display(); 
        Employee::display(); 
        student::display(); 
        cout<<"Branch= "<<branch<<endl; 
    }


}; 

int main()
{

    intern I; 

    I.input();
    I.display();   
    return 0; 
}