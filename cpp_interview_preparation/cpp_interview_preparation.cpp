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



//Count occurrences // time 0(n) and space 0(1)
int main()
{
    int arr[] = { 10, 25, 42, 7, 42, 18, 42, 25 };
    int target = 42;
    int count = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    cout << "42 appears" << count << "times";

}


//Find the second largest element time 0(n) space 0(1)
int main()
{
    int arr[] = { 10, 25, 7, 42, 18 };
    int largest = arr[0];
    int secondlargest = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
            
        }

    }
    cout << secondlargest;
}

//this is kinda correct but there is issue with what if first array index is 42 then secondlargest will always be 0 or what if there are negative numbers ?
//correct version below
int main()
{
    int arr[] = { 10, 25, 7, 42, 18 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondlargest = arr[1];

    if (secondlargest > largest)
    {
        swap(largest, secondlargest);
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }

    cout << "Second largest: " << secondlargest;
}



//above is correct but if you want to handle duplicates also below code is best for finding second largest with distinct 


int main()
{
    int arr[] = { 42, 25, 42, 18, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondlargest = arr[1];
    if (secondlargest > largest)
    {
        swap(largest, secondlargest);
    }

    for (int i = 2; i < size; i++)
    { 
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i]<largest) //to eliminate duplicates
        {
            secondlargest = arr[i];
        }
    }
    cout << secondlargest;

}



//Reverse an array of strings
int main()
{
    string arr[] = { "apple", "banana", "cherry", "orange" };
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    for (int i = size; i >= 0; i--)
    {
        cout << arr[i]<<" ";
    }
}
//this does not reverse the array it just prints array in reverse question is reverse the array in place



//reverse and array in place time 0(n) space 0(1)
int main()
{
    string arr[] = { "apple", "banana", "cherry", "orange" };
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        cout << arr[i]<< " ";
    }
}




//Check if a string is a palindrome
int main()
{

    string s = "madam";
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    if (s == "madam")
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}
//wrong completely because i am checking whether the reversed version is paalindrome not string   



int main()//wrong
{
    string s = "madam";
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
            cout << "palindrome";
        }
        else
        {
            cout << "not palindrome";
        }
    }
 
}////wrong

int main()
{
    string s = "madam";

    int left = 0;
    int right = s.length() - 1;

    bool palindrome = true;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}

//check if two strings are anagrams
int main()//wrong
{
    string s1 = "listen";
    string s2 = "silent";
    for (int i = 0;i < s1.length() - 1;i++)
    {
        if(s1[i]==s2[i])

    }
}


#include <algorithm> //time - O(n log n).space - O(log n) typically, because the implementation uses stack space for recursion.
int main()
{
    string s1 = "listen";
    string s2 = "silent";

    sort(s1.begin(), s1.end()); //begin points to first character end points after last character
    sort(s2.begin(), s2.end());

    if (s1 == s2)
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not Anagram";
    }
}


//without sort  length = number of elements
//last index = length - 1
//we are using used because string s1 = "aab";
//string s2 = "abb"; and index 0 of s1 and s2 matches and when try to match index 1 of s1 with s2 without used it will show as matched to avoid this
int main()
{
    //we can use bool as arrays kinda
  

    string s1 = "yadu";
    string s2 = "uday";
    if (s1.length() != s2.length())
    {
        cout << "Not anagram";
        return 0;
    }
    bool anagram = false;
    bool used[100] = { false };//means used[0] = false, used[1] = false kinda
    for (int i = 0;i < s1.length();i++)
    {
        bool found = false;
        for (int j = 0;j < s2.length();j++)
        {
            if (s1[i] == s2[j] && used[j]==false)
            {
                used[j] = true;
                found = true;
                anagram = true;

            }
        }
        if (found != true)
        {
            anagram = false;
            break;
        }
    }
    if (anagram)
    {
        cout << "anagram";
    }
    else
    {
        cout << "not anagram";
    }

}

