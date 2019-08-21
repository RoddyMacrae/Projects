#include <iostream>
#include <math.h>

using namespace std;

int PrimeCheck(int);

int main(){

    int count;
    bool isPrime;
    
    cout << "Enter a number" << endl;
    cin >> count;

    cout << "Finding primes between 1 and " << count << endl;

    for(int n = 2; n < count; n++){

        isPrime = PrimeCheck(n);

        if(isPrime == true){
            cout << n << endl;
        }
    }
    
    return 0;

}

int PrimeCheck(int n){

    bool isPrime = true;

    for(int i = 2; i<=n/2; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}