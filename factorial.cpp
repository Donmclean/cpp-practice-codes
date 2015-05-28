//
//  C++ Factorial
//
//  Created by Don Mclean on 05/28/15.
//  Copyright (c) 2015 Don Mclean. All rights reserved.
//

#include <iostream>

using namespace std;

unsigned long factorial(unsigned long n);

int main ()
{
    cout << "Find the factorial (n!)" << endl;
    cout << "Enter a value for n: " << endl;

    unsigned long n = 0;
    cin >> n;

    unsigned long answer = 0;

    //find factorial
    answer = factorial(n);
    cout << "The factorial of "<< n << " is: " << answer << endl;
    cout << n << "! = " << answer << endl;

    return 0;
}

unsigned long factorial(unsigned long n)
{
    //eg: 5! = 5x4x3x2x1 = 120

    //base case
    //n * factorial(n-1)

    if (n < 1) { return 0;}
    if (n == 1) { return n;}
    else{
        return n * factorial(n-1);
    }
}