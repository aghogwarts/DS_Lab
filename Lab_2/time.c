/*  Define a structure time with data members hour, min, sec. Write the user defined
    functions to (i) Add (ii) To find difference between two objects of class time.
    Functions take two-time objects as argument and return time object. Also write the
    display and read function.
*/

#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
    long int total_sec;
};

void Add(struct Time o[]) {
    o[2].total_sec = o[0].total_sec + o[1].total_sec;
    o[2].sec = ( o[2].total_sec % 60 ) % 60;
    o[2].min = ( o[2].total_sec / 60 ) % 60;
    o[2].hour = o[2].total_sec / 3600;
}

void Diff(struct Time o[]) {
    o[3].total_sec = o[1].total_sec - o[0].total_sec;
    if (o[3].total_sec < 0) {
        o[3].total_sec * (-1);
    }
    o[3].sec = ( o[3].total_sec % 60 ) % 60;
    o[3].min = ( o[3].total_sec / 60 ) % 60;
    o[3].hour = o[3].total_sec / 3600;
}

void Read(struct Time t[]) {
    int i;
    printf("\n>> Enter two time objects to perform operations on -");
    for (int i = 0; i < 2; i++) {
    printf("\n\n++ Time object %d -\n\n", i + 1);

    printf("> Hours: ");
    scanf("%d", &t[i].hour);

    printf("> Minutes: ");
    scanf("%d", &t[i].min);

    printf("> Seconds: ");
    scanf("%d", &t[i].sec);

    t[i].total_sec = t[i].sec + ( t[i].min * 60 ) + ( t[i].hour * 3600 );
    }
    Add(t);
    Diff(t);
}

void Display(struct Time t[]) {
    int i;
    printf("\n\n-- Entered Time objects:");

    for (int i = 0; i < 2; i++)
    {
        printf("\n\n++ Object %d details:\n", i + 1);
        printf("\n+ Time:  %d h", t[i].hour);
        printf(" : %d m", t[i].min);
        printf(" : %d s\n", t[i].sec);
    }
    printf("\n\n++ Added time objects:\n");
    printf("\n+ Time:  %d h", t[2].hour);
    printf(" : %d m", t[2].min);
    printf(" : %d s\n", t[2].sec);
    printf("\n\n++ Difference between time objects:\n");
    printf("\n+ Time:  %d h", t[3].hour);
    printf(" : %d m", t[3].min);
    printf(" : %d s\n", t[3].sec);
}

int main() {
    int choice;
    struct Time obj[4];
    do {
        printf("\n------------------------------------------------------\n\n>> Enter choice:\n1. Read time objects (WARNING - data may get overriden!!)\n2. Display\n3. Exit\n\n__");
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            Read(obj);
            break;
        case 2:
            Display(obj);
            break;
        case 3:
            continue;
        default:
            printf("\n-- Enter valid choice !!");
        }
    } while ( choice != 3);
}
