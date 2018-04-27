#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


int array[1000];

int sum=0;

for (int i=0 ; i<1000; i++)

{
	array[i]=1;
}


int sumfunc(void* startpt)
{
	int starting=  startpt;
	int ending=starpt+99;
	for(int i=starting; i<ending; i++)
	
	{
		sum=array[i]+sum;
	}
	
	return sum;
}



int totsum=0;
int start=0;


pthread_t thread

void main()

{
	
	for(int i=0;i<10;i++)
	{
	pthread_create(&thread,NULL,sumfunc,void* start);
	start=start+100;
	
	pthread_join(&thread,int sum1);

	totsum=totsum+sum1;

	
	}

	printf ("total sum of all the threads combined and the whole arrray is");
	printf totsum;


}
	
	
