#pragma once

#include <iostream>
#include <optional>
#include <string>
#include "StackBase.hpp"

template <typename T>
class Stack : public StackBase<T> {
	public:
    Stack();
    ~Stack();
    std::optional<T> pop();
    void printStack();
};

#include "Stack.cpp"