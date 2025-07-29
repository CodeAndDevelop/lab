#include<iostream> 

using namespace std; 

class Person{

    private: 
    int id; 

     protected: 
     char name[20];  
     char address[20];  
    
     public: 
     

     void getinput()
     {
        cout<<"Enter your Name: "; 
        cin>>name; 
        cout<<"Enter your address : "; 
        cin>>address; 
        cout<<"Enter Id: "; 
        cin>>id; 
     }

     
     

  

}; 

class Teacher{
    protected: 
   float salary; 
    public:
    void getinput()
    {
        cout<<"Enter your salary: "; 
        cin>>salary; 
    } 


}; 


class TS:private Person, public Teacher{
    int id; 
    public: 
    void getinput()
    {
        Person::getinput(); 
        Teacher::getinput(); 
        cout<<"Enter your Id: "; 
        cin>>id; 
    }

    void display(){
        cout<<"Id: "<< id << " Name: "<< "Address  " <<address << " Salary: " << salary<< endl; 
    }


};





int main()
{
    class TS s;
    
    s.TS::getinput(); 
    s.display(); 


    
    return 0; 
}