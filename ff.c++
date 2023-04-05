// #include<iostream>
// using namespace std;


// int binary(int arr[] ,int n, int k){

//      int start = 0;
//      int end = n-1;
//      int ans =0;
//      int mid = start + (end - start)/2;

//      while (start <= end)
//      {
//           if (arr[mid]== k)
//           {
//                 ans = mid;
//                 end = mid - 1;
//           }else if(arr[mid]>k)
//           {
//                start = mid +1;
//           }
//           else{
//                end = mid - 1;
//           }
//           mid = start + (end - start)/2;
          
//      }
//      return ans;
     
// }

// int binarylast(int arr[] ,int n, int k){

//      int start = 0;
//      int end = n-1;
//      int ans =0;
//      int mid = start + (end - start)/2;

//      while (start <= end)
//      {
//           if (arr[mid]== k)
//           {
//                 ans = mid;
//                 start = mid + 1;
//           }else if(arr[mid]>k)
//           {
//                start = mid + 1;
//           }
//           else{
//                end = mid - 1;
//           }
//           mid = start + (end - start)/2;
          
//      }
//      return ans;
     
// }


// int main(){
//      int even[5] = {5,6,7,22,24};
//      cout<<"first number "<<binary(even, 5, 7)<<endl;
//      cout<<"last number "<<binarylast(even , 5, 7)<<endl;

// }
#include<vector>
using namespace std;

int binary(vector<int>& arr, int n, int k){

     int start = 0;
     int end = n-1;
     int ans =0;
     int mid = start + (end - start)/2;

     while (start <= end)
     {
          if (arr[mid]== k)
          {
                ans = mid;
                end = mid - 1;
          }else if(arr[mid]>k)
          {
               start = mid +1;
          }
          else{
               end = mid - 1;
          }
          mid = start + (end - start)/2;
          
     }
     return ans;
     
}

int binarylast(vector<int>& arr,int n, int k){

     int start = 0;
     int end = n-1;
     int ans =0;
     int mid = start + (end - start)/2;

     while (start <= end)
     {
          if (arr[mid]== k)
          {
                ans = mid;
                start = mid + 1;
          }else if(arr[mid]>k)
          {
               start = mid + 1;
          }
          else{
               end = mid - 1;
          }
          mid = start + (end - start)/2;
          
     }
     return ans;
     
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = binary(arr, n , k);
    p.second = binarylast(arr, n , k);

    return p;
}