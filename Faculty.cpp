#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#ifdef WIN32
#include <ncurses/ncurses.h>
#else
#include <ncurses.h>
#endif
#include "Faculty.h"
#include "OfficeOfAcademics.h"

#define SUCCESSFUL 1
#define YES 1
#define NO 0
int count2=0;

void LOGINSTART();

    void Faculty :: login()
    {
        char ldap[40], pass[40];
        std::cout << "Enter LDAP ID: ";
        std::cin >> ldap;
        
        initscr(); // enable ncurses
        printw("Enter Password: ");
        noecho();  // disable character echoing

        getnstr(pass,sizeof(pass));

        echo(); // enable character echoing again
        // getch(); // Wait for a keypress
        endwin(); // disable ncurses
        // std::cout << std::endl;
        int loginverify = OfficeOfAcademics::VerifyCredentials(ldap, pass);

        if (loginverify == SUCCESSFUL)
        {
            std::cout << ("\n** Login Successful! **\n\n");
            FurtherOptions();
        }
        else
        {
            std::cout << ("Enter credentials again\n");
            count2++;
            if(count2==3)
            {
                printf("You have entered the wrong credentials three times\n\n");
                ::LOGINSTART();
            }
            login();
        }
    }

    void Faculty::FurtherOptions()
    {
        int repeat = YES;
        while(repeat == YES)
        {
            std::cout << ("Enter the Roll Number of the student to retrieve Medical Leave Record: ");
            char roll[15];
            std::cin >> roll;
            OfficeOfAcademics::GetMedicalLeaveRecord(roll);
            std::cout << "\n\nDo you wish to check for another student? (Yes/No): ";
            std::string response;

            std::cin >> response;
            std::transform(response.begin(), response.end(), response.begin(), ::tolower);
            if(response.std::string::compare("yes")==0)
            {
                repeat = YES;
            }
            else repeat = NO;
        }
    }
