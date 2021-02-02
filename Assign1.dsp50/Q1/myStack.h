/*
 * Diego Sebastian Santana, dsp50
 * 9/23/18
 * The main stack for the post fix calculator!
 */
#ifndef STACK_H
#define STACK_H
#define MAX 1000
#include <iostream>

template <class userType>
class myStack
{
    private:
    	int CurrentSize; //An indicator that contains the current size of the stack
    	userType holder[MAX];    //Maximum size of the stack
	public:	
		myStack();
		bool push(userType x);
		userType pop();
		bool isEmpty();

};

template <class userType>
myStack<userType>::myStack()
{
    //Todo: initialize the value of the currentSize.
	CurrentSize = 0;
}

template <class userType>
bool myStack<userType>::push(userType x)
{
    if(isEmpty())
    {
		//Todo
			//Push the item x to myStack.
			//Update the value of the currentSize.
		CurrentSize++;
		holder[CurrentSize] = x;
		return true;
	}
	else
	{
		//Todo:
			//print a meaningful error message
		std::cout <<"STACK ERROR, YOU MESSED UP!"<< std::endl;
			return false;
	}
}

template <class userType>
userType myStack<userType>::pop()
{
	//Todo:
    	//Pop the currentSize element of the stack (e.g. x).
		//update the value of the currentSize.
		//return x.
	userType popItem;
	popItem = holder[CurrentSize];
	CurrentSize--;

	return popItem;

}

template <class userType>
bool myStack<userType>::isEmpty()
{
    //Check if the size of the stack is still less than the MAX value.
	if(CurrentSize < MAX) {
		return true;
	}
	else {
		return false;
	}
}
#endif // STACK_H
