#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    cin>>a>>b;
    
    if((a+0.5)<=b&&(a%5==0)) {
        cout<<b-a-0.5<<endl;
    }else
    cout<<b<<endl;
    
	// your code goes here
	return 0;
}
