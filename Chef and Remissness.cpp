#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t-->0) {
	    int a,b;
	    cin >> a >> b;
	    cout << max(a,b) << " " << a + b << "\n" ;
	}
	return 0;
}
