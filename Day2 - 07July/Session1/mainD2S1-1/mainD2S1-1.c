// C Program Training
// Day 2(07-July) - Session 1(09.10AM to 10.50AM)
// Program 1
// Check Driver Eligibility, Licence Type, and Traffic Rule Violations

#include <stdio.h> // Header file for input and output functions

int main() { // Main function where the execution of the program begins

    // Initializing variables
    char name[100];
    int age, licence, badge, heavyLicence, helmet, seatBelt, triples;
    int fine = 0; // Variable to keep track of total fine

    // Title and session information for the program
    printf("C Program Training\n");
    printf("Day 2 - Session 1\n");
    printf("Title: Driver Eligibility and Traffic Rule Violation Checker\n");
    printf("Welcome Mohamed Murshal Ibrahim !\n");

    // Taking input for the name
    printf("Enter Name : ");
    scanf(" %[^\n]", name);

    // Taking input for the driver's age
    printf("Enter Driver's Age : ");
    scanf("%d", &age);

    // Checking age eligibility
    if (age >= 18) {

        printf("Eligible to apply for a Driving Licence.\n");

        // Checking if the user has a driving licence
        printf("Do you have a Driving Licence? (1 = Yes, 0 = No) : ");
        scanf("%d", &licence);

        if (licence == 1) {

            printf("Allowed to drive a Two-Wheeler.\n");

            // Checking four-wheeler eligibility
            if (age >= 25) {

                printf("Allowed to drive a Four-Wheeler.\n");

                // Checking badge licence for load vehicle
                printf("Do you have a Badge Licence? (1 = Yes, 0 = No) : ");
                scanf("%d", &badge);

                if (badge == 1) {
                    printf("Allowed to drive a Load Vehicle.\n");
                }
                else {
                    printf("Not allowed to drive a Load Vehicle.\n");
                }

            }
            else {
                printf("Not eligible to drive a Load Vehicle (Age below 25).\n");
            }

            // Checking heavy driving licence
            printf("Do you have a Heavy Driving Licence? (1 = Yes, 0 = No) : ");
            scanf("%d", &heavyLicence);

            if (heavyLicence == 1) {
                printf("Allowed to drive a Lorry.\n");
            }
            else {
                printf("Not allowed to drive a Lorry.\n");
            }

        }
        else {
            printf("Not allowed to drive without a Driving Licence.\n");
        }

    }
    else {
        printf("Not allowed to drive. Age is below 18.\n");
    }

    // Traffic rule checking
    printf("\nTraffic Rule Verification\n");

    // Helmet check
    printf("Are you wearing a Helmet? (1 = Yes, 0 = No) : ");
    scanf("%d", &helmet);

    if (helmet == 0) {
        printf("Fine : Rs.200 (Helmet not worn)\n");
        fine = fine + 200;
    }

    // Seat belt check
    printf("Are you wearing a Seat Belt? (1 = Yes, 0 = No) : ");
    scanf("%d", &seatBelt);

    if (seatBelt == 0) {
        printf("Fine : Rs.500 (Seat Belt not worn)\n");
        fine = fine + 500;
    }

    // Triple riding check
    printf("Are you riding Triples? (1 = Yes, 0 = No) : ");
    scanf("%d", &triples);

    if (triples == 1) {
        printf("Fine : Rs.1000 (Triple Riding)\n");
        fine = fine + 1000;
    }

    // Displaying the total fine
    printf("\nTotal Fine = Rs.%d\n", fine);

    return 0; // Indicating that the program has executed successfully
}