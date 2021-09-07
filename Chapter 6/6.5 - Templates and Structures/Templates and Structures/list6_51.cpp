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

template <class T>
class TNotSimple
{
private:
	T d;
public:
	TNotSimple(T n) { d = n; }
	void Show() { LOG(d); }
};

int main()
{
	struct data man = { "Man", 45, 1.8 };
	
	TNotSimple<data> x(man);
	x.Show();

	return 0;
}