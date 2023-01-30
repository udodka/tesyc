#include <iostream>
int main() {
int n, k;
std::cin >> n >> k;
int* a = new int[n];
int sum = 0, ans = 0;
for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
    sum += a[i];
    if (i == k - 1) {
        ans = sum;
    }
    if (i >= k) {
        sum -= a[i - k];
        ans = std::min(ans, sum);
    }
}
std:: cout << (double)ans / k << std::endl;
delete[] a;

}