#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;                                             // the number of values to analyse
    int i;                                             // Integer to loop over
    int t = 0;                                         // Initalise the variable to assign input variables to
    int Nearest = 10000000;                            // Initialise a variable used to determine how close to zero an input variable is
    int Test[n];                                       // Array, of size n, to assign input values to
    
    cin >> n; cin.ignore();                            // gets the number of values to loop over and ignores the next line
 
    for (i = 0; i < n; i++) {                          // for loop to loop over input variables, between zero and n
        
        cin >> t; cin.ignore();                        // takes each input values per loop and ignores the next line
        Test[i] = t;                                   // Assigns the input value to the Test[n] array for each iteration
        
        if( abs(Nearest) > abs(Test[i]) ){             // Assigns the variable 'high' the input value if the absolute value of high is larger than the absolute value of the input
            Nearest = Test[i];
        }
        else if( abs(Nearest) == abs(Test[i]) ){       // Sets the conditions for when the absolute values of the variable 'high' and the input are equal
            if(Nearest < Test[i] ) Nearest = Test[i];  // Assigns the value of 'high' to the input value if it is smaller than the input value (i.e. if the 'high' and input value are -4 and 4 respectively)
        }
        else{
            continue;                                  // Continues loop if Nearest variable value is less that input value
        }
    }
    
    if(t==0) cout << t << endl;                        // if no values given then outputs 0
    else cout << high << endl;                         // outputs value closest to 0
}
