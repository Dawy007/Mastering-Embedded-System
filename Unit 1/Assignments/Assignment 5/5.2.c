#include <stdio.h>

enum unit
{
    inch,
    foot
};
struct Sdistance
{
    int dfeet;
    float dinch;
};
struct Sdistance sum(struct Sdistance d1, struct Sdistance d2);
int main()
{
    struct Sdistance d1, d2, result;
    printf("Enter information for 1st Distance:\n");
    printf("Enter Feet: ");
    scanf("%d", &d1.dfeet);
    printf("Enter Inch: ");
    scanf("%f", &d1.dinch);
    printf("Enter information for 2nd Distance:\n");
    printf("Enter Feet: ");
    scanf("%d", &d2.dfeet);
    printf("Enter Inch: ");
    scanf("%f", &d2.dinch);
    result = sum(d1, d2);
    printf("Sum of distances= %d'%.2f\n", result.dfeet, result.dinch);

    return 0;
}

struct Sdistance sum(struct Sdistance d1, struct Sdistance d2)
{
    struct Sdistance result;
    result.dfeet = d1.dfeet + d2.dfeet;
    result.dinch = d1.dinch + d2.dinch;
    result.dfeet += result.dinch / 12;
    result.dinch = result.dinch - 12 * (int)(result.dinch / 12);
    return result;
}