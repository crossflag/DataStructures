/*
 * Diego Sebastian Santana, dsp50
 * 9/23/18
 * Program is a basic post fix calculator!
 */

#include <iostream>
#include <string>
#include "myStack.h"
#include <stdio.h>
#include <ctype.h>
#include <climits>
using namespace std;

int main()
{
    cout<<"***************************************************************** "<<endl;
	cout<<"*************** postfix mini calculator ************************* "<<endl;
	cout<<"***************************************************************** "<<endl;


	//Todo: Create your stack
    myStack <int> cStack;

	char inputItem; //User input
	bool flag=true;
	
	while(true)
	{
        cout<<"Enter your input items. Then enter 'c' at the end of your input line!"<<endl;
        cout<<"Enter 'H' to halt the program at any time!"<<endl;

        while(flag)
        {
                cin>>inputItem;
                if(inputItem=='H')
                {
                    cout<<"***************************************************************** "<<endl;
                    cout<<"***************************************************************** "<<endl;
                    cout<<"***************************************************************** "<<endl;
                    return 0;
                }

                else if(inputItem=='c')
                {
                    //Todo:
                            //1) Check if the input line is in the correct format.
                            //2) If true, compute the results based on the algorithm and print for the user.
                            //3) Otherwise, print a meaningful error message and pop all items of the stack.
                    int ANSWER;
                    ANSWER = cStack.pop();
                    cout << "The answer is " << ANSWER << endl;
                    flag=false;
                }

                else if(isspace(inputItem)) //skip space characters 
                {
                                continue;
                }

                else if((inputItem=='+')||(inputItem=='/')||(inputItem=='-')||(inputItem=='*'))
                {
                		//Todo:
                        	//Follow the steps mentioned in the algorithm for operators.
                    int number2 = 0;
                    int number1 = 0;
                    int fanswer = 0;

                    number2 = cStack.pop();
                    number1 = cStack.pop();

                    switch(inputItem){
                        case '+':
                            fanswer = number1 + number2;
                            cStack.push(fanswer);
                            break;
                        case '/':
                            fanswer = number1 / number2;
                            cStack.push(fanswer);
                            break;
                        case '-':
                            fanswer = number1 - number2;
                            cStack.push(fanswer);
                            break;
                        case '*':
                            fanswer = number1 * number2;
                            cStack.push(fanswer);
                            break;
                        default:
                            cout << "Unable to perform requested operation! Stop fudging up!" << endl;
                            break;

                    }
                }

                else
                {

                    int num= inputItem-'0';
                    if((num>=0)&&(num<=9))
                    {
                    	//Todo:
                        	//Follow the steps mentioned in the algorithm for integer values.
                        cStack.push(num);

                    }
                    else
                    {
                            cout<<"Invalid input line!!!"<<endl;
                            flag=false;
                            //Todo:
                            	//Pop all input items
                            	for(int i =0; i < num; i++){
                            	    cStack.pop();
                            	}

                            while ((getchar() != '\n')); //flush the buffer
                    }
                }
            }
            
        flag=true;
	}
}

