
// #include<stdio.h>
// using namespace std;


// int binarySearch( int arr[],int size,int key){

// int start = 0;
// int end= size-1;
// int mid = start + (end-start)/2;

// while(start<=end){

//     if(arr[mid]==key){
//         return mid;
//     }

//     if(key>arr[mid]){
//         start=mid+1;

//     }
//     else{
//         end=mid-1;
//     }
//     mid=start+(end-start)/2;
// }
// return -1;

// }
// int main(){

//     int even[6]={2,4,6,8,12,18};
//     int odd[5]={3,8,11,14,16};

//     int evenIndex= binarySearch(even,6,12);

//     cout <<"index of 12 is " << evenIndex << endl;

//     int oddindex = binarySearch(odd,5,8);

//     cout<<"INdex of 8 is "<< oddindex << endl;


//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int pass){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
    if(arr[mid]==pass){
        return mid;
    }

    if(arr[mid]<pass){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return -1;
}


int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex= binarySearch(even,6,12);

    cout<<"THe value of 12 is "<< evenindex<< endl;

    int oddindex = binarySearch(odd,5,8);
    cout<<"THe value of 8 is "<< oddindex<< endl;
    return 0;
}