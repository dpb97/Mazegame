#include <stdio.h>


int main(void) {
	int finished = 0;
	int can_move_forward = 0;// variable um zu erkennen ob die maus vorwaerts kann
	printf("move forward\n");//labyrinth betretten

	while (!finished) //solange ablaufen bis die maus im ziel ist
	{
		printf("turn right\n");
		//while (!can_move_forward) // solange die maus nicht vorwaerts kann nach links drehen
		
			int temp = 0;
			printf("Can the mouse move forward? y=1 n=0 Maze finished = 2\n");
			scanf_s("%d", &temp);
			if (temp >= 2)
			{
				finished = 1;
			}
			else
			{
				if (temp == 0)
				{
					
					
					can_move_forward = 0;
				}
				else
				{
					can_move_forward = 1;
				}
			}
			
			while (!can_move_forward){
				printf("turn left\n");
				
				printf("Can the mouse move forward? y=1 n=0 Maze finished = 2");
				scanf_s("%d", &temp);
				if (temp >= 2)
				{
					finished = 1;
				}
				else
				{
					if (temp == 0)
					{


						can_move_forward = 0;
					}
					else
					{
						can_move_forward = 1;
					}
				}
			}
			printf("move forward \n");
	}
	printf("mouse finished \n");

		
		
}
