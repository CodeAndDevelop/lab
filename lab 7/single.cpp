// 1. Wap to illustrate a. single inheritance
// b. multiple
// c. Multilevel
// dl Hierarchial 
#include<iostream> 

using namespace std; 

class Person{

    private: 
    int id; 

     protected: 
     char name[20];  
     char address[20];  
    
     public: 
     int getid(){
        cout<<"Enter id: "; 
        cin>>id; 
        return id; 

     }

     void getinput()
     {
        cout<<"Enter your Name: "; 
        cin>>name; 
        cout<<"Enter your address : "; 
        cin>>address; 
     }
     
     

  

}; 

class Teacher:private Person{

    float salary;
    int id;  
public: 
    void getinput(){
      Person::getinput();
        cout<<"Enter your Salary: "; 
        cin>>salary; 
        id=getid(); 
    }

    void display(){
        cout<< "Id:" << id << " Name: "<< name<< "  Address: "<<address<< "  Salary: "<< salary<< endl;
    }
    

}; 


int main()
{

    Teacher T1; 
   
    T1.Teacher::getinput(); 
    T1.display(); 
    return 0; 
}