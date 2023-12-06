#include<stdio.h>
void main() {
	int i;
    char names[5][50];
    for (i = 0; i < 5; ++i) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\nNames entered by the user:\n");
    for (i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}

