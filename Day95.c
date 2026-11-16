#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    int n;
    struct Student s[100], top;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = findTop(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}