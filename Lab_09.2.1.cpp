#include <stdio.h>
#include "my_macros.h" // ϳ��������� ������������� �����

int main() {
    int x, y, z; 
    float W;
    char ch;

    do {
        puts("Enter integer values for x, y, and z:"); // ����� �� ���
        // �������� �� ������ ���������� �������
        if (scanf("%d %d %d", &x, &y, &z) != 3) { // ������ ���������� z
            puts("Invalid input. Please enter integers.");
            return 1;
        }

        // ���������� W ������� �� �������� z
        if (z == 1) {
            // ���� z = 1, ���������� ������
            W = MIN(POW((x - y), 2), ABS(y - x));
            puts("Using MIN expression:");
            PRINTR(W);
        }
        else {
            // ���� z != 1, ���������� ��������
            W = MAX(x + POW(y, 2), z + POW(x, 2));
            puts("Using MAX expression:");
            PRINTR(W);
        }

        // ����� �� �������� ��������� ��������
        puts("Repeat? y/n");
        if (scanf(" %c", &ch) != 1) { // �������� ����� �������
            puts("Error reading input.");
            return 1;
        }
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
