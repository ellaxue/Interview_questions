/*
 * add_nums_to_target.cpp
 *
 *  Created on: Aug 27, 2016
 *      Author: ellaxue
 */

/* Find a pair of numbers in the array that add up to a target value
 * return the vector of indexs of that pair (i, j)
 */

#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;

class solution
{
public:
	std::vector<int>addToTarget(std::vector<int> &numbers, int target)
	{
		std::unordered_map<int, int> hashTable;
		std::vector<int> result;
		for(int i = 0; i < numbers.size(); i++)
		{
			if(hashTable.count(target - numbers[i]))
			{
				result.push_back(hashTable[target - numbers[i]]);
				result.push_back(i);
				return result;
			}
			hashTable[numbers[i]] = i;
		}
		return result;
	}
};

int main(void)
{
	int myints1[] = {1,2,7,5,11};
	std::vector<int> num1 (myints1, myints1 + sizeof(myints1) / sizeof(int));
	solution *s = new solution();
	num1 = s->addToTarget(num1, 16);

	printf("Final solution: " );
	for (std::vector<int>::iterator it = num1.begin(); it != num1.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
		std::cout << '\n';

	return 0;
}
