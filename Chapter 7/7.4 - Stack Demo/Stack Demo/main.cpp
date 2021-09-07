#include "callchain.h"

int main()
{
	status stat = success;
	CallChain chain;

	stat = chain.Call("func1");
	if (stat != failure)
		stat = chain.Call("bad_func");
	if (stat != success)
		chain.Throw("disaster!");
}