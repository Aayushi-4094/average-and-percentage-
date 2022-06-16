
#include <stdio.h>
int main()
{
    int total_subjects=5, i;
    float marks, total = 0, average, percentage;
     printf("Enter marks of each subject: \n");
    for (int i = 0; i < total_subjects; i++){
        scanf("%f", &marks);
        total = total + marks;
    }
    average = total / total_subjects;
    percentage = (total / (total_subjects * 100)) * 100;
    
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f percent", percentage);
    return 0;

}