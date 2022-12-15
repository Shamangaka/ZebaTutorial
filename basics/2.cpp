#include <iostream>
#include <cstdlib> // для system
#include <ctime>

using namespace std;



float seven_fourteen(){

    float a = 20.0;
    float dnum, sum=0;
    for(int i=1;i<9;i++){
	    dnum =(float(rand())/float((RAND_MAX))*a);
	    //cout<<(float(rand())/float((RAND_MAX))*a)<<endl;
	    cout<<dnum<<endl;
	    if(dnum>10.75) sum+=dnum;
	    cout<<sum<<endl;


}

    return sum;				
}


float seven_fifteen(){
	int nn;
 
	float a=20.0;
	float bb,pp,dnum,sum=0;
	
	cout<<"n?"<<endl;
	cin>>nn;
	cout<<"p?"<<endl;
	cin>>pp;
	for(int i=0;i<nn;i++){
		dnum =(float(rand())/float((RAND_MAX))*a);
	   	cout<<"b: "<<dnum<<endl;
		if(dnum>pp)sum+=dnum;
		cout<<"sum: "<<sum<<endl;

	}
	return sum;

}

int seven_sixteen(){
	int a,d,sum;
 
	sum=0;
	for(int i=0;i<10;i++)
	{
		d=rand();
		cout<<"d: "<<d<<endl;
		if(d%2==0) sum+=d;
		cout<<sum<<endl;
	}
return sum;
}



int seven_seventeen(){
	int m, x,n,dnum,sum=0;
	cout<<"m?"<<endl;
	cin>>m;
	cout<<"n?"<<endl;
	cin>>n;
	for(int i=0;i<m;i++){
		dnum =rand();
	   	cout<<"m: "<<dnum<<endl;
		if(dnum%n==0)sum+=dnum;
		cout<<"sum: "<<sum<<endl;
	}
	return sum;	

}

int seven_eighteen(){
	int a, dnum, sum=0;
	for(int i=1;i<21;i++){

		dnum=rand();
		cout<<"i: "<<i<<"a: "<<dnum<<"sum: "<<sum<<endl;
		if(i%2==0){
			sum+=dnum;
		}
		cout<<sum<<endl;
	}
	return sum;



}

float seven_nineteen(){
	float c,dnum,sum=0;
	int a=20;
	for(int i=1;i<16;i++)
		
	{
		dnum =(float(rand())/float((RAND_MAX))*a);
		cout<<"i: "<<i<<" c: "<<dnum<<" sum: "<<sum<<endl;
		if(i%2!=0){
			sum-=dnum;
		}
		cout<<sum<<endl;


	}
	return sum;



}




int seven_twenty(){
	int n,a,a1,an,bres,cres,dnum;
	int ares=0;
	cout<<"n ?"<<endl;
	cin>>n;
	for(int i=1;i<(n+1);i++)
	{
		dnum=rand();
		cout<<"i: "<<i<<" dnum: "<<dnum<<" ares: "<<ares<<endl;
		if(i==1)a1=dnum;
		if(i==n)bres=a1+dnum;
		if(i%2==0)ares-=dnum;
		if(i%2!=0)ares+=dnum;
		if(i==2)cres=ares-dnum;
		
		cout<<ares<<endl;
	

	}

cout<<"a: "<<ares<<" b: "<<bres<<" c: "<<cres<<endl;

return ares;
}





int seven_twentyone(){
	float price, sum=0;
	int a=1500;
	for(int i=0;i<20;i++)
	{
		price =(float(rand())/float((RAND_MAX))*a);
		cout<<price<<endl;
		if(price>1000)sum+=price;	
		cout<<sum<<endl;
	}
return sum;
}


int seven_twentytwo(){
	int pagenum,sum=0;

	for(int i=0;i<20;i++){
	pagenum=(rand()%20);
	cout<<pagenum<<" "<<sum<<endl;
	if(pagenum>16)sum+=pagenum;
	cout<<sum<<endl;


	}

return sum;

}

 
int main() 
{
	
   
    
    srand((unsigned int)time(NULL));


    //seven_fourteen();
    //seven_fifteen();
    //seven_sixteen();
    //seven_seventeen();
    //seven_eighteen();
    //seven_nineteen();
    //seven_twenty();
    //seven_twentyone();
    seven_twentytwo();
    system("pause"); 
    return 0; 
}
