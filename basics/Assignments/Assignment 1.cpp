#include <iostream>
#include <ctime>



using namespace std;
int first()
{
	double N=0;
	double array[5];
	double* pointer=array;
	cout<<"Input numbers"<<endl;
	for (int i=0;i<5;i++)
	{
		cin>>array[i];
		
	}
	for (int i=0;i<5;i++){
		N+=*(pointer+i);
	}	
	cout<<N<<endl;
	return 0;


}

int second(){


	srand(time(NULL));
	int arr_len;
	cout<<"Input array length"<<endl;
	cin>>arr_len;

	int *array1 = new int [arr_len];
	int *array2 = new int [arr_len];

	int *array3 =new int [arr_len*2];

	for (int i=0; i<arr_len;i++)
	{
		array1[i]=rand();
		array2[i]=rand();
		cout<<"Array1 "<<array1[i]<<", Array2 "<<array2[i]<<endl;

	}
	int pos=0;
	for (int i=0;i<arr_len;i++)
	{

		array3[pos]=array1[i];
		pos++;
		array3[pos]=array2[i];
		pos++;
	}
	for(int i=0;i<(arr_len*2);i++)
	{
		cout<<array3[i]<<endl;
	}


	delete [] array1, array2, array3;


	return 0;
}

int main()
{
	first();
	second();
	return 0;
}
