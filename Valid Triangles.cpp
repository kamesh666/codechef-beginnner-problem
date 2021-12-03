#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
   while(t--)
   {
   	int n,a,b,c;
   	cin>>a>>b>>c;
   	
   	int total=a+b+c;
   	
   	if(total>180 || total<180)
   	{
   		
   		cout<<"NO"<<endl;
	   }
   	else
   	{
   			cout<<"YES"<<endl;
	  
	   }  	
   }
	return 0;
}
