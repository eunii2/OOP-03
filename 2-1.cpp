#include <iostream>
using namespace std;

int main() {
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} }; // 3*3배열 생성
	int(*ptr)[3]; // int [3]배열에 대한 포인터 선언
	// int (*ptr)[3]은 3개의 열과 n개의 행으로 이루어져있고 int ptr[][3] 배열이라고 생각
	int* p; // int에 대한 포인터 변수 p를 선언
	int** pt; // int에 대한 이중포인터 변수 pt를 선언

	ptr = M; // (ptr=M)==(ptr=&M[0])임을 선언
	cout << ptr << "\n" << M << "\n"; // ptr=&M[0]이므로 둘 모두 1행의 시작 주소를 출력
	cout <<  ptr + 1 << "\n" <<  M + 1 << "\n"; // ptr=M, M+1==&M[1]이므로 2행의 시작 주소를 출력
	cout <<  *(ptr + 1) << "\n" <<  ptr[1] << "\n" <<  *(M + 1) << "\n" <<  M[1] << "\n"; // *(ptr+1) == M[1][0]의 주소이므로 M의 2행 시작 주소를 출력
	// ptr = M 이므로 ptr[1]은 2행의 주소를 출력 // *(M+1)=*(ptr+1)이므로 같은 값 출력 // M[1]이므로 M의 2행 주소값 출력 => 결국 모두 같은 값을 출력
	cout <<  **(ptr + 1) << "\n" <<  **(M + 1) << "\n" <<  *M[1] << "\n" <<  M[1][0] << "\n"; // **(ptr+1) == M[1][0]이고, 이중포인터는 그 안의 내용을
	// 의미하므로 각 배열에 해당하는 값을 출력한다. 모두 같은 곳을 가르키므로 같은 값들을 출력

	p = M[0]; // M[0]==*M으로 p는 1행의 시작 주소임을 선언
	cout <<  p << "\n" <<  M[0] << "\n" <<  *M << "\n"; // p=M[0]이고, *M은 모두 같은 주소값을 나타냄
	cout <<  p + 1 << "\n" <<  M[0] + 1 << "\n" <<  *M + 1 << "\n"; // p=M[0], p+1=M[0]+1의 주소이고 *M+1이므로 모두 같은 주소값을 나타냄
	cout <<  *(p + 1) << "\n" <<  *(M[0] + 1) << "\n" <<  *(*M + 1) << "\n"; //세 개 모두 같은 값을 나타내고 *(p+1)=*(M[0]+1)이다. 또한, 세 개는 모두
	// M[0]+1의 값을 가르킴

	pt = &p; // pt = M; (X)
	cout <<  *pt << "\n" <<  p << "\n"; // *pt == p이므로 p의 값에 해당하는 주소를 나타낸다. *pt와 p는 M[0][0] 주소값을 나타냄
	cout <<  **pt << "\n" <<  *p << "\n"; // **pt == *p이므로 p의 본래 값을 나타낸다. **pt와 *p는 M[0][0]값을 나타냄
	// 2차원 배열에 접근할 때 주소의 주소이므로 1차원 포인트보다 한 번 더 참조 과정을 거친다고 볼 수 있음

	return 0;
}