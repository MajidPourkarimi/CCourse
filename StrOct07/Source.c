#define _CRT_SECURE_NO_WARNINGS

#include "nutility.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define				SIZE		100

														//int strcmp(const char* p1, const char* p2)
/*int main()
{
		char s1[SIZE];
		char s2[SIZE];

		printf("Enter two names: ");
		scanf("(%s%s)", s1, s2);
		if (!strcmp(s1, s2))		//if (strcmp(s1, s2) == 0)
		{
			printf("Those are equal");
		}
		else
		{
			printf("not equalence");
		}
}*/

/*int ends_with(const char* p1, const char* p2)
{
	size_t len1 = strlen(p1);
	size_t len2 = strlen(p2);
	if (len1 < len2)
	{
		return 0;
	}
	return !strcmp(p1 + len1 - len2, p2);
}
int main()
{
	char s1[SIZE];
	char s2[SIZE];
	printf("Enter any text: ");
	sgets(s1);
	printf("Enter any text: ");
	sgets(s2);
	// s1 finishs with s2
	
	if (ends_with(s1, s2))
	{
		printf("Yes, s2 exists in the end of s1");
	}
	else
	{
		printf("No, s1 doesn't finish with s2");
	}
}*/

	
										//char* strpbrk(const char* p1, const char* p2)

//char* mystrpbrk(const char* str, const char* pchars)
//{
	//for (int i = 0; str[i] != '\0'; i++)
	//{
	//	if (strchr(pchars, str[i]))
	//	{
	//		return (char*)(str + i);
	//	}
	//}
	//return NULL;
//}

/*int main()
{
	char str[SIZE];
	char letters[SIZE];
	printf("enter any text: ");
	sgets(str);
	printf("what is looking for: ");
	sgets(letters);
	printf("The program are looking for (%s) through (%s)\n", letters, str);
	char* p = strpbrk(str, letters);
	//char* p = mystrpbrk(str, letters);
	if (p)
	{
		printf("the letter found (%c), indis:%d\n", *p, p - str);
	}
	else
	{
		printf("not found\n");
	}
}*/

												// String Literals (Static lifespan)
/*char* get_day_name(int weekday)
{
	switch (weekday)
	{
	case 1 : return "Pazartesi";
	case 2 : return "Sali";
	case 3 : return "Carsamba";
	case 4 : return "Persembe";
	case 5 : return "Cuma";
	case 6 : return "Cumartesi";
	case 7 : return "pazar";
	}
	return ("Invalid");
}
int main()
{
	int wd;
	printf("enter a digit between 1 and 7 included: ");
	scanf("%d", &wd);
	printf("The entered digit %d indicates the %s day\n", wd, get_day_name(wd));
}*/

/*int main()		// unspecifiend behavier
{
	char* psw = "bukalemun";
	if (psw == "bukalemun")
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	char* p1 = "majid";
	char* p2 = "majid";
	if (p1==p2)
	{
		printf("true p1=p2");
	}
	else
	{
		printf("false p1!=p2");
	}
}*/

int main()
{
	char old_file_name[100];
	char new_file_name[100];

	printf("Enter the file name: ");
	scanf("%s", old_file_name);
	strcpy(new_file_name, old_file_name);




	char* p = strrchr(new_file_name, '.'); //new_file_name'de son '.' karakterini bulmak icin
	if (!p) // eger hic '.' karakteri bulunamaz ise, Dosyanin uzantisi yok ise, dosyanin uzantisi .dot olacak
	{
		strcat(new_file_name, ".dot");
	}
	else if (!strcmp(p, ".xls")) //Dosyanin uzantisi xls ise, dosyanin uzantisi .txt olacak
	{
		strcpy(p, ".txt");
	}
	else if (!strcmp(p, ".doc")) //Dosyanin uzantisi .doc ise, dosyanin uzantisi kalkacak
	{
		*p= '\0';
	}
	else 						//Diger durumlarda dosyanin uzantisi .pdf olarak degisekek
	{
		strcpy(p, ".pdf");
	}

	printf("(%s)=====>(%s)\n", old_file_name, new_file_name);

	printf("\x42URS\x41\xA"); //karakter sabitlerine ornek
	printf("\102\101\102\101"); //karakter sabitlerine ornek
	printf("\n\n\tmurat\t\thasan\nayse\tselim\n"); //karakter sabitlerine ornek
	printf("\\yavuz\\\n"); //karakter sabitlerine ornek
	printf("\"ozkaya\"\n"); //karakter sabitlerine ornek
	printf("%dYavuz\n", 4);
	printf("%3dYavuz\n", 4);
	printf("%-3dYavuz\n", 4);



}