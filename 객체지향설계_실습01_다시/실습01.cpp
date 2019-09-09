#include <iostream>

class LetDebug
{
public:
	void printNum()
	{
		short s1 = 32767;
		short s2 = 1;
		int i = s1 + s2;
		std::cout << i << std::endl;
	}
};

int main() {

	LetDebug* id = new LetDebug; //
	id->printNum();

	return 0;
}