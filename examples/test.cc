#include <iostream>
#include <string>

namespace myNamespace {

class myClass {
public:
	void foo();

private:
	int myMember;
};

} // ns

namespace {

struct myStruct {
	myNamespace::myClass myMember;

	void bar() {}
};

} // ns

int main() {
	int decl;
	int def = 0;

	myNamespace::myClass a;
	myStruct b;
}
