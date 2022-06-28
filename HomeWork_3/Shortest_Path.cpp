#include "Shortest_Path.h"
#include <sstream>

void Shortest_Path::Shortest_P()
{
	if (temp.first > real.second.first)
	{
		--(temp.first);
	}
	else if (temp.first < real.second.first)
	{
		++(temp.first);
	}
	else
	{
		if (temp.second > real.second.second)
		{
			--(temp.second);
		}
		else if (temp.second <= real.second.second)
		{
			++(temp.second);
		}
	}
}

Shortest_Path::Shortest_Path(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Shortest_Path::set_A(int x, int y)
{
	real.first.first = x;
	real.first.second = y;
}

void Shortest_Path::set_B(int x, int y)
{
	real.second.first = x;
	real.second.second = y;
	temp = real.first;
}

string Shortest_Path::run()
{
	Shortest_P();
	stringstream ss;

	for (int i = 1; i <= x; ++i)
	{
		for (int j = 1; j <= y; ++j)
		{
			if (i == temp.first && j == temp.second)
			{
				ss << "x";
			}
			else if (i == real.first.first && j == real.first.second)
			{
				ss << "A";
			}
			else if (i == real.second.first && j == real.second.second)
			{
				ss << "B";
			}
			else
			{
				ss << "-";
			}
		}
		ss << endl;
	}

	return ss.str();
}


pair<int, int> Shortest_Path::temp_one()
{
	return temp;
}

pair<int, int> Shortest_Path::real_one()
{
	return real.second;
}