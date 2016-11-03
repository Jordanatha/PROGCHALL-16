#include <iostream>

using namespace std;

template <class Var>
Var Maximum(Var x, Var y){

    if(x > y)
        return x;
    else
        return y;
}

template <class Var>
Var Minimum(Var x, Var y){
	
    if(x < y)
        return x;
    else
        return y;
}


int main(){
	
   int num1;
   int num2;
   int maxNum;
   int minNum;

   cout << "Enter number 1: ";
   cin >> num1;
   cout << "Enter number 2: ";
   cin >> num2;

   maxNum = Maximum(num1, num2);
   minNum = Minimum(num1, num2);

   cout << "The biggest number is " << maxNum << endl;
   cout << "The smallest number is " << minNum << endl;

    return 0;
}
