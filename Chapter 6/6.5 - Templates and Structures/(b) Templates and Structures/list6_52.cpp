// template using single data item

#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#define tab '\t'

struct data
{
	char name[28];
	int age;
	double height;
};

std::ostream& operator << (std::ostream& str_out, data& q)
{
	str_out << q.name << tab;
	str_out << q.age << tab;
	str_out << q.height << tab;

	return(str_out);
}

std::istream& operator >> (std::istream& str_in, data& q)
{
	std::cout << "Enter name: ";
	str_in >> q.name;
	std::cout << "Enter age: ";
	str_in >> q.age;
	std::cout << "Enter height: ";
	str_in >> q.height;

	return (str_in);
}

template <class T>
class TNotSimple
{
private:
	T d;
public:
	TNotSimple() {};
	void Gather() { std::cin >> d; }
	void Show() { LOG(d); }
};

int main()
{
	TNotSimple<data> x;
	x.Gather();
	x.Show();

	return 0;
}