//find the missing number
int main()
{
    int arr[] = { 1, 2, 3, 5, 6 };
    int missing = 4;
    bool notfound = false;
    for (int i = 0;i < size(arr);i++)
    {
        if (arr[i]== missing)
        {
            notfound = true;
        }
    }
    if (notfound)
    {
        cout << "missing number is 4";
    }
    else
    {
        cout << "no missing numbers";
    }
}//wrong

////////////////
///////////////
In an interview

They might give :

int n = 6;
int arr[] = { 1, 2, 3, 5, 6 };

Then there's no ambiguity.

Or they might say :

"The array has n-1 elements and contains numbers from 1 to n."

That's how you know n.




//Find missing numbers
//when they ask you to find some number you would have known what to search but here you dont know what to search 
//only they will give range and you will have to find missing number so better approach is to whatever the range they ask
//wrie a loop for the outer loop to print
int main()
{
    int arr[] = { 1, 2, 3, 5, 6 };
    int n = 6;
    for (int i = 1;i< 6;i++)
    {
        bool found = false;
        for (int j = 0;j <size(arr);j++)
        {
            if (arr[j] ==i)
            {
                found = true;
                break;
            }

        }
        if (!found)
        {
            cout << "missing number is " << i;
            break;
        }
    }
}



//Move all zeros to the end    // time 0(n) space 0(1)
int main()
{
    int arr[] = { 0, 1, 0, 3, 12 };
    int position = 0;
    for (int i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(arr[i] !=0)
        {
            arr[position] = arr[i];
            position++;
           
        }
    }
    //fill the zeroes to end
    for (int i = position; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        arr[i] = 0;
    }

    for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        cout << arr[i] << " ";
    }



}


//Check whether two strings are equal without using ==  
//Anagram → search anywhere → nested loop.

//Equal strings → compare same position → one loop.
// whats happening in this h is compare with all the index postions which is wrong for equal comparison same indexes should be compared


//wrongggggggggg
int main()
{
    string s1 = "hello";
    string s2 = "heldo";
    bool equal = true;
    for (int i = 0;i < s1.length();i++)
    {
        
        for (int j = 0;j < s2.length();j++)
        {
            if (s2[j] != s1[i])
            {
                equal = false;
            }

      
        }
        if (!equal)
        {
            equal = true;
            break;
        }
    }
    if (equal)
    {
        cout << "strings are equal";

    }
    else
    {
        cout << "strings not equal";
    }
}

//correct one
int main()
{
    string s1 = "hello";
    string s2 = "heldo";

    bool equal = true;

    if (s1.length() != s2.length())
    {
        equal = false;
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                equal = false;
                break;
            }
        }
    }

    if (equal)
    {
        cout << "Strings are equal";
    }
    else
    {
        cout << "Strings are not equal";
    }
}

//Find duplicate elements
int main()
{
    int arr[] = { 10, 25, 7, 42, 25, 18, 42 };
    int size = sizeof(arr) / sizeof(arr[0]);
   
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)// j=i+1 helps stop comparing with same element in array
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i]<<" ";
                break;
            }
        }
    }
}





//find the largest difference between two elements 15-3 =12


//wrong because i am finding largest and smallest that is not the job job is to find largest difference between two elements
int main()
{
    int arr[] = { 10, 3, 8, 15, 6 };
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 0;i < size(arr);i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else  if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    int result = largest - smallest;
    cout << result;
}


//think like this What is the cheapest / smallest value I have seen BEFORE reaching this element ?
//difference = current value - smallest value before it;
int main()
{
int arr[] = {10, 3, 8, 15, 6};
int size = sizeof(arr) / sizeof(arr[0]);
int smallest = arr[0];
int maxDifference = 0;

for (int i = 1; i < size; i++)
{
    int difference = arr[i] - smallest;

    if (difference > maxDifference)
    {
        maxDifference = difference;
    }

    if (arr[i] < smallest)
    {
        smallest = arr[i];
    }
}
cout << "Maximum difference: " << maxDifference;

}
*/




//check if an array is sorted