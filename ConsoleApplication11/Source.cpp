#include<iostream>
using namespace std;
int top ;
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
		arr = new char[s]; 
		size = s;
		top = -1;
	}
	stack::stack(const stack& obj)
	{
		arr = deepcopy(obj.arr);
		size = obj.size;
	}

	bool empty()
	{
		if (top == -1)
		{
			cout << "stack is empty:" << endl;
		}
		return true;
	}
	bool full()
	{
		if (top == size - 1)
		{
			cout << "stack is full" << endl;

		}
		return true;
	}
	void puch(char data)
	{
		/*if (full() == true)
		{
			cout << "over flow:" << endl;
		}*/
		
			top++;
			arr[top] = data;
		
		

		//cout << arr << endl;

	}
	char  pop()
	{
		char tem = arr[top];
		top--;
		//cout << arr;
		return tem;
	}
	
	void display()
	{
		for (int i = 0; i <= top; i++)
		{
			cout << arr[i] << endl;
		}
		cout << endl;
	}

};


int main()
{
	char arr[5];
	stack obj(arr, 5);
	obj.puch('A');
	obj.puch('E');
	obj.puch('R');
	obj.puch('R');
	obj.puch('R');
	obj.pop();
	obj.pop();

	obj.display();
	obj.empty();
	obj.full();
	return 0;
}