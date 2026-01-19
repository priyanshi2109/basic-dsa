#include<iostream>
using namespace std;

class Student{
    public: 
    string name ;
    int rollno;
    float cgpa; 
    Student(){

    }

    Student(string s,int r){
        name=s;
        rollno=r;
    }
    

    Student (string s,int r,float g){
        name=s;
        rollno=r;
        cgpa=g;
    }

};
void print (Student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.cgpa;

}

int main(){
    Student s1("priyanshi vishwakarma ",1253,7.24);
   // cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa;

   print (s1);
   cout<<endl;
   Student s2(" om vishwakaram ",15,8.90);
   print (s2);
cout<<endl;
    Student s3;
    s3.name ="ankitaa";
    s3.rollno=12;
    s3.cgpa=8.2;
    print(s3);
    cout<<endl;
 Student s4(" riya",15);
 print(s4);
 cout<<endl;



}