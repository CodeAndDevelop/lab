#include<iostream> 

using namespace std;

class Shape{

    protected: 
   int l,b; 

    public: 
    void input()
    {
        
        cout<<"Enter the length: "; 
        cin>>l; 
        
        cout<<"Enter the breadth: "; 
        cin>>b; 

    }

}; 

class Rectangle: public Shape{

  public: 
  void area()
  {
    cout<<"Area of rectange: "<<l*b<<endl; 
  }
}; 


class Traingle: private Shape{

    public: 
    Traingle(){input(); }
    void area()
    {
        cout<<"Area of traingle: "<< 0.5*l*b; 
    }
}; 


int main()
{
    Rectangle R1; 
    cout<<"For rectangle: "<<endl; 
    R1.input(); 


    cout<<"For Traingle: "<<endl; 
    Traingle T1; 
    
    R1.area(); 
    T1.area(); 

    return 0; 
}