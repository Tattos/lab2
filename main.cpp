#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"lab2.h"
using namespace std;
int main()
{
	BMI file;
	float height, mass; 
	ifstream inFile("file.in",ios::in);
	if(!inFile){
	  cerr<<"Failed opening"<<endl;
	  exit(1);
	}
	ofstream outFile("file.out",ios::out);
	while(inFile>>height>>mass&&height!=0&&mass!=0){
	  file.setHeight(height);
	  file.setMass(mass);
	  float temp_f=file.formula();
	  string temp_j=file.judge();
	  outFile<<temp_f<<"\t"<<temp_j<<endl;
	}	
	inFile.close();
	outFile.close();
	return 0; 
}
	  

