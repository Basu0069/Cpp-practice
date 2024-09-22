#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
cout<<endl;


    int m;
    cin>>m;
    vector<int>p;
    for(int i=0;i<m;i++){
        int element;
        cin>>element;
        p.push_back(element);
    }

    for(int i=0;i<m;i++){
        cout<<p[i]<<" ";
    }

    vector<int>z;
    for(int i=0;i<n;i++){
        bool found=false;
        for(int j =0;j<m;j++){
        if(v[i]==p[j]){
        found=true;
        break;
        }
    }
    if(!found){
        z.push_back(v[i]);
    }
    }

    for(int i=0;i<z.size();i++){
        cout<<z[i]<<" ";
    }
cout<<endl;

    return 0;
}
