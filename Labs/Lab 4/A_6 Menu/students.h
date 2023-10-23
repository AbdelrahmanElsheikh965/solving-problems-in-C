#ifndef Students
#define Students

struct Student
{
    char name[50];
    char gender;
    char age;
    int id;
};

// Store Students
int saveStudents(int flag, char c, struct Student groupOfStudents[]);

// View Students
void displayStudents(struct Student groupOfStudents[]);

#endif
