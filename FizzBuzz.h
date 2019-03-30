#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> Fizz,Buzz,FizzBuzz;

for (int i=1;i<=100;i++){
	if(i%15==0) {
		//cout<<"FizzBuzz"<<endl;
		FizzBuzz.push_back(i);
		continue;
	}
	if(i%3==0){
		//cout<<"Fizz"<<endl;
		Fizz.push_back(i);
	continue;}
	
	if(i%5==0){
		//cout<<"Buzz"<<endl;
		Fizz.push_back(i);
	continue;}
	//cout<<i<<endl;
}

for (int i=0;i<Fizz.size();i++) cout<<Fizz[i]<<"\t";

cout<<endl;

for (int i=0;i<Buzz.size();i++) cout<<Buzz[i]<<"\t";

cout<<endl;

for (int i=0;i<FizzBuzz.size();i++) cout<<FizzBuzz[i]<<"\t";

return 0;
}
