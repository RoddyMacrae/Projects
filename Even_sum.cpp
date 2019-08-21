#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){

    vector<int> even;
    int Fib = 0;
    int Fib_old = 1;

    int n;
    cout << "This short macro returns the sum of all the even numbers in the Fibonacci sequence up to the user input (limited up to values no greater than 4 million.)" << endl;
    cout << "Enter a number: " << endl;
    cin >> n;

    for(int i = 1; i < n; i++){

        Fib = Fib_old + Fib;
        Fib_old = Fib - Fib_old;

        if(Fib%2==0 && Fib <= 4000000){
            cout << "Fibonacci sequence: " << Fib << endl;
            even.push_back(Fib);
        }
    }

    cout << "Sum: " << accumulate(even.begin(),even.end(),0) << endl;

    return 0;

}