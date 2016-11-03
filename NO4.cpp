#include <iostream>

using namespace std;

template <class Var>
Var Total (Var totalNum){
	
	Var total = 0;
	Var num;
	
	int i = 0;
	
	cout << "Number : " << endl;
	
	while (i < totalNum){
		cin >> num;
		
		total += num;
		
		i++;
	}
	return total;
}

int main (){
	int num;
	
	cout << "How much numbers do you want to enter? ";
	cin >> num;
	
	cout << "Total : " << Total(num) << endl;
	
	return 0;
}
