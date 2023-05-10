#include "search_algos.h"

int interpolation_search(int *arr, size_t size, int value) {
    int low = 0, high = (size - 1);
    while (low <= high && value >= arr[low] && value <= arr[high]) {
        if (low == high) {
            if (arr[low] == value) return low;
            return -1;
        }
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (value - arr[low]));
        if (arr[pos] == value) return pos;
        if (arr[pos] < value) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}
