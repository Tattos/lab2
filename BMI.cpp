#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"BMI.h"
using namespace std;
  void BMI::setHeight(float h){
    Height=h;
}
  void BMI::setMass(float m){
    Mass=m;
}
  float BMI::formula(){    
    if(Height!=0&&Mass!=0)
    	return BMI_ans=Mass/((Height/100)*(Height/100));
}
  string BMI::judge(){

		if(BMI_ans<15){
		answer="Very severly underweight";
		}
		else if(15<=BMI_ans&&BMI_ans<16){
		answer="Severly underwright";
		}
		else if(16<=BMI_ans&&BMI_ans<18.5){
		answer="Underweight";
		}
		else if(18.5<=BMI_ans&&BMI_ans<25){
		answer="Normal";
		}
		else if(25<=BMI_ans&&BMI_ans<30){
		answer="Overweight";
		}	
		else if(30<=BMI_ans&&BMI_ans<35){
		answer="Obese Class I(Moderatelt obese)";
		}
		else if(35<=BMI_ans&&BMI_ans<40){
		answer="Obese Class II(Severly obese)";
		}
		else if(BMI_ans>=40.0){
		answer="Obese Class III(Very severly obese)";
		}
		return answer;
  }

	
