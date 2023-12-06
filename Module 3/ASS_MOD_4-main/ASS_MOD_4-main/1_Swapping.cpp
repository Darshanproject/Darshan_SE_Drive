//Write a program of to swap the two values using template.

#include <iostream> 
using namespace std; 
  

template <class T> 
int swap_numbers(T& x, T& y) 
{ 
    T t; 
    t=x; 
    x=y; 
    y=t; 
    return 0; 
} 
  

int main() 
{ 
    int a, b; 
    a=10, b=20;
	cout<<"\n\n\t Before Swapping...."; 
  	cout<<"\n\n\t"<<" a = "<<a<<" b = "<<b;
    swap_numbers(a, b); 
    cout<<"\n\n\t After Swapping....";
    cout<<"\n\n\t"<<" a = "<<a<<" b = "<<b;
    return 0; 
}
