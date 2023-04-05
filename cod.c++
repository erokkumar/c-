#include <iostream>
using namespace std;

int main() {
	// your code goes here
  int t;
  cin>>t;
while (t--)
{
    int n,m,k; 
  cin >> n>>m>>k;
    int a=m-k;
    if(a>=n)
    {
        cout << "yes" <<endl;
    }
    else 
    {
        cout << "no" <<endl;
    }
} 
	return 0;
}