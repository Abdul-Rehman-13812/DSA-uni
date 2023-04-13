#include"mystack.h"
#include"stack.h"


char proceder(char p)
{
	char op = p;
	if (op == '+' || op == '-')
	{
		return 1;
	}
	if (op == '*' || op == '/')
	{
		return 2;
	}


}


int top =-1;
mystack::mystack() 
{
	char* arr = nullptr;
	int size = 0;
	int top;
}
mystack::mystack(char* a, int s) 
{
	char* arr = nullptr;
	int size = 0;
	top = -1;
}
bool mystack::  isfull()
{
	if (top == size-1)
	{
		cout << "stack is overflow:" << endl;
	}
	return true;
}
bool mystack::isempty()
{
	if (top == -1)
	{
		cout << "stack is empty:" << endl;
	}
}
void mystack::push(char data)
{
	if (isfull() == false)
	{
		top++;
		arr[top] = data;
		
	}
	else{
		if (isfull() == true)
		{
			cout << "satck is full:" << endl;
		}
	}

}

int mystack::pop()
{
	if (isempty() == false)
	{
		int tem;
		tem = arr[top];
		top--;
	}
	else
	{
		if (isempty() == true)
		{
			cout << "satck is empty:" << endl;
		}
	}
}
