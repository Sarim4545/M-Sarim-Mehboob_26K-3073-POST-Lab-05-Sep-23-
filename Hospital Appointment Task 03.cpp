#include <stdio.h>

int main() {
    int appointment, doctor_available, registration_completed;

    printf("Does Patient have an appointment booked? (1 for Yes, 0 for No): \n");
    scanf("%d", &appointment);

    if (appointment == 1) {
        printf("\nYes! Patient has an appointment.\n");

        printf("Is the Doctor Available? (1 for Yes, 0 for No): \n");
        scanf("%d", &doctor_available);

        if (doctor_available == 1) {
            printf("Doctor is available\n");

            printf("Is the registration completed? (1 for Yes, 0 for No): \n");
            scanf("%d", &registration_completed); 

            if (registration_completed == 1) {
                printf("Registration Is Completed\n");
            } else {
                printf("Patient registration Not confirmed\n");
            }
        } else {
            printf("No! the Doctor Is not available\n");
        }
    } else {
        printf("No! Appointment not booked\n");
    }

    return 0;
}

