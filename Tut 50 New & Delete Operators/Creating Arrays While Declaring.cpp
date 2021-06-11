#include <iostream>
using namespace std;

int main()
{
	int *arr{ new int[5]{ 10, 7, 15, 3, 11 } }; //we can remove the elements and elements will be zero in that case

	cout << "Array elements: " << endl;
    for (int x = 0; x < 5; x++) {

		cout << arr[x] << endl;
	}
    return 0;
}