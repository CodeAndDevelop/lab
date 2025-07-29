// 2. wap to implement runtime polymorphism to find area fo rectangle by passing length 
// and breadth as arguments after creating memeber fuction in both derived and base class with same name. 

#include<iostream>

using namespace std; 

class Shape{
  public: void display()
  {
    cout<<"Any shape can be drawn you want: "; 
  }

   virtual void area(){
    cout<<"Vitrual area"; 
   } 
}; 


class Rectangle:public Shape{

    int lenght,breadth; 

    public: 
    Rectangle(int l=0 ,int b=0)
    {
      lenght=l; 
      breadth=b; 
    }


    void area()
    {
           cout<<"Area Of rectangle="<<lenght*breadth<<endl; 
    }
}; 

int main()
{
    Rectangle r(2,5);
    r.area(); 

    r.Shape::area(); 
    
    

    

    return 0; 
}