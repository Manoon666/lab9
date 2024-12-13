#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double loan, interest, pay, rate;

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i = 1;
	while(loan > 0 ){cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	i = i + 1;
	cout << setw(13) << left << loan;
	interest = loan*rate/100;
	cout << setw(13) << left << interest; 
	loan = loan + interest;
	cout << setw(13) << left << loan;
	if(loan < pay){ pay = loan;}
	cout << setw(13) << left << pay;
	loan = loan - pay;
	cout << setw(13) << left << loan;
	cout << "\n";	}
	
	return 0;
}
