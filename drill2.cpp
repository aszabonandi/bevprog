#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the  name of the person you want to write to\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	
	cout << "How are you? I miss you.\n";
	cout << "Can I see you on the next week maybe? It would be very good.\n";
	
	cout << "Enter the name of another friend\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	
	char friend_sex='0';
	
	cout << "Enter an m if the friend is male and an f if the friend is female.\n";
	cin >> friend_sex;
	
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else
		cout << "If you see " << friend_name << " please ask her to call me.\n";
		
	cout << "Enter your friend's age\n";
	int age;
	cin >> age;
	if (age>0 && age<110)
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	else
		cout << "error(you're kidding!)\n";

	if (age<12)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age==17)
		cout << "Next year you will be able to vote.\n";
	if (age>70)
		cout << "I hope you are enjoying retirement.\n";
		
	cout << "Yours sincerely,\n\n\n";
	cout << "Szabó Nándor\n";
	
	return 0;
}
