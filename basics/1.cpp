#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void first(){
	int a,b;
	for(int i=1000;i<10000;i++)
	{	
	//	cout<<i<<endl;
		if(i%133==125&&i%134==111)cout<<i<<endl;
	}
}





void second(){
		int num, ll=0;
		for(int i=100;i<=500;i++){
			if(((i/100)%10)+(i/10)%10+i%10==15){
				ll++;
				cout<<i<<endl;
			}

	}

cout<<ll<<endl;
}





void third() {
		
		int ll=0;
		for(int i=100;i<=999;i++){
			for(int j=1;j<=27;j++){
			if(((i/100)%10)+(i/10)%10+i%10==j){
				ll++;
				cout<<i<<"  "<<j<<endl;
			}
			}

	}


cout<<ll<<endl;

}


void third_alt(){
	int numbers[27];
	for(int j=1;j<=27;++j){
		int sum=0;
		for(int i=100;i<=999;++i){
			if(((i/100)%10)+(i/10)%10+i%10==j){
				sum++;
				cout<<j<<"  "<<i<<endl;		
							
		}
	}

		cout<<"Sum for  "<<j<<endl;
		cout<<sum<<endl;
		numbers[j-1]=sum;
		for(int b=0;b<=10;++b)cout<<"###";
		cout<<endl;
}

for(int v=0;v<27;++v)cout<<numbers[v]<<" ";
cout<<endl;
}



void fourth(){

	for(int i=10;i<=99;++i){
		if(int(pow(float(((i/10)%10)),2.0)+pow(float((i%10)),2.0))%13==0){
			cout<<i<<endl;

		}


	}
for(int i=0;i<40;i++)cout<<"###";
cout<<endl;

	for(int i=10;i<=99;++i){
	int sqrtnum, sum1;
	sum1=((i/10)%10)+(i%10);
	sqrtnum=int(pow(float(sum1),2));
	if((sum1+sqrtnum)==i){cout<<i<<endl;
	}
}
}






int main(){
//	first();
//	second();
//	third();
//	third_alt();
//	fourth();
	
	return 0;



}
