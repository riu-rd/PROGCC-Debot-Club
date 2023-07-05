/*  Programmed by:    Darius Vincent Ardales   Y14
    Description:      This is a game that pits the player against bots in a game of debate.
    Last modified:    September 20, 2020
    Acknowledgements: CCPROG1 Modules, Stack Overflow, futureofworking.com, blog.prepscholar.com
*/

#include <stdio.h>

static int title, opening, response, stagePrint, botPoint1, botPoint2, botPoint3, botTotal; //the global variables that will be used in the program.

/*   prints if the game is in the first, second or third debate.
     @param  (void)  there are no parameters.
     @return (void)  prints something based on the value of stagePrint.
*/
void printStage()
{
	if (stagePrint <= 1)
	{
		printf("The First Debate");
		stagePrint++;
	}
	else if (stagePrint <= 4)
	{
		printf("The Second Debate");
		stagePrint++;
	}
	else
	{
		printf("The Third Debate");
		stagePrint++;
	}

}
/*   prints the introduction of the debate based on if it is in the first, second or third debate.
     @param  (void)  there are no parameters.
     @return (void)  The current stage and the topic of the debate.
*/
void Title()
{
	if (title == 0)
	{
		printf("\n	- The First Debate -\n");
		printf("Topic			: Homework should be banned\n");
		printf("Affirmative Team	: Team ProgCC\n");
		printf("Opposing Team		: Team Bot Annie Cal\n");
		title++;
	}
	else if (title == 1)
	{
		printf("\n	- The Second Debate -\n");
		printf("Topic			: Violent video games should be banned\n");
		printf("Affirmative Team	: Team ProgCC\n");
		printf("Opposing Team		: Team Bot Annie Cal\n");
		title++;
	}
	else
	{
		printf("\n	- The Third Debate -\n");
		printf("Topic			: The death penalty should be abolished\n");
		printf("Affirmative Team	: Team ProgCC\n");
		printf("Opposing Team		: Team Bot Annie Cal\n");
		title++;
	}
}
/*   shows the choices that the user will use for each debate stage. This will be called 3 times in the debate program for the 3 rounds.
     @param  (void)  there are no parameters.
     @return (void)  The list of statements that the user will use.
*/
void openingStatement() 
{
	if (opening <= 2)
	{
		printf("\nOpening Statement(Input either 1, 2, 3 or 4):");
		printf("\n[1] Homework is necessary because it reinforces what students learn in the classroom.");
		printf("\n[2] Years of data show that homework is an effective way of supplementing discussions.");
		printf("\n[3] I don't know about you, but our forefathers would be mad if we ban homeworks.");
		printf("\n[4] Homeworks are like the peanut to a peanut butter jelly sandwich!\n");
		printf("\nYour choice: ");
		opening++;
	}
	else if (opening < 6 && opening >= 3 )
	{
		printf("\nOpening Statement(Input either 1, 2, 3 or 4):");
		printf("\n[1] Violent video games help an individual become more aware of their environment.");
		printf("\n[2] Recent research says that the level of violence in society is going down while violent video game title numbers rise.");
		printf("\n[3] I don't know about you, but there are no links between gamers who play violent games and real-life conduct.");
		printf("\n[4] Violent video games are very fun and you can make some serious money playing them!\n");
		printf("\nYour choice: ");
		opening++;
	}
	else
	{
		printf("\nOpening Statement(Input either 1, 2, 3 or 4):");
		printf("\n[1] Death penalty does not need to be carried out with brutality.It is focused on ending life as quickly and as peacefully as possible.");
		printf("\n[2] Data shows that the death penalty can provide a deterrent against violent crime.");
		printf("\n[3] If you were accused, you do not have to worry about your family since there is rightful sympathy or empathy directed toward the family of the one accused of a capital crime.");
		printf("\n[4] Death penalty is like The Punisher from Marvel killing the criminals. Criminals just get what they deserve!\n");
		printf("\nYour choice: ");
		opening++;
	}
}
/*   This shows up if the user chooses the first statement or [1] whether it is in the first, second or third debate.
     @param  (void)  there are no parameters.
     @return (void)  Statement 1 based on if it is in the first, second or third debate.
*/
void statement1() 
{
	if(title == 1)
	{
		printf("\nTeam ProgCC: Homework is necessary because it reinforces what students learn in the classroom.\n");
	}
	else if(title == 2)
	{
		printf("\nTeam ProgCC: Violent video games help an individual become more aware of their environment.\n");	
	}
	else
	{
		printf("\nTeam ProgCC: Death penalty does not need to be carried out with brutality.It is focused on ending life as quickly and as peacefully as possible.\n");
	}
	
}
/*   This shows up if the user chooses the second statement or [2] whether it is in the first, second or third debate.
     @param  (void)  there are no parameters.
     @return (void)  Statement 2 based on if it is in the first, second or third debate.
*/
void statement2()
{
	if(title == 1)
	{
		printf("\nTeam ProgCC: Years of data show that homework is an effective way of supplementing discussions.\n");	
	}
	else if(title == 2)
	{
		printf("\nTeam ProgCC: Recent research says that the level of violence in society is going down while violent video game title numbers rise.\n");
	}
	else
	{
		printf("\nTeam ProgCC: Data shows that the death penalty can provide a deterrent against violent crime.\n");
	}
}
/*   This shows up if the user chooses the third statement or [3] whether it is in the first, second or third debate.
     @param  (void)  there are no parameters.
     @return (void)  Statement 3 based on if it is in the first, second or third debate.
*/
void statement3() 
{
	if(title == 1)
	{
		printf("\nTeam ProgCC: I don't know about you, but our forefathers would be mad if we ban homeworks.\n");
	}
	else if(title == 2)
	{
		printf("\nTeam ProgCC: I don't know about you, but there are no links between gamers who play violent games and real-life conduct.\n");
	}
	else
	{
		printf("\nTeam ProgCC: If you were accused, you do not have to worry about your family since there is rightful sympathy or empathy directed toward the family of the one accused of a capital crime.\n");
	}
}
/*   This shows up if the user chooses the fourth statement or [4] whether it is in the first, second or third debate.
     @param  (void)  there are no parameters.
     @return (void)  Statement 4 based on if it is in the first, second or third debate.
*/
void statement4() 
{
	if(title == 1)
	{
		printf("\nTeam ProgCC: Homeworks are like the peanut to a peanut butter jelly sandwich!\n");
	}
	else if(title == 2)
	{
		printf("\nTeam ProgCC: Violent video games are very fun and you can make some serious money playing them!\n");
	}
	else
	{
		printf("\nTeam ProgCC: Death penalty is like The Punisher from Marvel killing the criminals. Criminals just get what they deserve!\n");
	}
}
/*   This function is in charge of the responses of the Bot for all of the stages of the game.
     @param  (void)  there are no parameters.
     @return (void)  The response of the bot
*/
void botResponse() 
{
	switch (response)
	{
	case 0 :printf("\nTeam Bot Annie Cal responds with: It is a well-known fact that");
			printf(" homework\nprovides additional unnecessary cognitive load for students!\n\n");
			printf("*Team Bot Annie Cal gets 3 Argument Points for Assertiveness*\n");
			printf("*Team Bot Annie Cal gets -2 Argument Points for Not Citing Sources*\n");
			response++;
			break;
	case 1 : printf("\nTeam Bot Annie Cal responds with: There are better ways to assess learning other than homeworks!\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for Compelling Argument*");
			printf("\n*Team Bot Annie Cal gets -1 Argument Points for No Evidence*\n");	
			response++;
			break;
	case 2 :printf("\nTeam Bot Annie Cal responds with: Learning also happens on weekends despite homework, when students get to reflect on class discussions.\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for Compelling Argument*\n"); 
			response++;
			break;		
	case 3 :printf("\nTeam Bot Annie Cal responds with: Violence in video games is more influential than it is in the movies or television and may undermine moral sensitivity!\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for a Cogent Argument*\n");
			response++;
			break;
	case 4 : printf("\nTeam Bot Annie Cal responds with: Violent video games require the same violent actions to be done repetitively. ");
			printf("Because these games allow virtual harm to others, it can create results that desensitize people to the needs of others in the real world.\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for Compelling Argument*\n");
			response++;
			break;
	case 5 :printf("\nTeam Bot Annie Cal responds with: Due to the emergence of violent video games, it is said that there are increases in physical aggression in children over time.\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for a Powerful Argument*\n"); 
			printf("*Team Bot Annie Cal gets -2 Argument Points for Not Citing Sources*\n");
			response++;
			break;
	case 6 :printf("\nTeam Bot Annie Cal responds with: It is the ultimate denial of human rights when implemented. It is the premeditated and cold-blooded killing of a human being by the state in the name of justice.\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for Assertiveness*\n");
			response++;
			break;
	case 7 :printf("\nTeam Bot Annie Cal responds with: The death penalty can execute someone who is possibly innocent. The evidence obtained to justify the death penalty can be tainted.\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for Cautiousness*\n");
			response++;
			break;
	case 8 :printf("\nTeam Bot Annie Cal responds with: Children can be put to death through the use of capital punishment. There is no going back after the execution takes place.\n");
			printf("\n*Team Bot Annie Cal gets 3 Argument Points for Compelling Argument*\n"); 
			response++;
			break;
	}
}

