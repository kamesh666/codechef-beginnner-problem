#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int sum=0;
	    int d;
	    while(n>0){
	        d=n%10;
	        sum+=d;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}