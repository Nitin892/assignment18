
// 1. Write a function to calculate length of the string
int length(char nums[])
{
    int i = 0;
    for (i; nums[i]; i++)
        ;
    return i;
}

#include <stdio.h>
int main()
{
    char name[] = "fvr";
    printf("%d", length(name));
    return 0;
}

// 2. Write a function to reverse a string.

void reverse(char nums[])
{
    int j = 0;
    for (j; nums[j]; j++)
        ;

    int i;
    j--;
    for (i = 0; i < j; i++, j--)
    {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}

#include <stdio.h>
int main()
{
    char name[] = "kasif";
    reverse(name);
    printf("%s", name);
    return 0;
}

// 3. Write a function to compare two strings.

int compare(char arr1[], int x, char arr2[], int y)
{
    int t = x > y ? x : y;

    for (int i = 0; i < t; i++)
    {
        if (!(arr1[i] == arr2[i]))
        {
            return 0;
        }
    }
    return 1;
}

#include <stdio.h>
int main()
{
    char name[] = "kasifi";
    char surname[] = "kasifi";
    int x = 5, y = 6;
    if (compare(name, x, surname, y))
        printf("It is same");
    else
        printf("It is not same");
    return 0;
}

// 4. Write a function to transform string into uppercase
void upper(char arr1[])
{
    for (int i = 0; i < arr1[i]; i++)
    {
        if (arr1[i] >= 97 && arr1[i] <= 122)
        {
            arr1[i] = arr1[i] - 32;
        }
    }
}
#include<stdio.h>
int main()
{
    char name[] = "kasifi";
    upper(name);
    printf("%s", name);

    return 0;
}

// 5. Write a function to transform a string into lowercase.

void lower(char arr1[])
{
    for (int i = 0; i < arr1[i]; i++)
    {
        if (arr1[i] >= 'A' && arr1[i] <= 'Z')
        {
            arr1[i] = arr1[i] + 32;
        }
    }
}
#include<stdio.h>
int main()
{
    char name[] = "NITINi";
    lower(name);
    printf("%s", name);

    return 0;
}

// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)
int isalphanumeric(char arr1[])
{
    int alphabate = 0;
    int digit = 0;

    for (int i = 0; i < arr1[i]; i++)
    {
        if ((arr1[i] >= 'A' && arr1[i] <= 'Z') || (arr1[i] >= 'a' && arr1[i] <= 'z'))
        {
            alphabate++;
        }
        else if (arr1[i] >= 48 && arr1[i] <= 57)
            digit++;
    }
    if (alphabate >= 1 && digit >= 1)
    {
        return 1;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char name[] = "5n";
    if (isalphanumeric(name))
        printf("It is alphanumeric");
    else
        printf("It is not alphanumeric");

    return 0;
}

// 7. Write a function to check whether a given string is palindrome or not.

int palindrome(char arr[])
{
    int j = 0;
    for (j; arr[j]; j++)
        ;
    int i;
    j--;
    for (i = 0,j; i < j; i++, j--)
    {
        if (!(arr[i] == arr[j]))
        {
            return 0;
        }
    }
    return 1;
}
#include <stdio.h>
int main()
{
    char name[] = "level";
    int k = palindrome(name);
    if (k)
        printf("It is palindrome");
    else
        printf("It is not palindrome");
    return 0;
}

// 8. Write a function to count words in a given string.

int words(char arr[])
{
    int count = 1;
    int k;
    for (k = 0; arr[k]; k++)
        ;
    k--;

    int i = 0;
    for (i; arr[i]; i++)
    {
        if (arr[i] != ' ')
            break;
    }
    int j = k;
    for (j; arr[j]; j--)
    {
        if (!(arr[j] == ' '))
            break;
    }

    for (i; i < j; i++)
    {

        if (arr[i] == ' ' && arr[i - 1] != ' ')
        {
            count++;
        }
    }
    return count;
}
#include <stdio.h>
int main()
{
    char name[] = "My jn vn nje h";
    printf("%d", words(name));
    return 0;
}

// 9. Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” )

void reverseWord(char arr[1][3], int n)
{

}

int main()
{
   char name[1][3] = "Mysirg Education Services";
   reverseWord(name, 25);
   return 0;
}

// 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
void repeated(char arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        char result = 0;
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                result = arr[j];
                count++;
            }
        }
        if (result && count <= 1)
            printf("%c ", result);
        else
            printf("");
    }
}

int main()
{
    char name[] = "mymbiitttnn";
    repeated(name, 11);
    return 0;
}
