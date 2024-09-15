#include <stdio.h>

int main() {
  int students, subjects;
    
  printf("Enter the number of students: ");
  scanf("%d", &students);
  printf("Enter the number of subjects: ");
  scanf("%d", &subjects);

  int marks[students][subjects];

  for (int i = 0; i < students; i++) {
    printf("Enter marks for student %d:\n", i + 1);
    for (int j = 0; j < subjects; j++) {
      printf("Subject %d: ", j + 1);
      scanf("%d", &marks[i][j]);
    }
  }

  for (int i = 0; i < students; i++) {
    int student_total = 0;
    for (int j = 0; j < subjects; j++) {
      student_total += marks[i][j];
    }
    float student_avg = (float)student_total / subjects;
    printf("Average marks of student %d: %.2f\n", i + 1, student_avg);
  }

  for (int j = 0; j < subjects; j++) {
    int subject_total = 0;
    for (int i = 0; i < students; i++) {
      subject_total += marks[i][j];
    }
    float subject_avg = (float)subject_total / students;
    printf("Average marks for subject %d: %.2f\n", j + 1, subject_avg);
  }

  return 0;
}
