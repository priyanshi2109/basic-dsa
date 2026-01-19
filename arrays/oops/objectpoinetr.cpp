#include<iostream>
using namespace std;
class Girls{
    public: 
    string name;
    int age;
    Girls(){

    }
    Girls (string s,int a){
        name=s;
        age=a;
    }
   
};
void change (Girls* g){
    g->age=19;
    //cout<<g.name<<g.age;
}
int main(){
    
    Girls g1("priya ",18);
    // Girls g1;
    // g1.name="priya";
    // g1.age =18;

   Girls* p= &g1;
    cout<<p<<endl;
   cout<<(*p).name<<endl;
   cout<<(*p).age<<endl;
p->name="riya";
cout<<(*p).name<<endl;
change(&g1);
 cout<<g1.age;
 

}