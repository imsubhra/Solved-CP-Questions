
#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int array[], int size)
 {
	 int count=0;
	     int swapped = 1;

   while(swapped!=0)
   {
   swapped=0;
   count++;

    for (int i = 1; i <=size - 1; i++) {
      if (array[i] > array[i + 1]) {

        swap(array[i],array[i+1]);
        swapped = 1;
      }
    }
  }
  return count;
}

  int main() {

  int size;
  cin>>size;
  int array[size];
  for(int i=0;i<size;i++)
  {
	  cin>>array[i];
  }
  cout<<bubbleSort(array,size);

}
