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
};

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to struct dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Description: This function initializes the members of a struct dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* print_dog - Prints the information about a dog
* @d: Pointer to a struct dog
*
* Description: This function prints the information about a dog
* including its name, age, and owner. If any element of the dog
* struct is NULL, it prints "(nil)" instead.
*/

void print_dog(struct dog *d);

#endif

