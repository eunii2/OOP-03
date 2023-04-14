#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big)
{
	if (a == b)
		return true;
	else {
		big=(a > b) ? a : b; // 앞 수식이 참일때 a, 거짓일때 b 출력
		return false;
	}
}

int main() {
	int x, y, big; // 변수 x, y, big 선언
	bool b; // 변수 b 선언
	cout << "두 정수를 입력하세요>>"; // 단순출력
	cin >> x >> y; // x와 y의 값을 입력 받음
	b = bigger(x, y, big); // b가 bigger를 받아옴을 선언
	if (b)
		cout << "same" << endl; // a==b일때, true를 나타내고, 이때 same을 출력함
	else
		cout << "큰 수는 " << big << endl; // false일때, x와 y 중 큰 수를 bigger 함수에 따라 출력함
	// 리턴타입이 bool이기 때문에  big을 리턴할 수 없음. 따라서 참조에 의한 호출로 big의 값을 변경시켜야 함
}