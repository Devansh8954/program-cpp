/*
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
*/

#include <iostream>
using namespace std;

void pairStar(char input[]) {
    int size = 0, i;
    while (input[size] != '\0')
        size++;
    if (input[0] == '\0' || size == 0)
        return;
    if (input[0] == input[1]) {
        input[size+1] = '\0';
        for (int i = size-1; i >= 1; i--) {
            input[i+1] = input[i];
        }
        input[1] = '*';
        pairStar(input+1);
    } else {
        pairStar(input+1);
    }
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
