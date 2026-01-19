#include<iostream>
using namespace std;
class Girls {
    public: 
    string name;
    int age;
    int cls;
    Girls (){

    }
    Girls (string n,int a,int c){
       this-> name=n;
       this-> age=a;
       this-> cls=c;
    }
    void print(){                                          //function inside the class
         cout<<name<<" "<<age<<" "<<cls;
    }

    //devision of age and class
    int div(){
        return age/cls;
    }

};
// void print (Girls g){                               //function outside the class
//     cout<<g.name<<" "<<g.age<<" "<<g.cls;
// }
int main(){
Girls g1("riya ",18,9);
g1.name="priya";
g1.print();
cout<<endl;
cout<<g1.div();

}