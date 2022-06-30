#include "hash_tables.h"

/**
* key_index - give he index of a key
* @key: the key
* @size: size of array
* Return: index for the key ,short value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
