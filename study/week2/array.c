// epic win
#include <stdio.h>

#define SIZE 10

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    int last = SIZE - 1;
    
    for (int i = 0; i < SIZE; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    fclose(in);
    
    for (int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
    fclose(out);
    
    return 0;
}

/*
������� ������

������� ������ ������ 10 �� ����� task.in.
�������� ��� ����� ������ � ���� task.out.

������ �����

10 20 30 40 50 60 70 80 90 100

������ ������

10 20 30 40 50 60 70 80 90 100
*/