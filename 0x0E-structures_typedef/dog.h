
#include <stdio.h>
struct dog {
    char *name;
    float age;
    char *owner;
};

int main() {
    struct dog myDog;
    myDog.name = "Ghost";
    myDog.age = 2.5;
    myDog.owner = "yahya";

   
    printf("Dog's Name: %s\n", myDog.name);
    printf("Dog's Age: %.1f years\n", myDog.age);
    printf("Dog's Owner: %s\n", myDog.owner);

    return 0;
}
