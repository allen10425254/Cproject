#include<iostream>
using namespace std;
class apple
{
private:
		int weight;
public:
	apple(int set_weight=0)
	{
		weight = set_weight;
	}
	
	void show_weight()
	{
		cout<< "show wight:"<< weight << "\n";
	}
	
};



main()
{
	
	
	
	apple x(100),y(50);
	
	x.show_weight();
	y.show_weight();
}
