// structs can be members of other structs

#include <stdio.h>
#include <string.h>

/*
typedef struct {

	int x;
	int y;

} point;

typedef struct {

	float radius;
	point center;

} circle;
*/

struct student {
	char name[40];
	int num;
	int age;
};

void editStudentData(struct student *stp)
{
	strcpy(stp->name, "valkir");
	stp->num = 10;
	stp->age = 26;
}; // end of edit student data

void printStudentData(struct student st)
{
	printf("\nstudent name: %s\n", st.name);
	printf("student number: %d\n", st.num);
	printf("student age: %d\n", st.age);
}; // end of print student data



int main() {
/*
	circle c = {3.14, {3, 4}};

	printf("\nCircle Radius: %.1f, Circle Center x: %d, Circle Center y: %d\n\n", c.radius, c.center.x, c.center.y);
*/

	struct student s1 = {"rob", 20, 16};
	editStudentData(&s1);
	printStudentData(s1);


	struct student students[3] = {{"john", 2, 3}, {"kyle", 4, 5}, {"jim", 6, 7}};

	for(int i =0; i < 3; i++){
	printf("\nname: %s, number: %d, age: %d\n", students[i].name, students[i].num, students[i].age);
	};




	return 0;
};
