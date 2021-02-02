/*
 * Diego Sebastian Santana, dsp50
 * 9/23/18
 * Program is the main for a implemented queue data structure! 
 * This will pop or push items then print the queue!
 */
#include <iostream>
#include "myQueue.h"
using namespace std;

int main()
{
    char choice;


	cout<<"***************************************************************** "<<endl;
	cout<<"****** Testing the implemeted queue data structure *************** "<<endl;
	cout<<"***************************************************************** "<<endl;

	//Todo: Create your queue
    myQueue Test;
	do
	{
    	cout<<"Choose your task from the following options:"<<endl;
    	cout<<"1: Push items?"<<endl;
    	cout<<"2: Pop items?"<<endl;
    	cout<<"3: Print items?"<<endl;
    	cout<<"4: exit?"<<endl;
		cin>>choice;
		//Todo: check if the choice has a valid value.
		if(choice=='1')
		{
			char toCheck;
			bool flag=true;
			int inputItem;
			cout<<"Enter input items, C to cancel"<<endl;

			while(flag)
			{
				cin>>toCheck;
				if(toCheck=='c')
					flag=false;

				if(flag)
				{
					inputItem = toCheck-'0';
					//Todo: push the inputItem into queue.
							//Print an error message if the queue is full.
							//Set the value of the flag to false if it is already full.
					Test.push(inputItem);

				}
			}
			cout<<"Back to the main menu!"<<endl;
		}

		else if(choice=='2')
		{
			char toCheck;
			bool flag=true;
			int count;
			cout<<"Enter the number of items you want to pop-out, C to cancel"<<endl;
			cin>>toCheck;
			if(toCheck=='c')
				flag=false;

			while(flag)
			{
				count = toCheck-'0';
				//Todo: 
						//Check if the queue is already empty or not
						//If true, pop from the front, update the count value and print the poped item for the
						//user.
						//Otherwise, print a meaningfull error message and set the flag value to false.
				for(int i = 0; i<count; i++){
					Test.pop();
				}
				flag = false;
			}
			cout<<"Back to the main menu!"<<endl;
		}

		else if(choice=='3')
		{
			//Todo: Print all items of the queue.
			Test.print();
		}

		else if(choice=='4')
		{
			cout<<"***************************************************************** "<<endl;
			cout<<"***************************************************************** "<<endl;
			cout<<"***************************************************************** "<<endl;
			return 0;
		}
		else
		{
			cout<<"INVALID CHOICE "<<endl;
		}
	}while(true);
}
