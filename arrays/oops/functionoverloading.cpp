#include<iostream>
using namespace std;
class Priyanshi{
public: 
void om(string a,string b){
    cout<<a+b<<endl;
}
    void sum(int a,int b){
        cout<<a+b;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c;
    }


};
int main(){
    Priyanshi p;
    p.sum(1,2);
    cout<<endl;
    p.sum(1,2,3);
    cout<<endl;
    p.om("priyanshi ","vishwakarma ");


}