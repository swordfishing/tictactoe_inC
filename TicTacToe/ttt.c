#include <stdio.h>
//Packages


//Declaration of square array
char arr[] = {'1','2','3','4','5','6','7','8','9'};

//Declaration of Game Board Setup
void board(){
	printf("\n");
	printf("%c|%c|%c\n",arr[0],arr[1],arr[2]);
	printf("-----\n");
	printf("%c|%c|%c\n",arr[3],arr[4],arr[5]);
	printf("-----\n");
	printf("%c|%c|%c\n",arr[6],arr[7],arr[8]);
	printf("\n");
}

//Main Function

int main(){
	int p1,p2;
	while(1>0){
		board();
		//Player 1 and Player 2 I/O
		printf("Player 1, enter your choice:");
		scanf("%d",&p1);
		arr[p1-1] = 'X';
		board();

		//Out of Moves Checker
		
		if(arr[0] != '1' && arr[1] != '2' && arr[2] != '3' && arr[3] != '4' && arr[4] != '5' && arr[5] != '6' && arr[6] != '7' && arr[7] != '8' && arr[8] != '9'){
			printf("Out of Moves! Tie!\n");
			break;
		}
	
		printf("Player 2, enter your choice:");
		scanf("%d",&p2);
		arr[p2-1] = 'O';
		//Win Checker

		if(arr[0]=='X'&&arr[1]=='X'&&arr[2]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[3]=='X'&&arr[4]=='X'&&arr[5]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[6]=='X'&&arr[7]=='X'&&arr[8]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[0]=='X'&&arr[3]=='X'&&arr[6]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[0]=='X'&&arr[4]=='X'&&arr[8]=='X'){
			printf("Player 1 won.\n");
			break;
		}
		if(arr[2]=='X'&&arr[4]=='X'&&arr[6]=='X'){
			printf("Player 1 won.\n");
			break;
		}

		if(arr[0]=='O'&&arr[1]=='O'&&arr[2]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[3]=='O'&&arr[4]=='O'&&arr[5]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[6]=='O'&&arr[7]=='O'&&arr[8]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[0]=='O'&&arr[3]=='O'&&arr[6]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[0]=='O'&&arr[4]=='O'&&arr[8]=='O'){
			printf("Player 2 won.\n");
			break;
		}
		if(arr[2]=='O'&&arr[4]=='O'&&arr[6]=='O'){
			printf("Player 2 won.\n");
			break;
		}

		//Else statement + Out of Moves Checker

		else{
			if(arr[0] != '1' && arr[1] != '2' && arr[2] != '3' && arr[3] != '4' && arr[4] != '5' && arr[5] != '6' && arr[6] != '7' && arr[7] != '8' && arr[8] != '9'){
				printf("Out of Moves! Tie!\n");
				break;
			}
			else{
				continue;
			}
		}

	}
	return 0;
}
//END OF PROGRAM
