#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--){
	      int n;
           cin>>n;
	      int count = 0;
	    //   cin>>n;
	     while(n!= 0){
	        if(n%10 == 4){
	            count++;
	           //  n= n/10;
	        }
             n=n/10;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}