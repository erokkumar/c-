#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int score1,score2,player1=0,player2=0,curLead=0,l=0,w=0;
	
	while(n--){
	    cin>>score1>>score2;
	    player1 += score1;
	    player2 += score2;
	    
	    if(player1 > player2){
	        curLead = player1 - player2;
	        if(curLead > l){
    	        l = curLead;
    	        w = 1;
	        }
	    }
	    
	    else {
	        curLead = player2 - player1;
	        if(curLead > l){
    	        l = curLead;
    	        w = 2;
	        }
	    }
	        
	}
	cout<<w<<" "<<l<<endl;
	return 0;
}
