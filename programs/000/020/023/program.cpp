#include <iostream>

using namespace std;
 
class ThisThing {
	public:
		ThisThing() {
			cout
			<< "This Thing is a class constructor"
			<< endl
			<< "It is a method with no return type"
			<< endl;
		}
	
	public:
		void greet() {
			cout << "Hey... I am greeting you, whatup" << endl;
		}
};

int main() {
	ThisThing thing;

	thing.greet();

	cin.get();

	return 0;
}