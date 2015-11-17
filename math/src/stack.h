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
	// Push element on stack
	void push(const T &pushValue) {
		stack.push_front(pushValue);
	}
	// Pop element off stack
	void pop() {
		stack.pop_front();
	}
	// Conditional check for empty 
	bool isEmpty() const {
		return stack.empty();
	}
	// Getter for size of stack
	size_t size() const {
		return stack.size();
	}
}