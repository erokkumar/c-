// #include<iostream>
// using namespace std;

// int main(){
//     /* Enter your code here*/

//     int n;
//     int c, total =0;

//     cin>>n;

//     for (int i = 0; i <n; i++)
//     {
//         cin>>c;
//         total += c;
//     }

//     cout<<total;

//     return 0;
    

// }

// // 
// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     static int c =1;
//     c= c - 1;
//     return a*b-c;
// }

// int main(){
//      int a,b;
//      cout<<"Enter the number"<<endl;
//      cin>>a>>b;

//      cout<<"tha value are "<<sum(a,b)<<endl;
//      cout<<"tha value are "<<sum(a,b)<<endl;
//      cout<<"tha value are "<<sum(a,b)<<endl;
//      cout<<"tha value are "<<sum(a,b)<<endl;
//      cout<<"tha value are "<<sum(a,b)<<endl;
//      cout<<"tha value are "<<sum(a,b)<<endl;


//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        int y;
        int d;
        cin>>x>>y>>d;
        if((x-y)<=d){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}