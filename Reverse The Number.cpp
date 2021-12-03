#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	int j;
	for(int i =0;i<t;i++){
	    int n;
	    int rev = 0;
	    cin>>n;
	    while(n>0){
	        j = n%10;
	        rev = rev*10 + j;
	        n = n/10;
	    }
	    cout<<rev<<endl;
	    
	}
	
	return 0;
}
