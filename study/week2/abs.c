#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

int intScan(FILE *in) {
    int number;
    
    fscanf(in, "%d", &number);
    return number;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = intScan(in);
    int array[size];
    int last = size - 1;
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = intScan(in);
    }
    
    arrayAbs(array, size);
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
    
    return 0;
}


/*
������� ������
� ����� task.in ���� ����� ������������������ ����� � ���� ������������������.
��������� ������������������ � ������.
����� ��� ������������� ����� � �������� �� ��������������, ������� �� ������.
�������������� ������ ������� � task.out.
������ �����
10
10 -20 30 40 -50 -60 70 80 90 -100
������ ������
10 20 30 40 50 60 70 80 90 100
*/