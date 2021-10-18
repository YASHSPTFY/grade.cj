#include<stdio.h>
main()
{
	int PHY,CHE,MAT,ENG,CS;
	float AVG,TOTAL;
	printf("Enter the marks of PHY\n");
	scanf("%d",&PHY);
	printf("Enter the marks of CHE\n");
	scanf("%d",&CHE);
	printf("Enter the marks of MAT\n");
	scanf("%d",&MAT);
	printf("Enter the marks of ENG\n");
	scanf("%d",&ENG);
	printf("Enter the marks of CS\n");
	scanf("%d",&CS);
	
	TOTAL= PHY+CHE+MAT+ENG+CS; 
	AVG=TOTAL/5;
	
	printf("Average marks=%f\n",AVG);
	
	/* Here 85 or 85+ means A GRADE.
	        70 or 70+ means B GRADE.
			55 or 55+ means C GRADE.
			40 or 44+ means D GRADE.
			00 or 00+ means F GRADE.*/
	if(AVG>=85 && AVG<=100)
	printf("YOUR GRADE IS:A");
	else if(AVG>=70 && AVG<85)
	printf("YOUR GRADE IS:B");
	else if(AVG>=55 && AVG<70)
	printf("YOUR GRADE IS:C");
	else if(AVG>=40 && AVG<55)
	printf("YOUR GRADE IS:D");
	else if(AVG>=0 && AVG<40)
	printf("YOUR GRADE IS:F");
	else
	printf("WRONG INPUT. Check entered marks.");
	
	return 0;
	
}
