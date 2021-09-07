// demonstrating how to modify the
// value of a vector's element

#include <iostream>
#include <vector>

int main()
{
	std::vector <std::string> vs; // create a vector of string objects
	std::string temp = "Hello World"; // create a string object
	
	vs.push_back(temp); // insert 1st element into vs
	std::cout << "First element using []: " << vs[0]
		<< std::endl; // using subscript operator
	std::cout << "First element using at(): " << vs.at(0)
		<< std::endl; // using at() member funcion

	temp = "Hello STL"; // assign a new value
	vs[0] = temp; // modify first element of vs
	std::cout << "First element modified using []: " << vs[0]
		<< std::endl;
	temp = "Hello Vector";
	vs.at(0) = temp;
	std::cout << "First element modified using at(): " << vs.at(0)
		<< std::endl;
}