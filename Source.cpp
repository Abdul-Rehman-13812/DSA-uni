#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
	class list
	{
	private:
		node*first, *tail;
	public:
		list()
		{
			first = tail = nullptr;
		}
		void add(int x)
		{
			node *ptr = new node;
			ptr->data = x;
			ptr->next = nullptr;
			
			if (first == nullptr)
			{
				first = tail = ptr;
			}
			else
			{
				tail->next = ptr;
				tail = ptr;
			}


		}

		void show()
		{
			node *p = first;
			while (p!= nullptr)
			{
				{
					cout << p->data << endl;
					/*
					if (p->data % 10 == 0)
					{
						cout << p->data << endl;
						
					}*/
					p = p->next;
				}
				
				
			}
			cout << endl;
			
		}
		int delete_first()
		{
			if (first == nullptr)
			{
				cout << "under flow:" << endl;
			}
			else
			{
				node* tem = first;
				first = first->next;
				delete tem;
				
			}
			return 0;
		}



	};
	

void main()
{
	list l1;
	//l1.show();
	l1.add(10);
	//l1.show();
	//l1.add(20);
	l1.show();
	l1.delete_first();
	l1.show();


}