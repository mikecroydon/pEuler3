// This program solves Project Euler problem 3: Largest Prime Factor
//

#include "pch.h"
#include <iostream>

using namespace std;

//This function checks if a number is prime
bool primeCheck(int n)
{
	for (int i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

//This function simply checks every number starting at p to see if it's prime. It will return the next higher prime number
int nextHighestPrime(int p)
{
	p++;
	while (!(primeCheck(p)))
	{
		p++;
	}
	return p;
}

int main()
{
	unsigned long int num = 600851475143;
	int largestPrime = 0;
	int pFactor = 2;

	while ((num > pFactor))
	{
		//if pFactor is a prime factor of num this will return true, and it will be the new largest prime factor
		if ((num%pFactor) == 0)
		{
			largestPrime = pFactor;
			num = num / pFactor;
		}
		else
		{
			pFactor = nextHighestPrime(pFactor);
		}

	}
	



}

