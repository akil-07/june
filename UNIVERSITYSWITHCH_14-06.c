#include <stdio.h>
#include <conio.h>

void main() {
    int course, dept, regno, m, p, c;
    float cutoff;
    char name[30];

    clrscr();

    printf("\t\t\t\t=== DEPARTMENT ===");
    printf("\n1) Computer Department");
    printf("\n2) Mechanical Department");
    printf("\n3) Electrical Department");
    printf("\nEnter choice between (1-3): ");
    scanf("%d", &course);

    switch (course) {
	case 1:
	    printf("\n\t\t\t=== COMPUTER COURSES ===");
	    printf("\n1) Artificial Intelligence");
	    printf("\n2) Information Technology");
	    printf("\n3) Cyber Security");
	    printf("\n4) CSE");
	    printf("\nEnter the choice between (1-4): ");
	    scanf("%d", &dept);

	    switch (dept) {
		case 1:
		    printf("\nYou have selected Artificial Intelligence!");
		    break;
		case 2:
		    printf("\nYou have selected Information Technology!");
		    break;
		case 3:
		    printf("\nYou have selected Cyber Security!");
		    break;
		case 4:
		    printf("\nYou have selected CSE!");
		    break;
		default:
		    printf("\nInvalid course selection!");
		  getch();
	    }
	    break;

	case 2:
	    printf("\n\t\t\t=== MECHANICAL COURSES ===");
	    printf("\n1) Automobile Engineering");
	    printf("\n2) Thermal Engineering");
	    printf("\n3) CAD/CAM");
	    printf("\nEnter the choice between (1-3): ");
	    scanf("%d", &dept);

	    switch (dept) {
		case 1:
		    printf("\nYou have selected Automobile Engineering!");
		    break;
		case 2:
		    printf("\nYou have selected Thermal Engineering!");
		    break;
		case 3:
		    printf("\nYou have selected CAD/CAM!");
		    break;
		default:
		    printf("\nInvalid course selection!");
		    getch();

	    }
	    break;

	case 3:
	    printf("\n\t\t\t=== ELECTRICAL COURSES ===");
	    printf("\n1) Power Systems");
	    printf("\n2) Embedded Systems");
	    printf("\n3) Electrical Machines");
	    printf("\nEnter the choice between (1-3): ");
	    scanf("%d", &dept);

	    switch (dept) {
		case 1:
		    printf("\nYou have selected Power Systems!");
		    break;
		case 2:
		    printf("\nYou have selected Embedded Systems!");
		    break;
		case 3:
		    printf("\nYou have selected Electrical Machines!");
		    break;
		default:
		    printf("\nInvalid course selection!");
		    getch();

	    }
	    break;

	default:
	    printf("\nInvalid department selection!");
	    getch();
	    return;
    }


    printf("\nEnter your name: ");
    scanf("%s", name);

    printf("Enter your registration number: ");
    scanf("%d", &regno);

    printf("Enter your Maths mark: ");
    scanf("%d", &m);

    printf("Enter your Physics mark: ");
    scanf("%d", &p);

    printf("Enter your Chemistry mark: ");
    scanf("%d", &c);

    cutoff = m + (p / 2.0f) + (c / 2.0f);
    printf("\nYour cutoff is: %.2f", cutoff);


    if (course == 1)
 {
	if ((dept == 1 || dept == 3) && cutoff >= 171) {
	    printf("\nYou are eligible to get admission in our campus!");
	} else if (dept == 2 && cutoff >= 167) {
	    printf("\nYou are eligible to get admission in our campus!");
	} else if (dept == 4 && cutoff >= 165) {
	    printf("\nYou are eligible to get admission in our campus!");
	} else {
	    printf("\nSorry, you are not eligible to get admission in our campus.");
	}
    } else if (course == 2)
{
	if (cutoff >= 160) {
	    printf("\nYou are eligible to get admission in Mechanical Department!");
	} else {
	    printf("\nSorry, you are not eligible to get admission in Mechanical Department.");
	}
    } else if (course == 3) {
	if (cutoff >= 158) {
	    printf("\nYou are eligible to get admission in Electrical Department!");
	}
 else
 {
	    printf("\nSorry, you are not eligible to get admission in Electrical Department.");
	}
    }

    getch();
}
