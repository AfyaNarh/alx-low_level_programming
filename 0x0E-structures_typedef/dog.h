#ifndef DOG_H
#define DOG_H

int _putchar (char c);
/**
 * struct dog - dog's basic data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: dog with name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


