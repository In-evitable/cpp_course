#include <iostream>
#include <stack>

enum status { success, failure }; // return codes

class CallChain
{
private:
	std::stack <std::string> st;

protected:
	bool HandlerExists(const std::string& excep);
	void ExitCurrentScope();

public:
	CallChain();
	~CallChain();
	status Call(const std::string& function);
	void Throw(const std::string& excep);
};