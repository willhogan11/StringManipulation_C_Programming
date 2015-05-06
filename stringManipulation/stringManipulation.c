#include <stdio.h>
#include <stdlib.h>
#include <String.h>

#define MAX 50

void strchrFunc();
void strcpyFunc();
void strlenFunction();
void strcmpFunc();
void strnCatFunc();
void strstrFunc();


int main() 
{
	/* Uncomment these Function Calls As required */
	
	// strchrFunc();
	// strcpyFunc();
	// strlenFunction();
	strcmpFunc();
	// strnCatFunc();
	// strstrFunc();
}



// The strrchr function searches string for the last occurrence of c. 
// The null character terminating string is included in the search.
void strchrFunc()
{
  char *s;
  char buf [] = "This is a testing";

  s = strchr (buf, 't');

  if (s != NULL)
  {
    printf ("found a 't' at %s\n", s);
  }
  puts("\n\n\n");
  system("Pause");
}


// The C library function char *strcpy(char *dest, const char *src) copies the string pointed to, by src to dest.
void strcpyFunc()
{
	char src[40];
	char dest[100];
  
	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	strcpy(dest, src);

	printf("Original string : %s\n", src);
	printf("Final copied string : %s\n", dest);
	puts("\n\n\n");
	system("Pause");
}


// Manual String length Function
void strlenFunction()
{
	int i = 0;
	char name[20];

	puts("Enter a String");
	gets(name);

	while( name[i] != '\0')
	{
		i++;
	}
	printf("String is %d characters long", i);
	
	puts("\n\n\n");
	system("Pause");
}


void strcmpFunc()
{
	char str1[MAX + 1];
	char str2[MAX + 1];
	int ret;

	puts("Enter 1st String");
	gets(str1);
	puts("\n");

	puts("Enter 2nd String");
	gets(str2);
	puts("\n");

	ret = strcmp(str1, str2);

	if(ret > 0)
	{
		puts("String 1 is greater than String 2");
	}
	else if(ret < 0)
	{
		puts("String 2 is greater than String 1");
	}
	else
	{
		puts("Both Strings are equal");
	}

	puts("\n\n\n");
	system("Pause");
}


//The C library function char *strncat(char *dest, const char *src, size_t n) 
//appends the string pointed to by src to the end of the string pointed to by dest up to n characters long.
void strnCatFunc()
{
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");
   strncat(dest, src, 15);

   printf("Final destination string : |%s|", dest);
   
   puts("\n\n\n");
   system("Pause");
}




void strstrFunc()
{
	char needle[MAX + 1];
	char haystack[MAX + 1];
	char *ret;

	puts("Enter Value for Haystack");
	gets(haystack);
	puts("\n");

	puts("Enter Value for Needle");
	gets(needle);
	puts("\n");

	ret = strstr(haystack, needle);

	printf("\nThe Substring is: %s", ret);

	puts("\n\n\n");
	system("Pause");
}
