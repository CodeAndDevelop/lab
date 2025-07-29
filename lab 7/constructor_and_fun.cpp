#include<iostream> 
#include<cstring> 
using namespace std;

class Staff{

    protected: 
   int id;  

    public: 
    Staff(){
        cout<<"Enter your Id: "; 
    cin>>id; 

    }



}; 

class Lecturer: public Staff{

    char subject[20]; 

  public: 
  Lecturer(char s[20]=""){strcpy(subject,s); }
  void display(){cout<<"id: "<< id<< " Subject : "<< subject<<endl; }
}; 



class Admin: private Staff{

    char dpt[20]; 
    public: 
    Admin(char d[20]=""){strcpy(dpt,d);  }
    void display(){cout<<"id: "<< id<< " Department: "<< dpt<<endl; }

}; 

class Librarain: public Staff{
   
char shift[20]; 

public: 
Librarain(char s[20]=" "){strcpy(shift,s); }
void display(){cout<<"id: "<< id<< " shift: "<< shift<<endl; }
}; 


int main()
{
    cout<<"For Lecturer: "<<endl; 
    Lecturer l("Math"); 

    cout<<"For Admin: "<<endl; 
    Admin A("Science"); 


    cout<<"For Librarian: "<<endl; 
    Librarain L("Morning");
    
    l.display(); 
    A.display(); 
    L.display(); 




    return 0; 
}