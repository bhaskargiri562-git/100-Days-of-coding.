#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char gender[10];

    scanf("Gender=%s", gender);

    if (gender[0] == 'M')
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}