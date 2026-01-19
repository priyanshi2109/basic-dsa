#include<iostream>
#include<vector>
using namespace std;
    int main(){
        vector<int>v;
        for(int i=0;i<5;i++){
           
            int element ;
            cout<<" enter element: ";
            cin>>element;
            v.push_back(element );

        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    //     v.push_back(7);
    //    // cout<<v[i]<<" ";
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<endl;
    //     v.pop_back();
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<endl;
    //     v.insert(v.begin()+2,5);
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<endl;

    //     v.insert(v.begin()+1,4);
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;


    }