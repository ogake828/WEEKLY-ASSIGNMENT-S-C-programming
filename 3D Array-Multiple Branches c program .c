#include <stdio.h>
int main(){
	int k, i, j;
	int occupied = 0, vacant = 0;
	
	int occupancy[3][5][10] = {
	{	
	    {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0},
	    {1,0,0,1,1,1,1,0,0,0},
	    {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0}
	},
	{
        {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0},
	    {1,0,0,1,1,1,1,0,0,0},
	    {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0}
	},
	{
		{1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0},
	    {1,0,0,1,1,1,1,0,0,0},
	    {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0}
	}
	
	};
	for(k=0; k<3; k++){
	   for(i=0; i<5; i++){
		   for(j=0; j<10; j++){
			printf("%d", occupancy[k][i][j]);
			
			if(occupancy[k][i][j] == 1)
				occupied++;
			else
				vacant++;
		}
	printf("\n");}
	printf("\n");
	}
	
	printf("\nOccupied Rooms: %d", occupied);
	printf("\nVacant rooms: %d", vacant);	
	printf("\nTotal rooms: %d", 3*5*10);
	
return 0;
}