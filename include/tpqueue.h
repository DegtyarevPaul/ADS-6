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
  TPQueue() : begin(0), end(0);
  void push(T element) {
    for(int i = last; i > firs; i--) {
      if(element.prior > arr[i].prior) {
      
      } else {
      
      }
    }
  }
  void pop() {
  
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
