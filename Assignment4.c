#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//Declaration

int array[1000];
int sum=0;
int start=0;

//Function adding the 100 elements of the array 

int sumfunc(void)
{
	int starting=  start;  //initialized with value globally declared, and incremented in main
	
	int ending= start+99;  //ending will be 100th element from the starting point
	
	for(int i=starting; i<ending; i++)
	
	{
		sum=array[i]+sum; //each sum having result of 100 additions
	}
	
	return sum;
}


pthread_t thread

void main()

{
	
	int totsum=0;  //for main function, to store overall result of the summation
	
	for (int i=0 ; i<1000; i++)
         {
	       array[i]=1; //initializing array
         }


	for(int i=0;i<10;i++)
	{
		
	pthread_create(&thread,NULL,sumfunc,NULL);
	start=start+100;                                 
	
	pthread_join(&thread,int sum1);

	totsum=totsum+sum1;

	
	}

	printf ("total sum of all the threads combined and the whole arrray is");
	printf totsum;


}
	
	
