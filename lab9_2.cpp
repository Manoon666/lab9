#include<iostream>
using namespace std;

//Write the function printO() here

void printO(int x, int y){int i = 0, j = 0;
	if(x > 0 && y > 0)
	{while(j < x){
		i = 0;
		while(i < y){
		cout << "O";
	i = i + 1;}

	cout << "\n";
	j = j + 1;
	}}
	else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
