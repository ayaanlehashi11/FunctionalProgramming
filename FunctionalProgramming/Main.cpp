#include <iostream>

int main()
{
	Func <std::string> f;
	f.ApplyLambda([](void) {
		std::cout << "the value of x is " << f.x << std::endl;
		})
}