// #include<iostream>
// using namespace std;

// int main(){

// 	int n1,n2;
// 	cout<<"Enter the two nuumber "<<endl;
// 	cin>>n1>>n2;
    

// 	char op;
// 	cout<<"Enter the oprater "<<endl;
// 	cin>>op;

// 	switch (op)
// 	{
// 	case '+':
// 		cout<<n1+n2<<endl;
// 		break;

// 		case '-':
// 		cout<<n1-n2<<endl;
// 		break;

//         case '/':
// 		cout<<n1/n2<<endl;
// 		break;

// 		case '*':
// 		cout<<n1*n2<<endl;
// 		break;	

// 	default:

// 	cout<<"sorry not varibale store "<<endl;

// 		break;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

// 	int a= 6;
// 	int* b = &a;

// 	cout<<"The addresh of "<<&a<<endl;
// 	cout<<"the value of b "<<*b<<endl;

// 	return 0;

// }

// #include<iostream>
// using namespace std;

// int main(){

// 	int n;
// 	int x,y,z,p;
// 	cin>>n;

// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>x>>y>>z;
	
// 		p= x+z*2;
// 		if (p>=y)
// 		{
// 			cout<<"YES"<<endl;		
// 	    }
// 		else{
// 			cout<<"NO"<<endl;
// 		}
	
// 		}
// 	return 0;
// }
#include<iostream>
void main()
{
	int i=5;
	while(i)
	{
		switch (i)
		{
		default:
		case4:
		case 5:

			break;

			case 1:
			continue;

			case 2:
			case 3:
		
			break;
		}
		i--;
	}
}