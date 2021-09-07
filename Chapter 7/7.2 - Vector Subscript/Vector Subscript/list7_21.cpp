// this program demonstrates
// two methods of accessing 
// a vector element

#include <vector>
#include <iostream>

int main()
{
	std::vector<char> vc; // creates a vector of chars
	for (int i = 0; i < 10; i++)
	{
		char temp = 'a' + i; // 'a' 'b' 'c' etc
		vc.push_back(temp);
		std::cout << "Element [" << i << "] is:  " << vc[i]
			<< std::endl; // using subscript operator
		std::cout << "Element at " << i << " is: " << vc.at(i)
			<< std::endl; // using at() member function
	}
}