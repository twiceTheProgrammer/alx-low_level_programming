#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs basic description
 * @name: name pointer
 * @age: param
 * @owner: param
 *
 * Description: No long description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - struct type of dog
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
#endif
