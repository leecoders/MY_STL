//#include <stdio.h>
//
//struct MY_VECTOR {
//    int _size; // 배열의 길이 length = size
//    int capacity; // 최대 크기 capacity
//
//    int *arr; // 배열을 동적으로 생성하기 위해 포인터 변수 arr 선언
//
//    MY_VECTOR() {
//        _size = 0;
//        capacity = 32;
//        arr = new int[capacity]; // 포인터 변수 arr에 배열 생성하는 방법
//    }
//
//    MY_VECTOR(int k) {
//        _size = 0;
//        capacity = k;
//        arr = new int[capacity];
//    }
//
//    void resize(int k) { // k는 대신 32보다 큰 수여야 함
//        int *temp = new int[k];
//
//        for(int i=0; i < _size; ++i) {
//            temp[i] = arr[i];
//        }
//        delete[] arr; // 메모리 반환 -> 참조변수 arr은 삭제되지 않고 그대로 있음
//        arr = temp; // 변수를 삭제하는 것처럼 보이지만 사실이 아니다! 포인터 변수는 여전히 이전과 동일한 범위를 가지며 다른 변수와 마찬가지로 새 값을 할당받을 수 있다.
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
//        _size--;
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
//MY_VECTOR my_vector;
//
//int main() {
//    scanf("%d", &n);
//    for(int i=0; i<n; ++i) {
//        int input;
//        scanf("%d", &input);
//        my_vector.push_back(input);
//    }
//    for(int i=0; i<n; ++i) {
//        printf("%d ", my_vector[i]);
//    }
//}
