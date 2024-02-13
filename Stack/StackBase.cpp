#include "StackBase.hpp"

template <typename T>
StackBase<T>::StackBase() {
  capacity_ = 10;
  size_ = 0;
  values_ = new T[capacity_];
}

template <typename T>
StackBase<T>::~StackBase() {
  delete[] values_;
}

template <typename T>
void StackBase<T>::push(const T& newValue) {
  if (size_ == capacity_) resizeArray(2 * capacity_);
  values_[size_] = newValue;
  size_++;
}

/* template <typename T>
std::optional<T> Stack<T>::pop() {
  if (isEmpty()) {
    return std::nullopt;
  }

  T poppedValue;

  if (behavior_ == StackBehavior::LIFO) {
    poppedValue = values_[size_ - 1];
  } else if (behavior_ == StackBehavior::FIFO) {
    poppedValue = values_[0];
    for (int i = 1; i < size_; ++i) {
      values_[i - 1] = values_[i];
    }
  }

  size_--;
  return poppedValue;
} */

/* template <typename T>
void StackBase<T>::printStack() {
  if (!isEmpty()) {
    std::cout << stackBehaviorToString(behavior_) << " behavior:" << std::endl;
    for (int i = size_ - 1; i >= 0; --i) {
      std::cout << values_[i] << std::endl;
    }
  } else {
    std::cout << "The stack is empty!" << std::endl;
  }
} */

template <typename T>
void StackBase<T>::resizeArray(int newSize) {
  T* newArray = new T[newSize];
  for (int i = 0; i < size_; ++i) {
    newArray[i] = values_[i];
  }
  delete[] values_;
  values_ = newArray;
  capacity_ = newSize;
}

template <typename T>
bool StackBase<T>::isEmpty() const {
  return size_ == 0;
}