#include<bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long s =1, end = n;
	    long long ans,res;
	    long long mid;
	    
	    
	    cin>>n;
	    while(s<=end){
	         mid = (s+end)/2;
	        res = (mid) * (mid+1)/2;
	        if(res<=n){
	            ans =mid;
	            s = mid + 1;
	        }else{
	            end= mid-1;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
