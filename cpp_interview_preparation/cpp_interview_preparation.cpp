//reverse a string in same string 

#include <iostream>
#include<string>
using namespace std;
/*
string s = "hello";
//reverse length return size_T(unsigned integer type) not int so use static cast to convert it to int
void reverseString(string s)
{
    for (int i = static_cast<int>(s.length())-1;i >= 0;i--)
    {
        cout << s[i] <<"\n";
    }
}
int main()
{
    reverseString(s);
    cout << s;// this was giving output as hello even if i reversed . Wrong approach when they ask to reverse a string without creating another one
}
*/
//think of left and right
//again wrong
/*
int main()
{
    string s = "hello"; //h is left and o is right
    int left = s[0];
    int right = s.length() - 1;
    while (left >= right)
    {
        swap(left, right);
        left++;
        right--;
    }
    cout << s;

}
*/
//reverse a string to same variable //time complexity is 0(n) because as size increases number of swapping increases for 5 characters we did 2 swaps
int main()
{
    string s = "hello"; //h is left and o is right
    int left = 0;
    int right = s.length() - 1; // int right = static_cast<int>(s.length())-1;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    cout << s;

}