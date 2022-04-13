// Copyright 2022 DegtyarevPaul
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  int begin;
  int end;
  T arr[5];

 public:
  TPQueue() : begin(0), end(0) {}
  void push(T element) {
    int i = end;
    for (int i; i > begin; i--) {
      if (element.prior > arr[i % size].prior) {
        arr[i % size] = arr[(i + 1) % size];
      } else {
        break;
      }
    }
    arr[i] = element;
    end++;
  }
  T& pop() {
    return arr[++begin % size];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
