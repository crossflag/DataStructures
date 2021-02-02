/*
 * Diego Sebastian Santana, dsp50
 * 9/23/18
 * This defines all the objects in the queue!
 *
 */
#include "myQueue.h"
#include <iostream>

myQueue::myQueue()
{
    //initialize the value of the rear and front indicator based on your implementation.
    front = -1;
    rear = -1;
    numCounter = 0;
}


bool myQueue::push(int x)
{

    if(!isFull())
    {
        //Todo:
            //Check if the queue is full or not.
        if(isEmpty())
        {
            front = rear = 0;

        }
        else{
            rear = ((rear+1)% MAX);
        }
            //If so, insert an item into the back of the myQueue.
            //Update the value of the front indicator
            //Otherwise, print a meaningful error message
        std::cout << "importing..." << x << std::endl;
        numCounter++;
        holder[rear]= x;
        return true;
    }
    else
    {
        //Todo: print a meaningfull message
        std::cout << "I AM FULL OF NUMBERS!";
        return false;

    }
}

int myQueue::pop()
{
     //Todo:
        //Remove the front item from the myQueue
        //Update the value of the rear indicator
    int tempItem;
    tempItem = holder[front];
    front = ((front+1)% MAX);
    numCounter--;
    return tempItem;
}

bool myQueue::isFull()
{
    //Check if the myQueue still has empty space at its rear or the front.
    if (numCounter < MAX)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool myQueue::isEmpty()
{
    //Check if the myQueue is empty based on the value of the front and rear indicator.
    if(front == 0 && rear == 0){
        return true;
    }
    else
    {
        return false;
    }
}


void myQueue::print()
{
	//Todo: print all items of the myQueue.
	//Hint: use a variable to store a copy of the front value. itterate over the queue until you reached
	//to the rear element.
    std::cout << "Items in queue: " << std::endl;
    for(int i = 0; i< numCounter ; i++){
        int index = ((front + i)%MAX);
        std::cout<< holder[index] << std::endl;
    }
}
