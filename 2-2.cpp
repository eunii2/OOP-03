#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg) {
	if (size <= 0) // 인수의 값에 오류가 발생한 경우
	{
		return false;
	}
	int sum = 0; // sum값 초기화

	for (int i = 0; i < size; i++) // 생성한 배열만큼을 for문을 통해 더해줌.
		sum += a[i]; // 값들을 더해서 sum값 생성
	avg = sum / size; // 평균=합/size
	return true;
}

int main() {
	int x[] = { 0,1,2,3,4,5 }; // 6칸을 가진 배열 생성
	int avg; // avg 초기화
	if (average(x,6,avg)) // 위의 average를 참조하는데 거기에서 size 값을 6으로 지정해 참조함
		cout << "평균은 " << avg << endl;
	else 
		cout << "매개 변수 오류" << endl; // avg 값이 의미 없는 경우

	if (average(x,-2,avg)) // 위의 average를 참조하는데 거기에서 size 값을 -2로 지정해 참조함
		cout << "평균은" << avg << endl;
	else 
		cout << "매개 변수 오류" << endl; // avg 값이 의미 없는 경우
}