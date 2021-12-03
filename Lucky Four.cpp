#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a[t];
	
	for(int i=0; i<t; i++)
	{
	    cin>>a[i];
	}
	int flag = 0;
	
	for(int j=0; j<t; j++)
	{
	    int p = a[j];
	    flag=0;
	    while(p!=0)
	    {
	       if(p%10==4)
	       {
	           flag++;
	       }
	       p = p/10;
	    }
	    cout<<flag<<endl;
	}
	return 0;
}
