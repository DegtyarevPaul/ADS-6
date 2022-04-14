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
  TPQueue() {
    begin = 0;
    end = -1;
    for (int i = 0; i < 5; i++)
      arr[i].prior = 0;
  }
  void push(T element) {
    int i = end;
    for (i; i >= begin; i--) {
      if (element.prior > arr[i % size].prior)
        arr[(i + 1) % size] = arr[i % size];
      else
        break;
    }
    arr[(i + 1) % size] = element;
    end++;
  }
  T& pop() {
    arr[(begin) % size].prior = 0;
    return arr[(begin++) % size];
  }
};

struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
