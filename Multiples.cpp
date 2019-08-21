#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){

    int Number;
    vector<int> multiples;

    cout << "Enter a number:" << endl;
    cin >> Number;

    for(int i = 1; i < Number; i++){
        if(i%3==0){
            //cout << "Three Multiples: " << i << endl;
            multiples.push_back(i);
        }
        if(i%5==0){
            //cout << "Five Multiples: " << i << endl;
            multiples.push_back(i);
        }
    }
    
    cout << "Sum of multiples: " << endl;
    cout << accumulate(multiples.begin(),multiples.end(),0) << endl;

    return 0;
}