#include <iostream>
using namespace std;
void find_max_array(int n) {
	int* ptr = new int[n];
	int max;
	cout <<"Enter array's elements\n";
	for (int g=0 ; g< n ; g++ ) {
		cin >>*(ptr+g);
	}
    max = *ptr;
	for (int i=0 ; i<n ; i++) {
     if (*(ptr + i) > max) {
    max = *(ptr + i);
}
 }
cout << "the max Number in this array is " <<max; 
delete[] ptr;
}
int main() {
	int n;
	cout <<"Enter number of the array\n";
	cin >> n;
	find_max_array (n);
	return 0;
}