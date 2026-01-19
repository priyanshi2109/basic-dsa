
/* operation of insert and erase element */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,3,4,5,6,};
    v.insert(v.begin()+1,6);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}
