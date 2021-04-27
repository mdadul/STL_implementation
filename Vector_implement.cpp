#include<iostream>
using namespace std;

template<class T>
class Vector{
	//arr is the integer pointer
    	// which stores the address of our vector
	T* arr;

	// position  is the number of elements
	int position;

public:
	// Default constructor to initialise
    	// allocating storage using dynamic allocation
    
	Vector()
	{
		arr = new T[1];
		position =0;
	}
	
	 // Function to add an element at the last
	void push(T data)
	{
		//inserting data 
		arr[position] = data;
		position++;
	}
	// Function to update an element at any index no.
	void update(T data, int index)
	{
		arr[index] = data;
	}
	
	 // function to extract element at any index
	T get(int index)
	{
		return arr[index];
	}
	// Function to delete last element 
	void pop(){
		position--;
	}
	// Function to size of vector 
	int size()
	{
		return position;
	}
	// Function  to show first index no. Of vector 
	int begin()
	{
		return 0;
	}
	// Function to show last index no.
	int end()
	{
		return position;
	}
	// Function to show the vector 
	void print()
	{
		for(int i=0; i<position; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
	Vector<int>v;
	// Elements are push in vector v
	v.push(10);
	v.push(20);
	v.push(30);
	v.push(40);
	v.push(50);
	v.push(60);

	// Show size 
	cout<<v.size()<<endl;
	// Print vector 
	v.print();
	// Pop 
	v.pop();
	v.pop();
	// Show size
	cout<<v.size()<<endl;
	// print vector 
	v.print();
	// 3 no index element extract 
	cout<<v.get(3)<<endl;
	// update element 
	v.update(40,v.begin()+2);
	v.print();
	cout<<v.size()<<endl;


	// char vector 
		
	Vector<char>ch;
	
	ch.push('a');
	ch.push('b');
	ch.push('c');
	ch.push('d');
	ch.push('e');
	
	cout<<ch.size()<<endl;
	
	ch.print();
	
	ch.pop();
	ch.pop();
	
	cout<<ch.size()<<endl;
	ch.print();
	
	ch.update('f',ch.begin()+2);
	ch.print();
	
	return 0;
}
