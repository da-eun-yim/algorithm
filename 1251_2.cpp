/*
 * =====================================================================================
 *
 *       Filename:  1251_2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/14/2017 17:44:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string orinString;
	string words;
	int i, j, k, cnt = 0;
	int temp1, temp2, temp3;
	string minimum = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";

	cin >> orinString;
	int stringSize = orinString.size();

	for (i = 0; i < stringSize - 2; i++) {
		for (j = i + 1; j < stringSize - 1; j++) {			
			//for (k = stringSize - 1; k >= j; k--) {
				
				temp1 = i;
				for (; temp1 >= 0; temp1--) words += orinString[temp1];

				temp2 = j;
				while (temp2 > i)
					words += orinString[temp2--];
				
				temp3 = stringSize-1;
				while (temp3 > j)
					words += orinString[temp3--];

				if (words.compare(minimum)<0)
					minimum = words;
				
				cout<< i << j << words <<endl;
				words = "";
		//		}
			}
			
		
	}
	cout << minimum << endl;

	return 0;
}
