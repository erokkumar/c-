#include <bits/stdc++.h> 
using namespace std;
int main(){
     int t;
     cin>>t;
     while (t--)
     {
          int n;
          cin>>n;
          int arr[n];

          for (int i = 0; i < n; i++)
          {
               cin>>arr[i];
          }

          for (int i = 0; i <n-1; i++)
          {
              int min = i;

              for (int j = i + 1; j < n; j++)
              {
                 if(arr[j]<arr[min])
                 min = j;
              }   
              
          }
     }
     return 0;
}