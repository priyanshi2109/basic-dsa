#include<iostream>
using namespace std;
class Scooty{
    public: 
     virtual void sound(){
        cout<<" vroom vroom "<<endl;
    }

};
class Bike:public Scooty{
    public: 
    void sound(){
        cout<<" dhroom dhroom "<<endl;
    }

};
int main(){
    Scooty* b1=new Bike ();
    b1->sound();
    (*b1).sound();

    // b1.sound();
    // Scooty s1;
    // s1.sound();
    // Bike b1;
    
    

}