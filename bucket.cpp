#include<bits/stdc++.h>
using namespace std;

// int main(){
//      int t;
//      cin>>t;
//      while (t--)
//      {
//           int a,b,c,d;
//           cin>>a>>b>>c>>d;
          
//           int sum = a+c*d;
//           cout<<sum<<endl;
//           if (sum==b)
//           {
//                cout<<"filled"<<endl;
//           }else if (sum>b)
//           {
//                cout<<"overflow"<<endl;
//           }else{
//                cout<<"Unfilled"<<endl;
//           }

          
//      }
     
// }

// bool ispossible(int n, int m, int mid, vector<int> arr){
// 	int stucont = 1;
// 	int pagesum = 0;

// 	for(int i =0; i<n; i++){
// 		if(pagesum + arr[i] <= mid){
// 			pagesum += arr[i];
// 		}else{
// 			stucont++;
// 			if(stucont >m || arr[i]>mid){
// 				return false;
// 			}
// 			pagesum = arr[i];
// 		}
// 	}
// 	return true;
	
// }
// long long ayushGivesNinjatest(int n, int m, vector<int> arr) 
// {	
// 	int s = 0;
// 	int ans =-1;
// 	int sum = 0;
// 	 for(int i =0; i<n; i++){
// 		 sum += arr[i];
// 	 }
// 	 int e = sum;
// 	 int mid = s + (e-s)/2;
// 	 while(s<=e){
// 		 if(ispossible(arr,n,m,mid)){
// 			 ans = mid;
// 			 e = mid-1;
// 		 }else{
// 			 s = mid + 1;
// 		 }
// 		 mid = s + (e-s)/2;
// 	 }
// 	 return ans;
// }


bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
   
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
           
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}