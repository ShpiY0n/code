#include <stdio.h>

int main() {
    int a, b;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &a, &b);
    fclose(in);
    
    fprintf(out, "%d\n", a+b);
    fclose(out);

    return 0;
}

/*
������� ������

������� ��� ����� �� ����� task.in.
�������� �� ����� � ���� task.out.
*/