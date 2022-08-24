#include <iostream>
#include <functional>
#include "Func.h"



 template <typename T , typename U> Func<T , U> ::Func(int x) {
	std::cout << x << std::endl;
}
template <typename T , typename U> T Func<T , U>:: ApplyFunctional(std::function<T()>& func){
	func1();
}
template <typename T, typename U > U Func<T, U> :: ApplyLambda(std::function<U()>& func)
{
	func();
}

