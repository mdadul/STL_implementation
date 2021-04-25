#include<iostream>
using namespace std;

#define size 10

template<class T>
class Stack{
	T st[size];
	int tos; 	//index of top of stack
	
	public:
	void init()
	{
		tos = 0;
	}
	void push(T ob);
	T pop();
};
// Push an object

template<class T>
void Stack<T>::push(T ob){
	if(tos == size)
	{
		cout<<"Stack is full.\n";
		return;
	}
	st[tos] = ob;
	tos++;
}

//pop an object
template<class T>
T Stack<T>::pop()
{
	if(tos==0)
	{
		cout<<"Stack is empty\n";
		return 0;
	}
	tos--;
	return st[tos];
}
int main()
{
	Stack<char>s1,s2;
	
	s1.init();
	s2.init();
	
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	
	for(int i=0;i<2;i++)
	{
		cout<<"Pop s1 :"<<s1.pop()<<"\n";
	}
	
	for(int i=0;i<2;i++)
	{
		cout<<"Pop s2 :"<<s2.pop()<<"\n";
	}
	
	return 0;
}
	
	
