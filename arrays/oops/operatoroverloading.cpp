#include<iostream>
using namespace std;
class Fraction{
    public: 
    int num;
    int den;
    Fraction (int num,int den){
        this-> num=num;
        this-> den=den;


    }
    void display(){
        cout<<num<<" / "<<den;
    }
    
    Fraction operator +(Fraction f){
        int newnum=this->num*f.den+this->den*f.num;
        int newden=this->den*f.den;
        Fraction ans(newnum,newden);
        return ans ;
    }



};
int main(){
    Fraction f1(1,3);
    Fraction f2(2,4);
    f1.display();
    cout<<endl;
    f2.display();
    cout<<endl;

    // Fraction f3=f1.add(f2);

   Fraction f3=f1 + f2;
    f3.display();


}