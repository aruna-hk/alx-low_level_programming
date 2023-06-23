#include <stdio.h>
int check_multiples(int x)
{
	int i; 

	for (i = 0; i <= x; i++)
	{
		if (x % i==0)
		{
			int j;

		       for(j =2; j < i/2; j++)
		        {
        			 if (i % j != 0)
        		      	 {
 	               		  	int largest = i;
					int rem = x % largest;
					if (largest == rem)
						printf("%d",rem);
					else
						check_multiples(rem);

                		        break;
              			 }
       			       	 else
                	        	break;
			}

		}
		else
			continue;
	}
}



		

			
int main()
{
	int n = 1231952;
	check_multiples(n);
	return 0;
}
