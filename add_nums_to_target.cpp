/*
 * add_nums_to_target.cpp
 *
 *  Created on: Aug 27, 2016
 *      Author: ellaxue
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

//		for( auto it = numbers.begin(); it != numbers.end(); it++)
//		{
//			if(hashTable.count(target - *it))
//			{
//				result[0]= hashTable[target - *it];
//				result[1] = (int)(it - numbers.begin());
//				cout<<"it" <<(int)(numbers.begin())<<endl;
//				return result;
//			}
//			hashTable[*it] = (int)(it - numbers.begin());
//		}

		for(int i = 0; i < numbers.size(); i++)
		{printf("if current number  = %d \n", numbers[i]);

			if(hashTable.count(target - numbers[i]))
			{
				printf("target   = %d \n", (target - numbers[i]));
				result.push_back(hashTable[target - numbers[i]]);

				result.push_back(i);
								for (std::vector<int>::iterator it = result.begin(); it != result.end(); ++it)
							    std::cout << ' ' << *it;
							  std::cout << '\n';
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
			    std::cout << ' ' << *it;
			  std::cout << '\n';

	return 0;
}
