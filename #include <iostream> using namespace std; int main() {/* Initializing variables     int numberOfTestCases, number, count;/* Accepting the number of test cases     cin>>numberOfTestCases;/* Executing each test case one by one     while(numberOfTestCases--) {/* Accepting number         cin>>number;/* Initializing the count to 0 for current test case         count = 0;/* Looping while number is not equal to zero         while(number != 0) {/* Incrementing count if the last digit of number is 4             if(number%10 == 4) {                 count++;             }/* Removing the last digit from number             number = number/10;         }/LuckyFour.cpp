#include <iostream>
using namespace std;
int main() {
    // * Initializing variables
    int numberOfTestCases, number, count;
    // * Accepting the number of test cases
    cin>>numberOfTestCases;
    // * Executing each test case one by one
    while(numberOfTestCases--) {
        // * Accepting number
        cin>>number;
        // * Initializing the count to 0 for current test case
        count = 0;
        // * Looping while number is not equal to zero
        while(number != 0) {
            // * Incrementing count if the last digit of number is 4
            if(number%10 == 4) {
                count++;
            }
            // * Removing the last digit from number
            number = number/10;
        }
        // * Displaying the value of count for current test case
        cout<<count<<endl;
    }
}
