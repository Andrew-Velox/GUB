//MADE BY MOHABBAT//
#include <stdio.h>
#include<stdlib.h>

//-------Main Menus---------//
void admin();
void user();

//-------SUB Menus---------//
void cse();
void eee();
void txt();
void cul();
void join();
void s_details();


//-------Main Panel---------//
int main(){
    int user_in;

    /*---------For displaying User name in Welcome Message-----------
    char usr_nm[50];
    printf("\n\t\t What is Your Name(Capital): ");
    gets(usr_nm);*/

    while (1)
    {
        printf("\n\n-----------------------------------------------------");
        printf("\n|");
        printf("\t\t    WELCOME ");
        printf("\t\t\t    |\n");
        printf("-----------------------------------------------------");
        printf("\n<--------------Select your option-------------------->\n\n");
        printf("\t\t 1. Admin Panel.\n");
        printf("\t\t 2. User Panel.\n");
        printf("\t\t 3. Exit.\n");
    
        printf("\n\t\t [>_<] Enter: ");
        scanf("%d",&user_in);
    
        if(user_in==1){
            admin();
        }
        else if(user_in==2){
            user();
        }
        else if(user_in==3){
            printf("\n\n\t\tGOOD BYE. [>_<]\n\n");
            exit(0);
        }
        else{
            printf("\n\t\t Wrong Input.\n\n");
        }
    }
}


//-------Admin Panel---------//
void admin(){
    int user_in,xx;

    printf("\n\t Enter Password to Log-in : ");
    scanf("%d",&user_in);
    if(user_in==101010){
        printf("\n\n-----------------------------------------------------");
        printf("\n|");
        printf("\t\tWELCOME TO ADMIN PANEL");
        printf("\t\t    |\n");
        printf("-----------------------------------------------------");
        printf("\n<--------------Select Your Option-------------------->\n\n");


        //add student
        printf("\t\t 1. Add a Student.\n");
        printf("\t\t 2. Students Details.\n");
        printf("\t\t 3. Back.\n");

        printf("\n\t\t [>_<] Enter: ");
        scanf("%d",&user_in);

        if(user_in==1){
            join();
        }
        else if(user_in==2){
            s_details();
        }
        else if(user_in==3){
            main();
        }
        else{
            printf("\n\t\t Wrong Input.\n\n");
            printf("\t Enter 0 to go back: ");
            scanf("%d",&user_in);

            if(user_in==0){
                admin();
            }
            else{
                printf("\n\n\t\tGOOD BYE. [>_<]\n\n");
                exit(0);
            }
        }
    }

    else{
        printf("\n\t\t Wrong Password.\n\n");
        printf("\t Enter 0 to go back: ");
        scanf("%d",&xx);

        if(xx==0){
            admin();
        }
        else{
            printf("\n\n\t\tGOOD BYE. [>_<]\n\n");
            exit(0);
        }
    }
}

//-------User Panel---------//
void user(){
    int user_x,xx;
    printf("\n\n----------------------------------------------------------");
    printf("\n|");-
    printf("\t  Select Which Club You Want To Know About");
    printf("\t |");
    printf("\n----------------------------------------------------------");
    printf("\n\n\t\t 1. Computer Club");
    printf("\n\t\t 2. EEE Club");
    printf("\n\t\t 3. Textile Club");
    printf("\n\t\t 4. Cultural Club");
    printf("\n\t\t 5. join Club");
    printf("\n\t\t 6. Back.");

    printf("\n\n\t\t [>_<] Enter: ");
    scanf("%d",&user_x);
    switch(user_x){
        case 1:
            cse();
            break;
        case 2:
            eee();
            break;
        case 3:
            txt();
            break;
        case 4:
            cul();
            break;
        case 5:
            join();
            break;
        case 6:
            main();
            break;
        default:
            printf("\t\t Wrong input.\n\n");
            printf("\t Enter 0 to go back: ");
            scanf("%d",&xx);

        if(xx==0){
            user();
        }
        else{
            printf("\n\n\tGOOD BYE. [>_<]\n\n");
            exit(0);
        }
    }

}

//-------CSE SECTION---------//
void cse(){
    int user_x;
    printf("\n\n-----------------------------------------------------");
    printf("\n|");
    printf("\t\tWELCOME COMPUTER CLUB");
    printf("\t\t    |\n");
    printf("-----------------------------------------------------");
    printf("\n\n\t Club Name : Computer Clube.");
    printf("\n\t President Name : Shamim Ahmed");
    printf("\n\t Total Executive Member : 2 ");
    printf("\n\t Total General Member : 20 ");
    printf("\n\t Previous Program : IDPC Spring 2023.");
    printf("\n\t UpComing Program : Freshers Oreantation Fall.");

    printf("\n\n\t Enter 0 to go back:  ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
        printf("\n\n\tGOOD BYE. [>_<]\n\n");
        exit(0);
    }  
}

