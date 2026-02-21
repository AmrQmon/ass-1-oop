#include <iostream>
using namespace std;
void find_max_array(int n) {
	int* ptr = new int[n];
	int max; 
	cout <<"Enter array's elements\n";
	for (int g=0 ; g< n ; g++ ) { // إدخال المصفوفة
		cin >>*(ptr+g);
	}
    max = *ptr; // مساواة قيمة ال max بأول عنصر في الآراي
	for (int i=0 ; i<n ; i++) {
     if (*(ptr + i) > max) {
    max = *(ptr + i); // تغيير قيمة max بأكبر قيمة في المصفوفة
}
 }
cout << "the max Number in this array is " <<max; 
delete[] ptr; // حذف المساحة المأخوذة للآراي 
}
int main() {
	int n;
	cout <<"Enter number of the array\n";
	cin >> n;
	find_max_array (n);
	return 0;
}
