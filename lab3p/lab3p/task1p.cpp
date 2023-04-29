#include<iostream>
using namespace std;
int top;
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
	/*stack::~stack()
	{
		delete[] arr;
	}*/
	bool isempty()
	{
		if (top == -1)
		{
			cout << "stack is empty:" << endl;
		}
		return true;
		
	}
	bool isfull()
	{
		if (top == size - 1)
		{
			cout << "stack is full:" << endl;
		}
		return true;
	}



	void push(char data)
	{
		
		if (!isfull())
		{
			
			top++;
			arr[top] = data;
			cout << arr << endl;
		}
		else
		{
			cout << "stack is full:" << endl;
		}
		
		

	}
	char  pop()
	{
		if (!isempty())
		{
			char tem = arr[top];

			top--;
			return tem;
		}
		else
		{

			cout << "stack is empty:" << endl;
		}
		//cout << "this is pop:";
		//cout << tem;
		
	}
	
	int size1()
	{
		int ss = top + 1;
		 
		 return ss;
	}
	void exit1()
	{
		return;
	}
	void display()
	{
		

		cout << "size of stack is" << size1() << endl;
	}



};


int main()
{
	char arr[3];
	stack obj(arr, 3);
	char value=NULL;
	int num;
		cout << "Press 1 to add a new item to the stack. void push(Type)" << endl;
		cout << " Press 2 to remove and return the last element from the stack.Type pop()" << endl;
		cout << "Press 3 to check if the stack is full. bool full()" << endl;
		cout << "Press 4 to check if the stack is empty. bool empty()" << endl;
		cout << "Press 5 to return the size of the stack. int size()" << endl;
		cout << "Press 6 to display the stack." << endl;
		cout << "Press 0 to exit." << endl;
		cin >> num;
	

	if (num == 1)
	{
		cout << "Enter vlalue:" << endl;
		cin >> value;
		obj.push(value);
	}
	if (num == 2)
	{

		obj.pop();
	}
	if (num == 3)
	{

		obj.isfull();
	}
	if (num == 4)
	{

		obj.isempty();
	}
	if (num == 5)
	{

		obj.size1();
	}
	if (num == 6)
	{

		obj.display();
	}
	if (num == 0)
	{

		obj.exit1();
	}


	
	
	/*obj.push('A');
	obj.push('E');
	obj.push('R');
	obj.pop();*/
	obj.isfull();
	 obj.isempty();

	return 0;
}