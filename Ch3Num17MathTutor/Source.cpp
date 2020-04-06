/************************************************
** Author: Andrea Hayes
** Date: Febuary 28th, 2020
** Purpose: Create random numbers to be added together then show soulution
** Input: Random numbers
** Processing: Random numbers then show solution
** Output: Two random numbers to be added together then show solution
*************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    unsigned seed = time(0);

    srand(seed); 

    const int MIN_VALUE = 1; // Minimum value for number
    const int MAX_VALUE = 999; // Maximum value for number
    int num1, num2; 
    int total;
    
    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; // Formula for random number
    num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    total = num1 + num2; // Adds two random numbers together

    cout << setw(5) << right << "Add the following numbers: " << endl;
    cout << setw(5) << right << num1 << endl;
    cout << setw(2) << right << "+" << num2 << endl;
    cout << "------" << endl;
    cout << "Press enter to continue." << endl; 
    cin.get();
    cout << setw(5) << right << num1 << endl;
    cout << setw(2) << right << "+" << num2 << endl;
    cout << "------" << endl;
    cout << setw(5) << right << total << endl;

    return 0;
}