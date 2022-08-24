#include <iostream>
#include <string>
#include <functional>
#pragma once
#ifndef Func_h
#define Func_h
#endif

/* project - kan waxa uu ka hadlaya functional programming 
sida u shaqeeyo anigo adeesanaya lambda expression iyo 
functional pointers oo aad ku adeesan karto C iyo C++ 
(micnaha lambda expression iyo function pointers waxad ku adeesan karta C++ halka function pointers kaliya aad ku adeesan karto C,
sido kale qaabka loo adeesado functional header iyo functional class-ka
*/

template <typename U , typename T>
class Func {
public:
	Func(int x);
		// qaybtan waxan adeesaday function pointer waxan ugu talagay inan pass gareeyo higher functionka apply
	void ApplyFuncPointer(void(*FuncName)(int , int), int num1, int num2);
	//labadan overload mid waxan pass-gareynayna lambda expression
	T ApplyFunctional(std::function<T()>&func);
	//kan labaad waxan pass-gareynayna std::function type kaas bind ku sameynaya function-ka aynu u baahano
	U ApplyLambda(std::function<U()>&func);
public:
	int x_;
};

