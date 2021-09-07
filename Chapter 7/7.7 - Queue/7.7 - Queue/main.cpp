// demonstating STL's queue
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue <int> iq; // instantiate a queue of ints

	iq.push(93); // insert the first element, it is the topmost one
	iq.push(250);
	iq.push(25);
	iq.push(10); // last element is located at the bottom

	cout << "Currently there are " << iq.size() << " elements" << endl;

	while (!iq.empty())
	{
		cout << "The last element is: " << iq.front() << endl;
		// front returns the topmost element
		iq.pop(); // remove the top-most element
	}
}