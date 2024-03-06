#include <iostream>
#include <vector> // vector 헤더 파일을 포함해야 합니다.

using namespace std;

// 최대공약수를 구하는 함수 (유클리드 호제법)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 주어진 수의 약수를 구하는 함수
vector<int> get_divisors(int num) {
    vector<int> divisors;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main() {
    int a, b;
    cin >> a >> b;

    int gcd_result = gcd(1920, 2880);

    vector<int> common_divisors = get_divisors(gcd_result);

    bool satisfied = false;
    for (int i = a; i <= b; i++) {
        for (int j = 0; j < common_divisors.size(); j++) {
            if (i == common_divisors[j]) {
                satisfied = true;
                break;
            }
        }
        if (satisfied) // 만족하는 경우에는 반복문을 더 이상 수행할 필요가 없으므로 바로 종료합니다.
            break;
    }

    if (satisfied)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}