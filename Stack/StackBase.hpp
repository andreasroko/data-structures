// StackBase.hpp
#pragma once

#include <iostream>
#include <optional>
#include <string>

template <typename T>
class StackBase {
  public:
    ~StackBase() = default;

    void push(const T& newValue);

    std::optional<T> pop();

    void printStack() const;

  protected:
    T* values_;
    int capacity_;
    int size_;
    void resizeArray(int newSize);
		bool isEmpty() const;
};

#include "StackBase.cpp"