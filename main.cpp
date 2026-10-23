#include <iostream>

// Lab 9 — Jesus 
// CIS 5 Week 09 · Call and return

double average(const int a[], int n) {
  if (n == 0) {
    return 0;
  }

  int total = 0;
  for (int i = 0; i < n; i++) {
    total += a[i];
  }
  return static_cast<double>(total) / n;
}

void printSummary(double avg) {
  std::cout << "Average: " << avg << '\n';
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};

  double avg = average(scores, N);
  printSummary(avg);

  return 0;
}
