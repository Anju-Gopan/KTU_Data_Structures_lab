#include <stdio.h>
void Create(int a[], int);
void Display(int a[], int);
void Delete(int a[], int, int);
void Insert(int a[], int, int, int);
int array[20], n, i, c, p, e, t;
void main()
{
	while (1)
	{
		printf("\n_________Menu__________ \n");
		printf("Create\n:\t1\tInsert\t:\n2\tDisplay\n:\t3\nDelete\n:\t4\tExit\n:\t5");
		printf("\n______________________\n");
		printf("\nEnter your Choice ->1 to 5:");
		scanf("%d", &c);
		if (c == 1)
		{
			printf("Enter the Number Of Elements:");
			scanf("%d", &n);
			Create(array, n);
		}
		else if (c == 2)
		{
			printf("Enter the Position to which the elements to be insert:");
			scanf("%d", &p);
			printf("Enter the Element Need to inserted:");
			scanf("%d", &e);
			Insert(array, p, e, n);
			n++;
		}
		else if (c == 3)
			Display(array, n);
		else if (c == 4)
		{
			printf("Enter the Position of element to be Deleted:");
			scanf("%d", &p);
			Delete(array, p, n);
			n--;
		}
		else if (c == 5)
			break;
		else
			printf("Invalid choice Try again");
	}
}
void Create(int a[], int n)
{
	for (i = 0; i < n; i++)
	{
		printf("Enter The Element %d:", i + 1);
		scanf("%d", &a[i]);
	}
}
void Insert(int a[], int p, int e, int n)
{
	p--;
	n--;
	for (i = n; i >= 0; i--)
	{
		a[i + 1] = a[i];
		if (p == i)
		{
			a[i] = e;
			break;
		}
	}
}

void Display(int a[], int n)
{
	printf("\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
}
void Delete(int a[], int p, int n)
{
	p--;
	for (i = p; i < n; i++)
		a[i] = a[i + 1];
}
