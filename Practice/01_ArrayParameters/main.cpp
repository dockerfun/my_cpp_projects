/**
 * Array parameters are passed as pointers to the first array element.
 * http://gsd.web.elte.hu/lectures/cpp-en/cpp-lecture-11/
 * 
*/
#include <stdio.h>
int f( int *t, int i)
{
  return t[i];
}
int main()
{
  int arr[] = {1, 2, 3, 4};
  printf("%d\n", f(arr,1));
  printf("%d\n", f(&arr[0],1));
  return 0;
}