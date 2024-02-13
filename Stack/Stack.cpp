// Stack.cpp
#include "Stack.hpp"

template <typename T>
std::optional<T> Stack<T>::pop() {
  if (isEmpty()) return std::nullopt;
  T poppedValue = values_[size_ - 1];
  size_--;
  return poppedValue;
}

template <typename T>
void Stack<T>::printStack() {
  if (!isEmpty()) {
    for (int i = size_ - 1; i >= 0; --i) {
      std::cout << values_[i] << std::endl;
    }
  } else {
    std::cout << "The stack is empty!" << std::endl;
  }
}