#include<iostream>
using namespace std;
//  void print(Student s){
//     cout<<s.name<<" "<<s.rollno<<" "<<" "<<s.cgpa;

//  }
class Student{
    public: 
    string name ;
    int rollno;
    float cgpa;

};
void print(Student s){
    cout<<s.name<<" "<<s.rollno<<" "<<" "<<s.cgpa;

 }
int main(){
    Student s1;
    s1.name ="priyanshi vishwakarma ";
    s1.rollno=1253;
    s1.cgpa=7.24;
   // cout<<s1.name<<" "<<s1.rollno<<" "<<" "<<s1.cgpa;
 print(s1);




}