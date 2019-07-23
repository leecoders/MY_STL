//#include <stdio.h>
//
//struct MY_VECTOR {
//    int _size;
//    int capacity;
//
//    int* arr;
//
//    MY_VECTOR() {
//        _size = 0;
//        capacity = 32;
//        arr = new int[capacity];
//    }
//
//    MY_VECTOR(int k) {
//        _size = 0;
//        capacity = k;
//        arr = new int[capacity];
//    }
//
//    void resize(int k) {
//        int* temp = new int[k];
//
//        for(int i=0; i < _size; ++i) {
//            temp[i] = arr[i];
//        }
//        delete[] arr;
//        arr = temp;
//        capacity = k;
//    }
//
//    int size() const {
//        return _size;
//    }
//
//    int* begin() const {
//        return &arr[0];
//    }
//
//    int* end() const {
//        return &arr[0] + _size;
//    }
//
//    void push_back(int data) {
//        if(_size == capacity) {
//            resize(_size * 2);
//        }
//        arr[_size++] = data;
//    }
//
//    void pop_back() {
//        if(_size) {
//            _size--;
//        }
//    }
//
//    int& operator [] (int idx) {
//        return arr[idx];
//    }
//
//    int operator [] (int idx) const {
//        return arr[idx];
//    }
//};
//
//int n;
//MY_VECTOR my_vector(1000000), buf(1000000);
//
//void qsort(int *p, int left, int right) {
//    if(left >= right) return;
//    int l = left - 1;
//    int r = right + 1;
//    int mid = p[(l+r)/2];
//
//    while(1) {
//        while(p[++l] < mid);
//        while(p[--r] > mid);
//        if(l >= r) break;
//        int temp = p[l];
//        p[l] = p[r];
//        p[r] = temp;
//    }
//
//    qsort(p, left, l-1);
//    qsort(p, r+1, right);
//}
//
//void merge_sort(int *p, int len) {
//    if(len < 2) return;
//    int i, j, k, mid;
//    mid = len / 2;
//    i = 0, j = mid, k = 0;
//
//    merge_sort(p, mid);
//    merge_sort(p + mid, len - mid);
//
//    while(i < mid && j < len) {
//        if(p[i] < p[j]) {
//            buf[k++] = p[i++];
//        }
//        else {
//            buf[k++] = p[j++];
//        }
//    }
//    while(i < mid) {
//        buf[k++] = p[i++];
//    }
//    while(j < len) {
//        buf[k++] = p[j++];
//    }
//    for(int i=0; i<len; ++i) {
//        p[i] = buf[i];
//    }
//}
//
//
//int main() {
//    scanf("%d", &n);
//
//    for(int i=0; i<n; ++i) {
//        scanf("%d", &my_vector[i]);
//    }
//    qsort(&my_vector[0], 0, n-1);
//
//    for(int i=0; i<n; ++i) {
//        printf("%d ", my_vector[i]);
//    }
//}
