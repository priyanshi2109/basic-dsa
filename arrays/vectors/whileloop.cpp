#include<iostream>
#include<vector>
using namespace std;
    int main(){
        vector<int>v;
        for(int i=0;i<4;i++){
            int element;
            cout<<" enter elemement : ";
            cin>>element;
            v.push_back(element);
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }

        int index=0;
        while(index<v.size()){
            cout<<v[index++]<<" ";
        }
        cout<<endl;
    }
        