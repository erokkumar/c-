#include<iostream>
using namespace std;

// int pivot(int arr[], int n){

//      int s = 0;
//      int e = n-1;

//      int mid = s + (e-s)/2;

//      while (s<e)
//      {

//      if (arr[mid]>=arr[0])
//      {
//           s = mid + 1;
//      }
//      else{
//           e = mid;
//      }
//      mid =  s + (e-s)/2;
     
//      }
//      return s;

// }

// int main(){

//      int arr[5] = {8,10,17,1,3};
//      cout<<"Pivot is = "<<pivot(arr , 5)<<endl;
// }

#include <bits/stdc++.h> 

int getpivot(vector<int>& arr, int n){

     int s = 0;
     int e = n-1;

     int mid = s + (e-s)/2;

     while (s<e)
     {

     if (arr[mid]>=arr[0])
     {
          s = mid + 1;
     }
     else{
          e = mid;
     }
     mid =  s + (e-s)/2;
     
     }
     return s;
}

int binary(vector<int>& arr, int s ,int e, int k){
     int start = s;
     int end = e;

     int mid = start + (end-start)/2;
     while(start <= end){
          if(arr[mid] == k){
               return mid;
          }
          if(k >arr[mid]){
               start = mid +1;
          }else{
               end = mid -1;
          }

          mid = start + (end - start)/2;
     }
     return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
     int privot = getpivot(arr , n);
    if(k>=arr[privot] && k <= arr[n-1]){
         return binary(arr,privot, n-1, k);

    }else{
         return binary(arr, 0, privot-1,k);
    }
}

