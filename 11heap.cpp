#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

vector<int>a;

for(int i=0;i<n;i++){
    int element;
    cin>>element;
    a.push_back(element);
}
cout<<endl;


for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;

// max heap
make_heap(a.begin(),a.end());
for(auto i: a){
    cout<<i <<" ";
}cout<<endl;




// min heap
make_heap(a.begin(),a.end(),greater<int>());
for(auto i: a){
    cout<<i<<" ";
}

cout<<endl;








}