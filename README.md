# STL_implementation
Standard Template library implementation by oop c++


### __Vector Class Implement__ :boom: ###

Function Name	 | activity 
-----------------|--------------------
push()	         | add an element 
pop()	         | delete last element 
size()	         | show the size of vector
begin()	         | return the first index no.
end()	         | return the last index no.
update()         | update an element at any index

#### Generic Class ####
```cpp
template<class T>
class Vector{
};
```
#### Member Function prototype ####
```cpp
void push(T data);
void pop();
int size();
void update(T data, int index);
int begin();
int end();
```
