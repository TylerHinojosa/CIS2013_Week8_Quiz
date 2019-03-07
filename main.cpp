#include <iostream>
using namespace std;

int findQuarters(int x){
	return (x/25);
}

int findDimes(int x){
	return (x/10);
}

int findNickles(int x){
	return (x/5);
}

int main(){
	int change = 0;
	
	cout << "Enter the amount of change you want: ";
	cin >> change;
	
	cout << "You would have " << findQuarters(change) << " quarters(s)" << endl;
	cout << "You would have " << findDimes((change % 25)) << " dime(s)" << endl;
	cout << "You would have " << findNickles(((change % 25) % 10)) << " nickel(s)" << endl;
	cout << "and " << (((change % 25) % 10) % 5) << " penny(s)" << endl;
	cout << "Thank you and have a nice day!";
}
	