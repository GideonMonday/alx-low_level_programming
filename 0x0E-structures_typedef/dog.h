#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure representing a dog
* @name: Pointer to a character string for the dog's name
* @age: Age of the dog as a floating point number
* @owner: Pointer to a character string for the owner's name
*
* Description: This structure represents a dog and contains
* information about its name, age, and owner.
*/

struct dog
{
	    char *name;
	float age;
	    char *owner;
}
;

#endif
