#include <iostream>
using namespace std;

int Fibonacci_recursive(int n);
int Fibonacci_non_recursive(int n);

int main()
{
	cout << Fibonacci_recursive(10) << endl;
	cout << Fibonacci_non_recursive(10) << endl;
	return 0;

}

int Fibonacci_recursive(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return Fibonacci_recursive(n - 2) + Fibonacci_recursive(n - 1);
}

int Fibonacci_non_recursive(int n)
{
	if (n == 0 || n == 1)
		return 0;

	int result;
	int temp1 = 0;
	int temp2 = 1;

	for (int i = 2; i <= n; i++) {
		result = temp1 + temp2;
		temp1 = temp2;
		temp2 = result;
	}
	return result;
}

/*재귀 버전이 효율적이라고 생각한다.
비재귀 버전에서는 계속 값을 옮기면서
계산해야하기 때문이다.*/