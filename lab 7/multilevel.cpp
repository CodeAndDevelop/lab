#include<iostream> 

using namespace std; 

class Person{

    protected: 
    char name[20];
    char address[20];  
    public: 
    void input()
    {
        cout<<"Enter your name: "; 
        cin>>name; 
    
        cout<<"Enter your address: "; 
        cin>>address; 

    }



    

}; 

class Employee: public Person{


    float salary; 

    public: 
    void input()
    {
        cout<<"Enter salary: "; 
        cin>>salary; 
    }
    void display()
    {
        cout<<" Salary: "<<salary<<endl; 
    }
}; 

class Manager: public Employee{

    int id; 
    public: 
    void input()
    {
        cout<<"Enter the id: "; 
        cin>>id; 

    }

      void display(){
        cout<< "Id:" << id << " Name: "<< name<< "  Address: "<<address ;
    }
}; 
int main()
{
    class Manager m; 
    m.Manager::input(); 
    m.Employee::input(); 
    m.Person::input(); 

    m.Manager::display(); 
    m.Employee::display(); 

    return 0; 
}