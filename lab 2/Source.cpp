#include<iostream>
using namespace std;
int top = -1;
char* deepcopy(char* p)
{
	int len = strlen(p);
	char*tem = new char(len + 1);
	for (int i = 0; i < len; i++)
	{
		tem[i] = p[i];

	}
	tem[len] = '\0';
	return tem;
}
class stack
{
	char* arr;
	int size;
	int top;
public:
	stack::stack()
	{
		arr = nullptr;
		size = 0;
		top = -1;
	}
	stack::stack(char* a, int s)
	{
		arr = deepcopy(a);
		size = s;
		top = -1;
	}
  stack::stack(const stack& obj)
	{
		arr = deepcopy(obj.arr);
		size = obj.size; 
	}

	void puch(char data)
	{
		top++;
		arr[top] = data;

		cout << arr << endl;

	}
	char  pop()
	{
		char tem = arr[top];
		top--;
		cout << arr;
		return tem;
	}
	bool empty()
	{
		if (top == -1)
		{
			cout << "stack is empty:" << endl;
		}
	}
	bool full()
	{
		if (top == size - 1)
		{
			cout << "stack is full" << endl;

		}
		return true;
	}

};


int main()
{
	char arr[3];
	stack obj(arr,3);
	obj.puch('A');
	obj.puch('E');
	obj.puch('R');
	obj.pop();

	return 0;
}