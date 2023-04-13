#program once
#include<iostream>
using namespace std;


class mystack 
{
	char arr;
	int size;
	int top;


public:
	mystack();
	mystack(char * a, int s);
	~mystack();
	 bool isfull() ;
	 bool isempty() ;
	 void push(char data) ;
int pop() ;
	 void  display() ;
};