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

/**
 * dog_t - typedef for dog struct
 */

typedef struct dog dog_t;

#endif
