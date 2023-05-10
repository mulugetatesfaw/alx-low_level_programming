#include <stdio.h>

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int arr[], size_t size, int value) {
    size_t low = 0, high = (size - 1);
    while (low <= high && value >= arr[low] && value <= arr[high]) {
        if (low == high) {
            if (arr[low] == value) return low;
            return -1;
        }
        size_t pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (value - arr[low]));
        if (arr[pos] == value) return pos;
        if (arr[pos] < value) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}
