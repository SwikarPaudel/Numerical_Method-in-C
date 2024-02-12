// newton raphson

#include <math.h>
#include <stdio.h>

float f(float x) { return x*tan(x)-1; }

float df(float x) { return 1/pow(cos(x),2)+tan(x); }

float nr(float x) { return x - f(x) / df(x); }

int main() {
  float x, y;
  int count = 0;
  printf("Enter initial guess: ");
  scanf("%f", &x);
  while (count < 50) {
    count += 1;
    y = nr(x);
    printf("Iteration: %d : %f\n", count, y);
    if (fabs(f(y)) <= 0.001) {
      printf("Root: %f", y);
      break;
    }
    x = y;
  }
  return 0;
}
