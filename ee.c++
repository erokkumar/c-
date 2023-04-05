#include <iostream>
using namespace std;

int main() {
	int n,x,y;
	cin>>n;
	while(n--)
	{
	    cin>>x>>y;
	    if(x>y)
	    {
	        cout<<(x-y)<<endl;
	    }
	    else
	    {
	        cout<<(y-x)<<endl;	    
	    }
	}
	return 0;
}
