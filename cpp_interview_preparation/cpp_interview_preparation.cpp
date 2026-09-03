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

//reverse a string to same variable //time complexity is 0(n) because as size increases number of swapping increases for 5 characters we did 2 swaps
//space complexity is 0(1) because we use only two variables 
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

//reverse an array   //time complexity is 0(n) space compplexity is 0(1)
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };

    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
}

//find the largest element in an array
//wrong this is not how you do this
int main()
{
    int arr[] = { 10, 25, 7, 42, 18 };
    int largest = 42;
    for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        if (arr[i] == largest)
        {
            cout << arr[i] << "largest element in an array";
        }
    }

}
//find the largest  element in an array

bool findlargest(int newarray[])
{
    int largest = newarray[0];
    for (int i = 0;i < sizeof(newarray) / sizeof(newarray[0]);i++)
    {
        if (newarray[i] > largest)
        {
           largest = newarray[i];
            cout << largest;
            return true;
        }


    }
}

int main()
{
    int arr[] = { 10, 25, 7, 42, 18 };
    findlargest(arr);
    return 0;

}

//find the largest  element in an array // 0(n)-time,space-0(1)
//what i understood from this is when you pass an array as parameter it doesnt take size properly so you need
//send size also very important
bool findlargest(int newarray[],int size )
{
    int largest = newarray[0];
    for (int i = 0;i < size;i++)
    {
        if (newarray[i] > largest)
        {
           largest = newarray[i];
        }


    }
    cout << largest;
    return true;
}

int main()
{
    int arr[] = { 10, 25, 7, 42, 18 };
    findlargest(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;

}
//or we can change bool to int and return largest and do int yadu = findlargest(arr, sizeof(arr) / sizeof(arr[0])); and cout<<yadu
*
//find the smallest element in an array
bool findsmallest(int newarray[], int size)
{
    int smallest = newarray[0];
    for (int i = 0;i < size;i++)
    {
        if (newarray[i] < smallest)
        {
            smallest = newarray[i];
        }


    }
    cout << smallest;
    return true;
}

int main()
{
     int arr[] = { 10, 25, 7, 42, 18 };
    findsmallest(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;

}

//count even numbers
int main()
{
    int count = 0;
    int arr[] = { 10, 25, 7, 42, 18, 31, 6 };
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count;
}

//sum of all elements //time 0(n) space 0(1)
int main()
{
    int sum = 0;
    int arr[] = { 10, 25, 7, 42, 18 };
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        sum += arr[i];
        
    }
    cout << sum;
}

//Find an Element time0(n) space 0(1)
int main() 
{
    int arr[] = { 10, 25, 7, 42, 18 };
    int target = 42;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found";
            break;
        }
        else 
        {
            cout << "Element not found";
        }
    }

}
*/