#include "std_lib_facilities.h"

int main()
{
	double a=0, min=0, max=0, sum=0, meter=0;
	int elso=0, db=0;
	string unit;
	vector<double> vektor;
	cout << "Enter a number and unit (cm,m,in,ft)\n";
	while(cin >> a >> unit)
	{

		if(unit=="cm"||unit=="m"||unit=="in"||unit=="ft"){




		

		if(unit=="cm"){
			sum = sum + a/100;
			meter = a/100;
		}
		if(unit=="m"){
			sum = sum + a;
			meter = a;
		}
		if(unit=="in"){
			sum = sum + a*2.54/100;
			meter = a*2.54/100;
		}
		if(unit=="ft"){
			sum += sum + a*12*2.54/100;
			meter = a*12*2.54/100;
		}

		db=db+1;

		if(elso==0){
			min=meter;
			max=meter;
			elso=1;
		}
		if(meter<min){
			min=meter;
		}
		if(meter>max){
			max=meter;	
		}

		vektor.push_back(meter);


		}else{
 			cout << "wrong unit\n";
		}

		
		
	}

	cout << "min: " << min << " max: " << max << " sum: " << sum << " db: " << db << endl;		

	sort(vektor);
	for( int i = 0; i < vektor.size();++i){
		cout << vektor[i] << " ";
	}	
	cout << endl;


	return 0;	
}
