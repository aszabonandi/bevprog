#include "std_lib_facilities.h"

int main()
{
	double a=0, min=0, max=0;
	int elso=0;
	
	while(cin >> a)
	{
		if(elso==0){
			min=a;
			max=a;
			elso=1;
		}

		cout << "a=" << a << endl;
		cout << elso << " " << min << " " << max << endl;
		if(min>a){
			min=a;
			cout << "eddig ez a legkisebb\n";
		}

		if(max<a){
			max=a;
			cout << "eddig ez a legnagyobb\n";
		}
		
	}		
	
	return 0;	
}
