#include <stdio.h>
#include <conio.h>
void main() 
{
    int course, dept, regno, m, p, c;
    float cutoff;
    char name[30];
    clrscr();
    printf("\t\t=== DEPARTMENT ===\n1) Computer\n2) Mechanical\n3) Electrical\nEnter choice (1-3): ");
    scanf("%d", &course);
    if (course == 1)
 {
        printf("\n\t\t=== COMPUTER ===\n1) AI\n2) IT\n3) Cyber\n4) CSE\nEnter choice (1-4): ");
        scanf("%d", &dept);
        if (dept == 1) printf("Selected AI");
        else if (dept == 2) printf("Selected IT");
        else if (dept == 3) printf("Selected Cyber");
        else if (dept == 4) printf("Selected CSE");
        else { printf("Invalid course!"); getch();  }
    }
 else if (course == 2)
 {
        printf("\n\t=== MECHANICAL ===\n1) Automobile\n2) Thermal\n3) CAD/CAM\nEnter choice (1-3): ");
        scanf("%d", &dept);
        if (dept == 1) printf("Selected Automobile");
        else if (dept == 2) printf("Selected Thermal");
        else if (dept == 3) printf("Selected CAD/CAM");
        else { printf("Invalid course!"); getch();  }
    }
 else if (course == 3) 
{
        printf("\n\t=== ELECTRICAL ===\n1) Power\n2) Embedded\n3) Machines\nEnter choice (1-3): ");
        scanf("%d", &dept);
        if (dept == 1) printf("Selected Power");
        else if (dept == 2) printf("Selected Embedded");
        else if (dept == 3) printf("Selected Machines");
        else { printf("Invalid course!"); getch(); }
    }
 else
 {
        printf("Invalid department!"); getch(); 
    }
    printf("\nEnter name: ");
    scanf("%s", name);
    printf("Enter reg no: ");
    scanf("%d", &regno);
    printf("Maths: "); scanf("%d", &m);
    printf("Physics: "); scanf("%d", &p);
    printf("Chemistry: "); scanf("%d", &c);
    cutoff = m + (p / 2.0f) + (c / 2.0f);
    printf("Cutoff: %.2f", cutoff);
    if (course == 1) 
{
        if ((dept == 1 || dept == 3) && cutoff >= 171) printf("\nEligible!");
        else if (dept == 2 && cutoff >= 167) printf("\nEligible!");
        else if (dept == 4 && cutoff >= 165) printf("\nEligible!");
        else printf("\nNot eligible.");
    } 
else if (course == 2)
 {
        if (cutoff >= 160) printf("\nEligible for Mechanical!");
        else printf("\nNot eligible for Mechanical.");
    }
 else if (course == 3)
 {
        if (cutoff >= 158) printf("\nEligible for Electrical!");
        else printf("\nNot eligible for Electrical.");
    }
    getch();
}
