#include <iostream>

class LetDebug
{
public:
	void printNum()
	{
		short s1 = 32767;
		short s2 = 1;
		uint16_t n = s1 + s2; // unsigned 16-bit int.. t?
		std::cout << n << std::endl;
	}
}; // like structure

int main() {

	LetDebug* id = new LetDebug; // like Java
	id->printNum();

	return 0;
}