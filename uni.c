// ######################################################################### // 
//  _____     _____    _____    _____    _____     _____                     //
// |  _  \   | ____|  /  ___|  /  _  \  |  _  \   |  _  \                    //
// | |_| |   | |__    | |      | | | |  | |_| |   | | | |                    //
// |  _  /   |  __|   | |      | | | |  |  _  /   | | | |                    //
// | | \ \   | |___   | |___   | |_| |  | | \ \   | |_| |                    //
// |_|  \_\  |_____|  \_____|  \_____/  |_|  \_\  |_____/                    //
//  ____  ___       ___   __   _       ___   _____   _____   _____           //
// |    |/   |     /   | |  \ | |     /   | /  ___| | ____| |  _  \          //
// | ||   /| |    / /| | |   \| |    / /| | | |     | |__   | |_| |          //
// | ||__/ | |   / / | | | |\   |   / / | | | |  _  |  __|  |  _  /          //
// | |     | |  / /  | | | | \  |  / /  | | | |_| | | |___  | | \ \          //
// |_|     |_| /_/   |_| |_|  \_| /_/   |_| \_____/ |_____| |_|  \_\         //
//                                                                           //
// ######################################################################### // 
//                                                                           //
// 	 Name   : Record Manager                                                 //
// 	 Author : Mohamad Yassine                                                //
// 	 Date   : Feb 2, 2017													 //
// 																			 //
// 	 Purpose :  Manage a record of all students and employees at Carleton    //
// 				University. 												 //
// 																			 //
//                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~							 //
// 	 File : uni.c															 //
// 																			 //
// ######################################################################### //


#include <stdio.h>
#include <string.h>
#include "employee.h"
#include "students.h"
#include "data.h"


#define _NAME "Record Manager"
#define _VER  "0.1v"
#define _COM "ⓝⓞⓝⓐⓜⓔⓢⓛⓞⓛ⊙ⓒⓞⓜ"
#define _AUTH "Mohamad Yassine"
#define MAX_LENGTH 2048

/* The following are ANSI Escape Sequences. 
 * You can find more by typing: man terminfo
 * The exact ones under can be found on stackoverflow here:
 * http://stackoverflow.com/questions/3219393/stdlib-and-colored-output-in-c
 */
#define ANSI_COLOR_RED     	"\x1b[31;4m"
#define ANSI_COLOR_GREEN   	"\x1b[32;1m"
#define ANSI_COLOR_YELLOW  	"\x1b[33;1m"
#define ANSI_COLOR_BLUE    	"\x1b[34;1m"
#define ANSI_COLOR_MAGENTA 	"\x1b[35;1m"
#define ANSI_COLOR_CYAN    	"\x1b[36;1m"
#define ANSI_BACK_BLACK    	"\x1b[31;1m"
#define ANSI_COLOR_RESET   	"\x1b[0m"
#define CLEAR 			  	"\x1b[2J"

int displayMenu (int option);
void displayLogo (int option);
void clearScreen ();

int main ()
{
	Person person[20];

    char input[MAX_LENGTH] = {'\0'};
    int choice = 0; 
    clearScreen();
	displayLogo(0);

    printf("%s %s by \n%s %s\n"
           "\n", _NAME, _VER, _AUTH, _COM);
    // Menu
    displayMenu(0);
    scanf("%d", &choice);
    printf("%d\n", choice);

}

int readInput (char *text, int leng) {
    return 0;
}



void clearScreen () { printf(CLEAR);}

void displayLogo(int option) {
	printf(ANSI_COLOR_RED
	    "░█▀▄░█▀▀░█▀▀░█▀█░█▀▄░█▀▄░░░█▄█░█▀█░█▀█░█▀█░█▀▀░█▀▀░█▀▄\n"
        "░█▀▄░█▀▀░█░░░█░█░█▀▄░█░█░░░█░█░█▀█░█░█░█▀█░█░█░█▀▀░█▀▄\n"
        "░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀▀░░░░▀░▀░▀░▀░▀░▀░▀░▀░▀▀▀░▀▀▀░▀░▀\n"
		ANSI_COLOR_RESET);
}

int menu () {
	int choice = -1;
	displayMenu(0);
	scanf("%d", &choice);
	if (choice < 0 || choice > 7) 
		printf (ANSI_COLOR_RED
			    "\nThat choice is invalid, please try again.\n"
			    ANSI_COLOR_RESET);
		menu();
}

int displayMenu(int level) {

	if (level == 0) {
		printf(ANSI_COLOR_CYAN
			   "\n⊙ 1. Add new Employee"
			   "\n⊙ 2. Add new student"
			   "\n⊙ 3. Print All Employees"
			   "\n⊙ 4. Print All students"
			   "\n⊙ 5. Search students using Family Name"
			   "\n⊙ 6. Summary of Data"
			   "\n⊙ 0. Quit\n"
			   ANSI_COLOR_RESET
               "Choose one of the options above by number: " );
	} else if (level == 1) {
		printf(ANSI_COLOR_CYAN
			   "\nAdd new Employee"
			   "\n  1 Name"
			   "\n⊙ 3. Print All Employees"
			   "\n⊙ 4. Print All students"
			   "\n⊙ 5. Search students using Family Name"
			   "\n⊙ 6. Summary of Data"
			   "\n⊙ 0. Quit\n"
			   ANSI_COLOR_RESET
               "Choose one of the options above by number: " );
	}
	return(0);
}
