#include<iostream>
using namespace std;

class A {
	private:
		int val;
	public:
		A(int x) { val = x; }
};

int main() {
	A a(3);
	return 0;
}
