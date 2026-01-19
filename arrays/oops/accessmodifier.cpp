#include<iostream>
using namespace std;
class Student {
    public: 
    string name;
    int rollno;
    //float marks;
    Student(){

    }
    Student (string n,int r,float m){
        name=n;
        rollno=r;
        marks=m;
    }
    float getmarks(){
        return marks;
    }
    void print(){
        cout<<name<<" "<<rollno<<" "<<marks;
    }
    void setmarks(float m){
        cout<<m;

    }
    

private: 
 float marks;

};
int main(){
     Student s1("priyanshi vishwakarama",1253,7.24);
    // Student s1;
    // s1.name="priyanshi vishwakarma ";
    // s1.rollno=13;  s1.marks=1253;
    s1.print();
    cout<<endl;
    cout<<s1.getmarks()<<endl;
     s1.setmarks(8.2);


}