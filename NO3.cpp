#include <iostream>
#include <cstdlib>

using namespace std;

template <class Var>
Var Absolute (Var num){
    return abs(num);
}

int main(){
    int num;
    int abs;

    cout << "Enter a number: ";
    cin >> num;

    abs = Absolute(num);

    cout << "The absolute is: " << abs << endl;

    return 0;
}
