//
// Created by amaru on 5/31/20.
//

#include <iostream>
using namespace std;

void BubbleSort1(vector<int>A) {
    int n, flag, temp;
    n=A.size();
    for(int k=1; k<n ; k++)
    {
        flag = 0;
        for(int i=0 ; i<n-k ; i++)
        {
            if(A[i] >A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0 )
            break;
    }
}

void * _bubblesort_(
        void * _array_,
        void (*_funcion_puntero_) (void *, int idx, int flag),
        int _tam_
){
    int flag = 0;
    for (int i = 0; i < _tam_ ; i ++)
        for(int k = 0; k < _tam_-i; k++)
            _funcion_puntero_(_array_,k,flag);
    return _array_;
}

void  _b_int_ (void * _vector_, int idx,int flag){
    // TODO:  QUE COSA PONGO AQUI?
    _vector_[_i]

}

void  _b_float_ (void * _vector_, int idx,int flag){
    // TODO:  QUE COSA PONGO AQUI?
}

void  _b_double_ (void * _vector_, int idx,int flag){
    // TODO:  QUE COSA PONGO AQUI?
}

void  _b_char_ (void * _vector_, int idx,int flag){
    // TODO:  QUE COSA PONGO AQUI?
}

int main(){
    int i = 0;
    int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
    float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
    double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
    char _array_4 [6] = {'k','a','r','l','o','s'};


    _bubblesort_(_array_1,_b_int_,5);
    // PRINT
    _bubblesort_(_array_2,_b_float_,5);
    // PRINT
    _bubblesort_(_array_3,_b_double_,5);
    // PRINT
    _bubblesort_(_array_4,_b_char_,6);
    // PRINT

    return 0;
}


