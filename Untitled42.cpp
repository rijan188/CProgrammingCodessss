#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

struct Distance addDistances(struct Distance dist1, struct Distance dist2);
void displayDistance(struct Distance dist);

int main() {
    struct Distance dist1, dist2, sum;

    printf("Enter 1st distance:\n");
    scanf("%d %d", &dist1.feet, &dist1.inches);

    printf("Enter 2nd distance:\n");
    scanf("%d %d", &dist2.feet, &dist2.inches);

    sum = addDistances(dist1, dist2);

    printf("Sum of the distances: ");
    displayDistance(sum);

    return 0;
}

struct Distance addDistances(struct Distance dist1, struct Distance dist2) {
    struct Distance sum;

    sum.feet = dist1.feet + dist2.feet;
    sum.inches = dist1.inches + dist2.inches;

    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }

    return sum;
}

void displayDistance(struct Distance dist) {
    printf("%d feet and %d inches\n", dist.feet, dist.inches);
}
