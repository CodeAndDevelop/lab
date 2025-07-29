// 3. wap to show the use of abstract  class & pure virtual function 
#include<iostream> 
#include<cmath> 

using namespace std; 

class shape{
    protected: 
    float volume; 
    public: 

    virtual void findVolume()=0;
    
    
}; 

class cube: public  shape{
    int side; 

    public: 
    cube(int s=0)
    {
        side=s; 
    }

    void findVolume()
    {
        volume=pow(side,3); 
        cout<<"Volume = "<<volume<<endl; 
    }
}; 

class sphere:public  shape{

    float radius; 

    public: sphere(float r=0){radius=r; }

    void findVolume()
    {
        volume=4/3 *3.14*pow(radius,3); 
        cout<<"Volume="<<volume<<endl;
    }
}; 

int main()
{

    shape* ptr; 

    cube c(5); 
    sphere s(19); 

    ptr=&c; 
    ptr->findVolume();

    ptr=&s; 

    ptr->findVolume();
     
    return 0; 
}