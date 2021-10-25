#include <iostream> 
#include <cmath> 
using namespace std; 
int main (){ 
	const float X0=sqrt (2) , Y1=pow(2,0.25), pi0= 2+ sqrt(2); 
	double x1, x2, pi1, pi2,y1, y2 ; 
	
	cout<< "pi sub 0 da como resultado: " << pi0 <<endl; 
	
	x1= 1*(sqrt (2) + (1/ sqrt (2)) ) /2 ;  
	pi1= pi0* ((x1+1)/(Y1+1)); 
	cout << "pi sub 1 da como resultado: " << pi1<< endl; 
	cout << "x1 es : " << x1 << endl; 
	cout << "y1 es : " << y1 << endl; 
	cout << "Hola soy Alberto" << endl;
	
	x2=0.5* (sqrt (x1) + (1/ sqrt (x1)));
	y2= ((Y1 * sqrt(x1))+ (1 / sqrt(x1))/ Y1 +1);
	pi2= pi1 * (( x2+1 ) / (y2 +1)) ;
	cout<< "pi sub 2 sa como resultado: " << pi2 <<endl; 
	cout << "x2 es: "<< x2 << endl; 
	cout << "y2 es: " <<y2 <<endl; 
}


