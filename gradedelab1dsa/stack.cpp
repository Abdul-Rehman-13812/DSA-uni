#include "stack.h"
char *deepcopy(char* p)
{
	int len = strlen(p);
	char* tem = new char(len + 1);
	for (int i = 0; i < len; i++)
	{
		tem[i] = p[i];
	}
	 tem[len] = '/0';
	 return tem;


}

stack::stack()
{
	arr = nullptr;
	size = 0;
}
stack::stack(char* a, int s)
{
	arr = deepcopy(a);
	size = s;
}
stack::stack(const stack& obj)
{
	arr = deepcopy(obj.arr);
	size = obj.size;
}




