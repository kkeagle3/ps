#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr[i] = k;
	}
	double sum = 0, max=-1;
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] < arr[i]) {
			sum += arr[i] - arr[i - 1];
			if(i==n-1)
				if (sum > max)
					max = sum;
		}		
		else
		{
			if (sum > max)
				max = sum;
			sum = 0;
		}
	}
	cout << max;
}