#include <iostream>
using namespace std;

class Complex {
	float r,i;

	public:
		Complex() {}
		Complex(float r, float i) {
			this->r = r;
			this->i = i;
		}
		void display() {
			cout << "value of r is : " << r << endl;
			cout << "value of i is : " << i << endl;
		}
		Complex operator+(Complex c) {
			return Complex(r + c.r, i + c.i);
		}
};

int main() {
	Complex c1(2,3);
	Complex c2(3,2);
	Complex c = c1 + c2;
	c.display();
	return 0;
}
