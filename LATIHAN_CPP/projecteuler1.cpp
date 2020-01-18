/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <iostream>
using namespace std;
int i, sum;

int main (){
	while (i<10) {
		if (i%3==0)
			sum = sum + i;
		else if (i%5==0)
			sum = sum + i;
		i++;
	}
	cout << sum;
	return 0;
}
