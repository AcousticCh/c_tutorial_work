#include <stdio.h>
#include <string.h>

int num = 26;
int *pNum = &num;

struct Character
{
	char name[50];
	int age;
};


void updateCharacterInfo(struct Character *pChar, char name[50], int age)
{
	strcpy(pChar->name, name);
	pChar->age = age;
};


int main(struct Character *p)
{


	int num2 = *pNum;
	char myName[50] = "Rob";

	struct Character myCharacter;

	updateCharacterInfo(&myCharacter, myName, num2);

	printf("%s, age %d", myCharacter.name, myCharacter.age);

}// end main
