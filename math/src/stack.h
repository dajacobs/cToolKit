#ifndef STACK_H
#define STACK_H
#include <deque>

template<typename T>
class Stack {
public:
	// Getter for top element 
	T& top() {
		return stack.front();
	}
}