//-------EEE SECTION---------//
void eee(){
    int user_x;
    printf("\n\n-----------------------------------------------------");
    printf("\n|");
    printf("\t\tWELCOME EEE CLUB");
    printf("\t\t    |\n");
    printf("-----------------------------------------------------");
    printf("\n\n\t Club Name : EEE Clube.");
    printf("\n\t President Name : Sajib Biswas Antu");
    printf("\n\t Total Executive Member : 3 ");
    printf("\n\t Total General Member : 20 ");
    printf("\n\t Previous Program : Robotics Program ");
    printf("\n\t UpComing Program : Coming Soon.");

    printf("\n\n\t Enter 0 to go back:  ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
        printf("\n\n\tGOOD BYE. [>_<]\n\n");
        exit(0);
    }
}

//-------TEX SECTION---------//
void txt(){
    int user_x;
    printf("\n\n-----------------------------------------------------");
    printf("\n|");
    printf("\t\tWELCOME TEXTILE CLUB");
    printf("\t\t    |\n");
    printf("-----------------------------------------------------");
    printf("\n\n\t Club Name : Textile Clube.");
    printf("\n\t President Name : MD Tanvir Hasan Molla");
    printf("\n\t Total Executive Member : 7 ");
    printf("\n\t Total General Member : 23 ");
    printf("\n\t Previous Program : 3rd Industrial Visit 2023 ");
    printf("\n\t UpComing Program : Coming Soon.");

    printf("\n\n\t Enter 0 to go back:  ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
        printf("\n\n\tGOOD BYE. [>_<]\n\n");
        exit(0);
    }
}

//-------CUL SECTION---------//
void cul(){
    int user_x;
    printf("\n\n-----------------------------------------------------");
    printf("\n|");
    printf("\t\tWELCOME CULTURAL CLUB");
    printf("\t\t    |\n");
    printf("-----------------------------------------------------");
    printf("\n\n\t Club Name : Cultural Clube.");
    printf("\n\t President Name : Ibrahim");
    printf("\n\t Total Executive Member : 3 ");
    printf("\n\t Total General Member : 20 ");
    printf("\n\t Previous Program : Curoy-vati Episod 3");
    printf("\n\t UpComing Program : Curoy-vati Episod 4");

    printf("\n\n\t Enter 0 to go back:  ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
        printf("\n\n\tGOOD BYE. [>_<]\n\n");
        exit(0);
    }
}

//-------Join Section---------//
void join(){
    char name[100],email[100];
    int id,num,user_x;
    FILE *user_join;

    user_join = fopen("members.txt","a");

    if(user_join==NULL){
        printf("\t\t File Dosen't Exist.");
    }

    else{
        printf("\n\n-----------------------------------------------------");
        printf("\n|");
        printf("\t\tFile is Opened");
        printf("\t\t\t    |\n");
        printf("-----------------------------------------------------");

        printf("\n\n\t Enter Your Name: ");
        getchar();
        gets(name);
        fprintf(user_join, "Name: %s\n", name);

        printf("\t Enter Your ID: ");
        scanf("%d", &id);
        fprintf(user_join, "ID: %d\n", id);

        printf("\t Enter Your Email: ");
        getchar();
        gets(email);
        fprintf(user_join, "Email: %s\n", email);

        printf("\t Enter Your Number: ");
        scanf("%d", &num);
        fprintf(user_join, "Number: %d\n", num);
        fputs("===================================\n",user_join);

        printf("\n\n\t Join successfully.\n\n");
        fclose(user_join);
        
        printf("\n\n\t 00. Back \n");
        printf("\n\t [>_<] Enter: ");
        scanf("%d",&user_x);

        if(user_x==0 || user_x==00){
            main();
        }
        /*else if(user_x==01 || user_x==1){
            admin();
        }*/
        else{
          printf("\n\n\tGOOD BYE. [>_<]\n\n");
          exit(0);
        }
    }
}

//-------Members Details Section---------//
void s_details(){
    int user_x;
    char ch;
    FILE *user_join;
    user_join = fopen("members.txt","r");

    if(user_join==NULL){
        printf("\n\n File Doesnt Open.");
    }
    else{
        printf("\n\n-----------------------------------------------------");
        printf("\n|");
        printf("\t\tMembers Details");
        printf("\t\t\t    |\n");
        printf("-----------------------------------------------------\n\n");

        while(!feof(user_join)){
            ch = fgetc(user_join);
            printf("%c",ch);
        }
        fclose(user_join);

        printf("\n\n\t Enter 0 to go back:  ");
        scanf("%d",&user_x);

        if(user_x==0){
            main();
        }
        else{
            printf("\n\n\tGOOD BYE. [>_<]\n\n");
            exit(0);
        }
    }
}