// Copyright 2022 NNTU-CS
#include <cstdint>

#include "alg.h"

double pown(double value, uint16_t n) {
  double step = value;
  for (uint64_t i = 2; i <= n; i++) {
    value = value * step;
  }
  return value;
}

uint64_t fact(uint16_t n) {
  if (n == 0) return 1;
  return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) { return pown(x, n) / fact(n); }

double expn(double x, uint16_t count) {
  double ex = 0;
  for (int n = 0; n <= count; n++) {
    ex = ex + (pown(x, n) / fact(n));
  }
  return ex;
}

double sinn(double x, uint16_t count) {
  long double sin = 0;
  int n = 1;
  for (uint64_t i = 1; i <= count; i++) {
    if (i % 2 != 0) {
      sin = sin + (pown(x, n) / fact(n));
    } else {
      sin = sin - (pown(x, n) / fact(n));
    }
    n = n + 2;
  }
  return sin;
}

double cosn(double x, uint16_t count) {
  long double cos = 0;
  int n = 0;
  if (x == 0) return 1;
  for (uint64_t i = 1; i <= count; i++) {
    if (i % 2 != 0) {
      cos = cos + (pown(x, n) / fact(n));
    } else {
      cos = cos - (pown(x, n) / fact(n));
    }
    n = n + 2;
  }
  return cos;
}
