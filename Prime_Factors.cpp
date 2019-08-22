#include <iostream>

using namespace std;

int PrimeCheck(int);

int main(){

    int count;
    bool isPrime;
    
    cout << "This code returns the largest prime factor of a number." << endl;
    cout << "Enter a number:" << endl;
    cin >> count; 
    cout << "Largest Prime Factor is:" << endl;

    //for(int n = 2; n < count; n++){
    for(int n = count; n > 2; n--){
    
        isPrime = PrimeCheck(n);

        if(isPrime == true && count%n==0){

            cout << n << endl;
            break;

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