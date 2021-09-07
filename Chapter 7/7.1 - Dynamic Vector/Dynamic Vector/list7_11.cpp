// this program demostrates
// how to use STL vector class
// as a dynamic buffer

#include <vector>
#include <iostream>

int main()
{
	std::vector <int> vi; // create a vector of int(s)
	for (;;)
	{
		int temp;
		std::cout << "Enter a number. Press 0 to terminate."
			<< std::endl;
		std::cin >> temp;

		if (temp == 0) break; // exit from loop
		vi.push_back(temp); // insert int into the buffer
	}

	std::cout << "You entered " << vi.size() <<
		" elements into a dynamic vector" << std::endl;
}