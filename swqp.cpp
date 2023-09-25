#include <iostream>

using namespace std;

void MySwapPtr(int*i, int*j) //포인터 변수 이용해보기
{
    int temp = *i;
    *i=*j;
    *j=temp;
}

void MySwapRef(int&i, int&j) //레퍼런스
{
    int temp = i;
    i=j;
    j=temp;

}

bool CheckSorted(int a, int b)
{
    return !(a>b);

    //다른방법

    //if (a<=b) return true;
    //elsereturn false;

    //if(a>b) return false; return true;
}

int main()
{
	// Swap
	{
		int a = 3;
		int b = 2;

		cout << a << " " << b << endl;

		// TODO: a와 b를 교환하기(임시변수 사용) 

        int temp = a;
        a=b;
        b = temp;

		cout << a << " " << b << endl;
	}
    

	// 정렬(sorting)
	{
		int arr[] = { 9, 3 };

		cout << arr[0] << " " << arr[1] << endl;

		// TODO: 오름차순을 원해서 swap을 안해도 될 경우
        if(arr[0]>arr[1])
            MySwapRef(arr[0], arr[1]);

		//cout << arr[0] << " " << arr[1] << endl;
	}

	// 값과 상관 없이 항상 작은 값이 먼저 출력되게 하려면?
	// 두 값이 같을 때는 순서가 상관 없음 -> 큰 값이 먼저 출력되지 않게 하려면?
	{
		int arr[2];

		// TODO:
        for(int j =0; j<5; j++)
           for(int i =0; i<5; i++)
           {

            arr[0] = i;
            arr[1] = j;

            cout << boolalpha;
            cout << arr[0]<<" "<<arr[1]<<" "<<arr[0] <= arr[1]<<endl;

           }
	}

	return 0;
}