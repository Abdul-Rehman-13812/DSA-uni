#program once

#include<iostream>
using namespace std;
class stack
{
protected:
	char *arr;
	int size;
	int top;
public:
	stack();
	stack(char * a, int s);
	~stack();
	virtual bool isfull()=0;
	virtual bool isempty()=0;
	virtual void push(char data)=0;
	virtual int pop()=0;
	virtual void  display() = 0;
};