/*   This function determines the winner for each stage of the game.
     @param  (void)  Player is the total score of Team ProgCC and Bot is the total score of Team Bot Annie Cal
     @return (void)  the winner of the stage.
*/
void computeWin(int Player, int Bot) 
{
	if (Player > Bot)
	{
		printf("\n\nTeam ProgCC wins "); printStage(); printf("!\n");
		printf("\n--------------------------------");
	}
	else if (Player == Bot)
	{
		printStage();
		printf(" is a Tie!\n");
		printf("\n--------------------------------");
	}
	else
	{
		printf("\n\nTeam Bot Annie Cal wins ");
		printStage();
		printf("!\n");
		printf("\n--------------------------------");
	}	
}
/*   The function responsible for the game's mechanics and uses all of the functions present in this program. 
     @param  (void)  There are no parameters.
     @return (void)  results of the debate.
*/
void Debate() 
{
	char OS1; //Variable for the input of the user for the opening statements and the following statements.
	int i, j, k, l, m, Bot, Player, due1, due2, due3, due4, due5, score1, score2, score3, ready1; //Variables strictly for the use of the Debate function.
	j = k = l = m = 1; // Variables for counting the repitition of the choices availabale.
	Player = score1 = score2 = score3 = 0; //Variables used for the scores of the player.
	due1 = due2 = due3 = due4 = 2; // Variables used for the computation of the bonuses the player will acquire.
	
	Title();
	
	for (i = 1; i <= 3; i++) //To ensure that each debate will be only composed of 3 rounds.
	{
		printf("\n	- Round %d -\n", i);
		openingStatement();
		scanf("%1s", &OS1);
	
		while (OS1 != '1' && OS1 != '2' && OS1 != '3' && OS1 != '4') //In case the user does not input the required input.
		{
			printf("Invalid response! Please try again.\n\n");
			printf("\nYour choice: ");
			scanf("%1s", &OS1);
		} 
	
		if (OS1 == '1' || OS1 == '2' || OS1 == '3' || OS1 == '4' )
		{
			switch (OS1) //Selects the case based on what statement the user chose.
			{
			case '1' : if (j == 1)	
					{
						statement1();
						printf("\n*Team ProgCC gets 3 Argument Points for Assertiveness*\n");
						Player += 3;
						due1 *= 5; //due1 is for the All in due time bonus wherein the player inputs 1, 2 and 3 consecutively
						due3 *= 5; //due3 is for the Book ends bonus wherein the player inputs 1 first and 4 last
						due4 /= 4; //due4 is for the Book ends bonus wherein the player inputs 4 first and 1 last
						j++;	
					}
					else if (j == 2) 
					{
						statement1();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score2 = 0; // score of the player for the second round if there are repititions. All four statements have this.
						due1 *= 5; 
						due3 *= 5; 
						due4 /= 4; 
						j++;	
					}
					else if (j >= 3) 
					{
						statement1();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score3 = 0; // score of the player for the second round if there are repititions. All four statements have this.
						due1 *= 5; 
						due3 *= 5; 
						due4 /= 4; 
						j++;
					}
      	           break;
      	  	case '2' : if (k == 1)
      	  			{
      	  				statement2();
						printf("\n*Team ProgCC gets 3 Argument Points for Confidence*\n");
						printf("*Team ProgCC gets -1 Argument Points for Not Citing Sources*\n");
						Player += 2;	
						due1 += 10;
						due2 *= 5; //due2 is for the All in due time bonus wherein the player inputs 2, 3 and 4 consecutively
						due3 += 10;
						due4 += 10;
						k++;
					}
					else if (k == 2) 
					{
						statement2();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score2 = 0;
						due1 += 10;
						due2 *= 5; 
						due3 += 10;
						due4 += 10;
						k++;
					}
					else if (k >= 3) 
					{
						statement2();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score3 = 0;
						due1 += 10;
						due2 *= 5; 
						due3 += 10;
						due4 += 10;
						k++;
					}
      	           break;
      	  	case '3' : if (l == 1)
      	  			{
      	  				statement3();
						printf("\n*Team ProgCC gets 3 Argument Points for History*\n");
						printf("*Team ProgCC gets -2 Argument Points for Ad Hominem*\n");
						Player += 1;
						due1 /= 4;
						due2 += 10;
						due3 += 10;
						due4 += 10;
						l++;
					}
					else if (l == 2) 
					{
						statement3();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score2 = 0;
						due1 /= 4;
						due2 += 10;
						due3 += 10;
						due4 += 10;
						l++;
					}
					else if (l >= 3) 
					{
						statement3();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score3 = 0;
						due1 /= 4;
						due2 += 10;
						due3 += 10;
						due4 += 10;
						l++;
					}
      	           break;
       	 	case '4' : if (m == 1)
       	 			{
       	 				statement4();
						printf("\n*Team ProgCC gets 3 Argument Points for Creativity*\n");
						printf("*Team ProgCC gets -4 Argument Points for being Facetious*\n");
						Player -= 1;
						due2 /= 4;
						due3 /= 4;
						due4 *= 5;
						m++;
					}
					else if (m == 2) 
					{
						statement4();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score2 = 0;
						due2 /= 4;
						due3 /= 4;
						due4 *= 5;
						m++;
					}
					else if (m >= 3) 
					{
						statement4();
						printf("\n*Team ProgCC gets 0 Argument Points for Repetition*\n");
						score3 = 0;
						due2 /= 4;
						due3 /= 4;
						due4 *= 5;
						m++;
					}
       	          break;
			}
		}
			
		if (i == 1)
		{
			score1 = Player; // score of the player strictly for the first round.
			if (m == 2) 
				due5 = 5;
			botResponse();
		}

		else if (i == 2) 
		{
			score2 = Player - score1; // score of the player for the second round if there are no repititions.
			botResponse();
		}
		else if (i == 3) 
		{ 
			score3 = Player - score1 - score2; // score of the player for the third round if there are no repititions.
			botResponse();
		}
	}
	
	printf("\n	- ");
	printStage();
	printf(" -\n");
	printf("\nTeam ProgCC Points: \n");
	printf("  - Round 1: %d\n  - Round 2: %d\n  - Round 3: %d\n", score1, score2, score3); // prints the scores of the player for the 3 rounds.
	printf("\nBonuses:");
	if (j >= 2 && j < 4 && k == 1 && l >= 2 && l < 4 && m == 1) // computes for the ALl odd responses bonus.
	{
		printf("\n  - All odd responses: 3");
		Player += 3;
	}

	else if (score2 == 0 && score3 == 0) // Computes for the Adamant bonus.
	{
		printf("\n  - Adamant: 6");
		Player += 6;
	}

	else if (due1 == 5 || due2 == 5) // Computes for the All in due time bonus.
	{
		printf("\n  - All in due time: 4");
		Player += 4;
	}
	else if (due4 == 5 || due3 == 5) // Computes for the Book ends bonus.
	{
		printf("\n  - Book ends: 4");
		Player += 4;
		if (due5 == 5) // Just in case Book ends bonus stacks with Absurd opening bonus.
		{
			printf("\n  - Absurd opening: 2");
			Player += 2;
		}
	}
	else if (due5 == 5) // Computes for the Absurd opening bonus.
	{
		printf("\n  - Absurd opening: 2");
		Player += 2;
	}
	
	if (title == 1) // Computes for the scores of the bot for the first debate.
	{
		botPoint1 = 1;
		botPoint2 = 2;
		botPoint3 = 3;
	}
	else if (title == 2) // Computes for the scores of the bot for the second debate.
	{
		botPoint1 = 3;
		botPoint2 = 3;
		botPoint3 = 1;
	}
	else if (title == 3) // Computes for the scores of the bot for the third debate.
	{
		botPoint1 = 3;
		botPoint2 = 3;
		botPoint3 = 3;		
	}
	botTotal = botPoint1 + botPoint2 + botPoint3; // Total score of the bot for the stage.
	
	printf("\n\nTotal: %d points", Player);
	printf("\n\nTeam Bot Annie Cal:");
	printf("\n  - Round 1: %d\n  - Round 2: %d\n  - Round 3: %d\n", botPoint1, botPoint2, botPoint3);
	printf("\nTotal: %d points", botTotal);
	
	computeWin(Player, botTotal);
	
	if (stagePrint == 8) // Ends the game when the player passes through the three stages of the game.
	{
		printf("\n\nThe Game has now ended! Thank You for Playing!");	
	}
	else
	{
		printf("\n\nWould you like to start ");
		printStage();
		printf("? <Y/N>: "); // Asks the player is he/she wants to start the next debate.
		scanf("%1s", &ready1);
	
		while (ready1 != 'Y' && ready1 != 'y' && ready1 != 'N' && ready1 != 'n') //In case the user does not input the required input.
		{
			printf("Invalid response! Please try again.\n\n");
			printf("\n\nWould you like to start ");
			printStage();
			printf("? <Y/N>: ");
			scanf("%1s", &ready1);
		} 
	
		if (ready1 == 'N' || ready1 == 'n') // Ends the game if the user does not want to continue anymore.
		{
			printf("\n\nTerminating the Game");
		}
		else if (ready1 == 'Y' || ready1 == 'y') // Restarts the debate function with a new set of statements and bot responses.
		{	
			Debate(); //Commence the debate function again.
		}
	}
}
/*   The main function is responsible for the startup of the game and the activation of the Debate Function.
     @param  (void)  There are no parameters.
     @return (void)  0 - ends the game after the debate function ends.
*/
int main ()
{
	char ready; // variable responsible for determining if the player wants to start the game or not.
	
	printf("Welcome to PROGCC Debot Club!\n");
	printf("\nAre you ready to debate? <Y/N>: ");
	scanf("%1s", &ready);
	
	while (ready != 'Y' && ready != 'y' && ready != 'N' && ready != 'n') //In case the user does not input the required input.
	{
		printf("Invalid response! Please try again.\n\n");
		printf("\nAre you ready to debate? <Y/N>: ");
		scanf("%1s", &ready);
	} 
	
	if (ready == 'N' || ready == 'n')
	{
		printf("\n\nTerminating the Game");
	}
	else if (ready == 'Y' || ready == 'y')
	{
		printf("\nGood choice! The game shall now commence!\nGood Luck!\n\n\n");
		printf("------------------------------------------------------------------------------\n\n");	
		Debate();	//Starts the debate
	}
	return 0;
}
