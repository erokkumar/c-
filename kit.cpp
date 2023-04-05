#include<iostream>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t--)
     {
          int n;
          int count =0;
          cin>>n;
          int arr[n];
          int arr1[n];
          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
          }
          for (int i = 0; i < n; i++)
          {
               cin>>arr1[i];
          }
          for (int i = 0; i < n; i++)
          {
              if (i==0)
              {
               if (arr[i]>=arr1[i])
               
                    count++;
              }
               else{
                    if ((arr[i] - arr[i-1])>= arr1[i])
                         count++;  
               }
               
               
              }
              
               cout<<count<<endl;
          }
          
          
          return 0;
     }