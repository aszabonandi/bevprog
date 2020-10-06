#include "std_lib_facilities.h"

int main()
{
	double a=0;
	double b=0;
	
	while(cin >> a >> b)
	{
		cout << "a=" << a << " b=" << b << endl;

		if(a<b)
			cout << "b a nagyobb: " << b << endl;
		if(b<a)
			cout << "a a nagyobb: " << a << endl;
		if(a==b)
			cout << "egyenlőek\n";

		if(abs(a-b)<=0.01) cout << "Majdnem egyenlőek\n";
	}		
	
	return 0;	
}
