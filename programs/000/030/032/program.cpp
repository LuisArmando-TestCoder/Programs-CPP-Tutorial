#include <iostream>

using namespace std;

// Struct is a type which is a collection of types, like interface in typescript
struct Person {
	string name;
	int age;
};

struct ChineseParent: Person {
	struct Person partner;
	struct Person children[2];
};

int main() {
	struct Person personA = {"Kami", 32};
	struct Person personB = {"Daisuke", 30};
	struct Person partner = {"Humeha", 48};
	struct ChineseParent parent = {
		"Daigo", 52, partner, {personA, personB}
	};

	cout << "------------ Parent ------------" << endl;
	cout << parent.name << " " << parent.age << endl;
	cout << "------------ Partner ------------" << endl;
	cout << parent.partner.name << " " << parent.partner.age << endl;
	cout << "------------ Children ------------" << endl;
	cout << parent.children[0].name << " " << parent.children[0].age << endl;
	cout << parent.children[1].name << " " << parent.children[1].age << endl;

	cin.get();

	return 0;
}