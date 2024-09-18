#include<iostream>
#include<string>
using namespace std;
class calculator{
	public:
		int add(int a,int b){
			return a+b;
		}
		float add (float a,float b){
			return a+b;
		}
		string add(const string& a, const string& b){
			return a+b;
		}
}; 
int main(){
	calculator calc;
	int int1,int2;
	float float1,float2;
	string str1,str2;
	
	cout<<"Enter two integers: ";
	cin>>int1>>int2;
	cout<<"Add Integers : "<<calc.add(int1,int2)<<endl;
	
	cout<<"Enter two float : ";
	cin>>float1>>float2;
	cout<<"Add floats : "<<calc.add(float1,float2)<<endl;
	
	cout<<"Enter two  strings: ";
	cin>>str1>>str2;
	cout<<"Add stringsn :"<<calc.add(str1,str2)<<endl;
	
	return 0;
}
