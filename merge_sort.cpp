#include <iostream>

using namespace std;

// Function to merge two halves into sorted data
void Merge(int *a, int low, int high, int mid)
{
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;

    // Merge the two parts into the temp array
    while (i <= mid && j <= high) {

	if (a[i] < a[j]) {

	    temp[k] = a[i];
	    k++;
	    i++;

	} else {
		
	    temp[k] = a[j];
	    k++;
	    j++;

	}
    }

   // Inset all the remaining values from i to mid into temp array
    while (i <= mid) {

	temp[k] = a[i];
	k++;
	i++;
    }
}


