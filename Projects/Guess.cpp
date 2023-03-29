#include<iostream>
using namespace std;
int main(){
	int birthyear,age,guess=0;
	
	cout<<"Enter age birthyear and I will guess your age: ";
	cin>>birthyear;
	
	age=2022-birthyear;
	
	do{
		cout<<"Hmm"<<guess<<"?"<<endl;
		++guess;
		
		if(guess==age){
			cout<<"I guess it is ";
			cout<<guess;
		}
		
	}
	while (guess!=age);
	
	
	return 0;
}