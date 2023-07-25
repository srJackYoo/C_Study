/*

���� �¶��� 1003�� 

����:
n��° �Ǻ���ġ ���� ���ϴ� C++ �Լ��� �־�����. int fibonacci(int n)
(1) fibonacci(3)�� ȣ���ϸ� ������ ���� ���� �Ͼ��.
(2) fibonacci(3)�� fibonacci(2)�� fibonacci(1) (ù ��° ȣ��)�� ȣ���Ѵ�.
(3) fibonacci(2)�� fibonacci(1) (�� ��° ȣ��)�� fibonacci(0)�� ȣ���Ѵ�.
(4) �� ��° ȣ���� fibonacci(1)�� 1�� ����ϰ� 1�� �����Ѵ�.
(5) fibonacci(0)�� 0�� ����ϰ�, 0�� �����Ѵ�.
(6) fibonacci(2)�� fibonacci(1)�� fibonacci(0)�� ����� ���, 1�� �����Ѵ�.
(7) ù ��° ȣ���� fibonacci(1)�� 1�� ����ϰ�, 1�� �����Ѵ�.
(8) fibonacci(3)�� fibonacci(2)�� fibonacci(1)�� ����� ���, 2�� �����Ѵ�.

1�� 2�� ��µǰ�, 0�� 1�� ��µȴ�. N�� �־����� ��, fibonacci(N)�� ȣ������ ��, 
0�� 1�� ���� �� �� ��µǴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�:
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, N�� �־�����.
N�� 40���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.

���:
�� �׽�Ʈ ���̽����� 0�� ��µǴ� Ƚ���� 1�� ��µǴ� Ƚ���� �������� �����ؼ� ����Ѵ�.

*/


#include <stdio.h>

int dp[41];


int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    }
    else if (n == 1) {
        printf("1");
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void) {
    int test;
    scanf("%d", &test);

    while (test-- > 0) {
        int x;
        scanf("%d", &x);
        if (x == 0) {
            printf("%d %d \n", 1, 0);
        }
        else if (x == 1) {
            printf("%d %d\n", 0, 1);
        }
        else {
            fibonacci(x);
            printf("%d %d\n", dp[x - 1], dp[x]);
        }
    }

    return 0;
}


/*


*/
