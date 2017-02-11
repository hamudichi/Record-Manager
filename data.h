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
// 	 File : data.h  														 //
// 	 Contains : All structure defentions for the entinties					 //
// ######################################################################### // 
#ifdef DATA_H_
#define DATA_H_

typedef struct Person {
    char[15] firstname;
    char[15] lastname;
    char[10] telephone;
} Person;

typedef struct Student {
    Person stud;
    unsigned short  gpa : 4; 
    unsigned double fees;
    unsigned short courseLoad : 6;
} Student;

typedef struct Employee {
	Person emp;
	unsigned double salary;
	unsigned short yearsOfService;
	unsigned short level : 4;
} Employee;

#endif
