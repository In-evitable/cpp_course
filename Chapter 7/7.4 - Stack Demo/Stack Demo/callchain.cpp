#include <iostream>
#include "callchain.h"

CallChain::CallChain()
{
	st.push("main"); // first we push the main into the stack
	std::cout << "Pushed main; Total: " << st.size() << std::endl;
}

CallChain::~CallChain()
{
	if (!st.empty()) st.pop();
}

status CallChain::Call(const std::string& function)
{
	st.push(function); // call another function
	std::cout << "Pushed " << function << "; Total: " 
		<< st.size() << std::endl;
	if (function == "bad_func")
		return failure;
	return success;
}

void CallChain::Throw(const std::string& excep)
{
	while (!st.empty()) // unwind the stack
	{
		if (!HandlerExists(excep))
			ExitCurrentScope(); // terminate current function
		else
			break;
	}
}

bool CallChain::HandlerExists(const std::string& excep)
{
	return false;
}

void CallChain::ExitCurrentScope()
{
	std::string func = st.top();
	st.pop();
	std::cout << "Popped " << func << "; Total " << st.size()
		<< std::endl;
}