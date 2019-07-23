#include <stdio.h>

struct MY_VECTOR {
    int _size;
    int capacity;

    int* arr;

    MY_VECTOR() {
        _size = 0;
        capacity = 32;
        arr = new int[capacity];
    }

    MY_VECTOR(int k) {
        _size = 0;
        capacity = k;
        arr = new int[capacity];
    }

    void resize(int k) {
        int* temp = new int[k];

        for(int i=0; i < _size; ++i) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = k; // ?
    }

    int size() const {
        return _size;
    }

    int* begin() const {
        return &arr[0];
    }

    int* end() const {
        return &arr[0] + _size;
    }

    void push_back(int data) {
        if(_size == capacity) {
            resize(_size * 2);
        }
        arr[_size++] = data;
    }

    void pop_back() {
        if(_size) {
            _size--;
        }
    }

    int& operator [] (int idx) {
        return arr[idx];
    }

    int operator [] (int idx) const {
        return arr[idx];
    }
};

int n;
MY_VECTOR my_vector(50);

int main() {
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        int input;
        scanf("%d", &input);
        my_vector.push_back(input);
        printf("%d / %d\n", my_vector._size, my_vector.capacity);
    }
    for(int i=0; i<n; ++i) {
        printf("%d번째 : %d, 사이즈는 %d입니다.\n", i+1, my_vector[i], my_vector.capacity);
    }
}




















