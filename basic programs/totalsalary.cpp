#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	unsigned int basic,allow;
    float totalSalary,hra,da,pf;
    char grade;
    cin>> basic;
    hra = (20.0/100)*basic;
    da = (50.0/100)*basic;
    pf = (11.0/100)*basic;
    
    cin >> grade;
    if(grade == 'A')
    {
        allow = 1700;
    }
    else if(grade == 'B')
    {
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    
    totalSalary = basic + hra + da + allow - pf;
    totalSalary = round(totalSalary);
    cout<< totalSalary;
    
    return 0;
}
