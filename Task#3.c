#include <stdio.h>

int main() {
    int marks, pass[10], fail[10];
    int pCount = 0, fCount = 0, pSum = 0, fSum = 0;

    printf("Enter quiz marks for students (-1 to stop):\n");

    for (int i = 0; i < 10; i++) {
        printf("Student %d marks: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10) {
            pass[pCount++] = marks;
            pSum += marks;
        } 
        else if (marks >= 0 && marks < 5) {
            fail[fCount++] = marks;
            fSum += marks;
        } 
        else {
            printf("Invalid marks! Enter between 0–10 only.\n");
            i--;
        }
    }

    printf("\n--- Pass Students Marks ---\n");
    if (pCount > 0) {
        for (int i = 0; i < pCount; i++)
            printf("%d ", pass[i]);
        printf("\nAverage of Pass: %.2f\n", (float)pSum / pCount);
    } else {
        printf("No pass marks entered.\n");
    }

    printf("\n--- Fail Students Marks ---\n");
    if (fCount > 0) {
        for (int i = 0; i < fCount; i++)
            printf("%d ", fail[i]);
        printf("\nAverage of Fail: %.2f\n", (float)fSum / fCount);
    } else {
        printf("No fail marks entered.\n");
    }

    return 0;
}

