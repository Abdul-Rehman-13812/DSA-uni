#include<iostream>
using namespace std;
char*deepCopy(char*p)
{
	int length = strlen(p);
	char*temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = p[i];
	}
	temp[length] = '\0';
	return temp;
}

class list
{
public:
	char* arr;
	int size;
	int top = -1;
	list()
	{
		arr = nullptr;
		size = 0;
	}
	list(char *a, int s)
	{
		arr = a;
		size = s;
		top = -1;
	}
	list(const list& obj)
	{
		arr = obj.arr;
		size = obj.size;
	}
	void push(char value)
	{
		if (isfull() == true)
		{
			cout << "underflow:" << endl;
		}
		top++;
		arr[top] = value;
		//	cout << arr << endl;

	}


	void display()
	{
		for (int i = 0; i <= top; i++)
		{
			cout << arr[i] << "  " << endl;
		}
		cout << "sizeo of stack is:" << size1();

	}
	char pop()
	{
		char tem = arr[top];
		top--;
		cout << "pop:" << tem << endl;
		return tem;
	}
	bool isepmty()
	{
		if (top == -1)
		{
			cout << "stack is empty:" << endl;
			return true;
		}

	}
	bool isfull()
	{
		if (top == size - 1)
		{
			cout << "stack is full:" << endl;
			return true;
		}
		else
		{
			return false;
		}

	}
	int size1()
	{
		int ss = top + 1;
		return ss;
	}
	/*~list()
	{
	delete[] arr;
	}*/
};


int main()
{
	char arr[3];
	list obj(arr,3);
	obj.push('A');
	obj.push('b');
	obj.push('r');
	
	/*obj.push('c');
	obj.push('c');
	obj.push('c');
	obj.push('c');*/
	//obj.display();
//	obj.pop();
	//obj.pop();
	//obj.pop();
	//bj.pop();
	obj.size1();
	obj.display();
	obj.isepmty();
	obj.isfull();
 //  obj.display();

	return 0;

}
