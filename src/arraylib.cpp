#include <vector>
#include <algorithm>
#include <cstddef>
int arr_sum(const int* arr, std::size_t n) {
    long long sum = 0;
    for (std::size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return static_cast<int>(sum);
}

int arr_max(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 1; i < n; ++i) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}

int arr_min(const int* arr, std::size_t n) {
    int m = arr[0];
    for (std::size_t i = 1; i < n; ++i) {
        if (arr[i] < m) m = arr[i];
    }
    return m;
}

double arr_average(const int* arr, std::size_t n) {
    long long sum = 0;
    for (std::size_t i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > 0) ++count;
    }
    return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] < 0) ++count;
    }
    return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] == 0) ++count;
    }
    return count;
}

int arr_product(const int* arr, std::size_t n) {
    int p = 1;
    for (std::size_t i = 0; i < n; ++i) {
        p *= arr[i];
    }
    return p;
}
double arr_median(const int* arr, std::size_t n) {
    std::vector<int> tmp(arr, arr + n);
    std::sort(tmp.begin(), tmp.end());

    if (n % 2 == 1) {
        return static_cast<double>(tmp[n / 2]);
    } else {
        return (static_cast<double>(tmp[n / 2 - 1]) + tmp[n / 2]) / 2.0;
    }
}