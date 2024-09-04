
// // // #include<stdio.h>
// // // using namespace std;


// // // int binarySearch( int arr[],int size,int key){

// // // int start = 0;
// // // int end= size-1;
// // // int mid = start + (end-start)/2;

// // // while(start<=end){

// // //     if(arr[mid]==key){
// // //         return mid;
// // //     }

// // //     if(key>arr[mid]){
// // //         start=mid+1;

// // //     }
// // //     else{
// // //         end=mid-1;
// // //     }
// // //     mid=start+(end-start)/2;
// // // }
// // // return -1;

// // // }
// // // int main(){

// // //     int even[6]={2,4,6,8,12,18};
// // //     int odd[5]={3,8,11,14,16};

// // //     int evenIndex= binarySearch(even,6,12);

// // //     cout <<"index of 12 is " << evenIndex << endl;

// // //     int oddindex = binarySearch(odd,5,8);

// // //     cout<<"INdex of 8 is "<< oddindex << endl;


// // //     return 0;
// // // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int binarySearch(int arr[],int size,int pass){

// //     int start=0;
// //     int end=size-1;
// //     int mid=start+(end-start)/2;
// //     while(start<=end){
// //     if(arr[mid]==pass){
// //         return mid;
// //     }

// //     if(arr[mid]<pass){
// //         start=mid+1;
// //     }
// //     else{
// //         end=mid-1;
// //     }
// //     mid=start+(end-start)/2;
// // }
// // return -1;
// // }


// // int main(){
// //     int even[6]={2,4,6,8,12,18};
// //     int odd[5]={3,8,11,14,16};

// //     int evenindex= binarySearch(even,6,12);

// //     cout<<"THe value of 12 is "<< evenindex<< endl;

// //     int oddindex = binarySearch(odd,5,8);
// //     cout<<"THe value of 8 is "<< oddindex<< endl;
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// int firstOcc(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1
//                     }
//     }
// }







// int main(){

//  int even[11]={1,2,3,3,3,3,3,3,3,3,5};
//  cout<<"first occuremce of 3 is at index"<<firstOcc(even,11,3);
//  cout<<"last occuremce of 3 is at index"<<lastOcc(even,11,3);
 
//     return 0;
// }


// 0,2,1,0
 

 

arr[i]<arr[i+1]
arr[i] & arr[]