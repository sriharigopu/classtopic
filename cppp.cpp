#include<iostream>
using namespace std;
class aditya
{
	private:
		int phno;
	protected:
		double per;
	public:
		string roll;
		string name;
    aditya(int r,string me)
    {
       this->roll = r;
    	this->name = me;
	}
	 void display()
	{
		cout<<"harsha"<<"roll"<<" "<<"name";
	}		
};
int main()
{
	aditya s1(1,"harsha");
	s1.display();
	return 0;	
}
