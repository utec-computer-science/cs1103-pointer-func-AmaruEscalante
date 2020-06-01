//
// Created by amaru on 5/31/20.
//

#include <iostream>
using namespace std;

//void BubbleSort1(vector<int>A) {
//    int n, flag, temp;
//    n=A.size();
//    for(int k=1; k<n ; k++)
//    {
//        flag = 0;
//        for(int i=0 ; i<n-k ; i++)
//        {
//            if(A[i] >A[i+1])
//            {
//                temp = A[i];
//                A[i] = A[i+1];
//                A[i+1] = temp;
//                flag = 1;
//            }
//        }
//        if(flag == 0 )
//            break;
//    }
//}

void * _bubblesort_(
        void *_array_,
        void (*_funcion_puntero_) (void *, int idx),
        int _tam_
){
    for (int i = 0; i < _tam_-1; i ++){
        for(int k = 0; k < _tam_-i-1; k++){
            _funcion_puntero_(_array_,k);
        }
    }
    return _array_;
}

template <typename T>
void myswap (T& arg1, T& arg2){
    auto temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

void  _b_int_ (void *_vector_, int idx){
    int *intPtr{ (int*)(_vector_) };

    if(intPtr[idx] > intPtr[idx+1]){
        myswap(intPtr[idx], intPtr[idx+1]);
    }
}

void  _b_float_ (void * _vector_, int idx){
    float *floatPtr{ (float*)(_vector_) };
    if(floatPtr[idx] > floatPtr[idx+1]){
        myswap(floatPtr[idx], floatPtr[idx+1]);
    }
}

void  _b_double_ (void * _vector_, int idx){
    double *doublePtr{ (double*)(_vector_) };
    if(doublePtr[idx] > doublePtr[idx+1]){
        myswap(doublePtr[idx], doublePtr[idx+1]);
    }
}

void  _b_char_ (void * _vector_, int idx){
    char *charPtr{ (char*)(_vector_) };
    if(charPtr[idx] > charPtr[idx+1]){
        myswap(charPtr[idx], charPtr[idx+1]);
    }
}

int main(){
    int i = 0;
    int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
    float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
    double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
    char _array_4 [6] = {'k','a','r','l','o','s'};

    _bubblesort_(_array_1,_b_int_,5);

    for(auto &item:_array_1){
        cout << item << " ";
    }
    cout << endl;

    _bubblesort_(_array_2,_b_float_,5);

    for(auto &item:_array_2){
        cout << item << " ";
    }
    cout << endl;

    _bubblesort_(_array_3,_b_double_,5);

    for(auto &item:_array_3){
        cout << item << " ";
    }
    cout << endl;

    _bubblesort_(_array_4,_b_char_,6);
    for(auto &item:_array_4){
        cout << item << " ";
    }
    cout << endl;

    return 0;
}


