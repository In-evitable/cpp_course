#include <vector>
#include <iostream>

int main()
{
	std::vector <std::string> vs; // create a vector of strings(s)
	for (;;)
	{
		std::string temp;
		std::cout << "Enter a string and press enter. Press \"stop\""
			<< " to terminate" << std::endl;
		std::cin >> temp;

		if (temp == "stop") break; // exit from loop
		vs.push_back(temp); // insert string into the buffer
	}
	std::cout << "You entered " << vs.size() << " elements into "
		<< "a dynamic vector" << std::endl;
}