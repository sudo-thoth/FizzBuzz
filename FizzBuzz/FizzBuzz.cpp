
// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	while (x < 101) {
	cout << x << endl;
		x++;
		if (x % 5 == 0 && x % 7 == 0) {
			cout << "FizzBuzz" << endl;
		}
			
		else if (x % 5==0) {
			cout << "Fizz" << endl;
			
		}
		else if (x % 7 == 0) {
			cout << "Buzz" << endl;
		}
	
	
	}

    return 0;
}

