/*
 * Diego Sebastian Santana, dsp50
 * 10/8/18
 * Program compiles a basic Power function.
 */
#include <iostream>

using namespace std;

double calcpow(double x, int y)
{
 // To be implemented by you
 if (y == 0){
 	return 1;
 } else if(y < 0){
     return (1 / x*(calcpow(x, -y)));
 }else{
     return  x * calcpow(x, y - 1);
 }
}

int main() 
{
	cout << "To calculate x^y ..." << endl;
	
	double x;
	int y;
	cout << "Please enter x: ";
	cin >> x;
	cout << "Please enter y: ";
	cin >> y;
	
	if(x == 0) {
		if (y > 0)
			cout << 0 << endl;
		else
			cout << "x^y is not defined" <<endl;
	}
	else
		cout << calcpow(x,y) << endl;
		
		
	return 0;
}

