#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class BMI{
	private:
	float Height, Mass, BMI_ans;
	string answer;
	public:
	void setHeight(float);
	void setMass(float);
	float formula();
	string judge();

};
