#include "main.h"

/**
 * _strpbrk - entry point
 * @s: active variable
 * @accept: second active variable
 *
 * Description: write a function that gets the length of a prefix substring.
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
int p, q;

for (p = 0; s[p]; p++)
{
        for (q = 0; accept[q]; q++)
        {
                if (s[p] == accept[q])
                {
