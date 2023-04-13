#include"mystack.h"
int main()
{
	char arr[13];
	mystack obj;
	obj.push('( '  );
	obj.push(')');
	obj.push('} ');
	obj.push('{ ');
	obj.push('( ');
	obj.push(') ');
	obj.push('} ');
	obj.push('[ ');
	obj.push('{ ');
	obj.push('( ');
	obj.push('} ');
	obj.push(') ');
	obj.push('{ ');
	obj.push('] ');

	obj.pop();


	return 0;
}