#include <stdio.h>
int main(){
	int i,j;
	int occupied = 0, vacant = 0;
	
	int occupancy[5][10] = {	
	   {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0},
	    {1,0,0,1,1,1,1,0,0,0},
	    {1,0,0,0,0,1,1,1,1,0},
	    {0,0,0,1,1,1,0,1,0,0}
	};
		   for(i=0;i<5;i++){
		   for(j=0;j<10; j++){
			printf("%d", occupancy[i][j]);
			
			if(occupancy[i][j] == 1)
				occupied++;
			else
				vacant++;
		
	   }
	printf("\n");
}	
	printf("\nOccupied Rooms: %d", occupied);
	printf("\nVacant rooms: %d", vacant);	
	
return 0;
}