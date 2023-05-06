#include<iostream>
using namespace std;
int front = -1;
int back = -1;
class que
{
private:

	int* arr;
	int size;
public:
	que()
	{
		arr = 0;
		size = 0;
		
	}
	que(int* a, int s)
	{
		arr = new int[s];
		size = s;
		front = -1;
		back = -1;
	}
	void  inque(int data)
	{
		back++;
		arr[back] = data;

	}
	int dque()
	{
		front++;
		int tem;
		tem = arr[front];
		cout << "dque is  :" << tem << endl;
		return tem;

	}
	void display()
	{
		for (int i = front; i <= back; i++)
		{
			cout << arr[i] <<endl;
		}
		cout << "  " << endl;
	}


};
int main()
{
	int arr[4];
	que obj(arr, 4);
	obj.inque(5);
	obj.inque(4);
	obj.inque(6);
	obj.inque(7);

	obj.dque();
	obj.dque();

	obj.display();
	return 0;
}