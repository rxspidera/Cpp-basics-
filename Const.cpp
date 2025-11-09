#include <iostream>
#include <string>
using namespace std;

//Learning topic 4: Constant in c++
//Here let's use constant to calculate the circumference of a circle..🟢

int main() {
	float r = 7.8;
//r = Radius of a circle
	
	const float pi = 3.1416;
	//The value of pi is fixed.(It never changes).So, we used const (constant)
	
	float W;
	W = 2*r*pi;
	//W= circumference; Formula = 2*pi*radius
	
	cout << "Radius of the circle: " << r << " cm" <<endl;
 cout << "Formula used: 2 * pi * r" << endl;
	cout << "Circumference of circle : " << W << " cm" <<endl;
	
	return 0;
}