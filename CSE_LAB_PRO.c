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

//-------Main Panel---------//
int main(){
    int user_in,n;
    while (1)
    {
        printf("\n\n-----------------------------------------------------");
        printf("\n|");
        printf("\t\t\tWELCOME");
        printf("\t\t\t    |\n");
        printf("-----------------------------------------------------");
        printf("\n<--------------Select your option-------------------->\n\n");
        printf("\t\t 1. Admin Panel.\n");
        printf("\t\t 2. User Panel.\n");
        printf("\t\t 3. Exit.\n");
    
        printf("\n\t\t Enter: ");
        scanf("%d",&user_in);
    
        if(user_in==1){
            admin();
        }
        else if(user_in==2){
            user();
        }
        else if(user_in==3){
          exit(0);
        }
        else{
            printf("\t\t Wrong Input.\n\n");
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
        printf("\t\t 2. Delete a student.\n");
        printf("\t\t 3. Back.\n");

        printf("\n\t\t Enter: ");
        scanf("%d",&user_in);

    }
    else{
        printf("\t\t Wrong Password.\n\n");
        printf("\t Enter 0 to go back: ");
        scanf("%d",&xx);

        if(xx==0){
            admin();
        }
        else{
            exit(0);
        }


    }
}

//-------User Panel---------//
void user(){
    int user_x,xx;
    printf("\n<-------------Select Your Club Which you Want to Know------------->");
    printf("\n\n\t\t 1. Computer Club");
    printf("\n\t\t 2. EEE Club");
    printf("\n\t\t 3. Textile Club");
    printf("\n\t\t 4. Cultural Club");
    printf("\n\t\t 5. join Club");
    printf("\n\t\t 6. Back.");

    printf("\n\n\t\t Enter: ");
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

    printf("\n\n\t Enter 0 to go back. ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
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

    printf("\n\n\t Enter 0 to go back. ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
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

    printf("\n\n\t Enter 0 to go back. ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
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

    printf("\n\n\t Enter 0 to go back. ");
    scanf("%d",&user_x);

    if(user_x==0){
        user();
    }
    else{
        exit(0);
    }
}
/*
void law(){
    printf("\n\n<************WELCOME TO Law CLUB************>");
    printf("\n\n\t Club Name : Law Clube.");
    printf("\n\t President Name : Ibrahim");
    printf("\n\t Total Executive Member : 3 ");
    printf("\n\t Total General Member : 20 ");
    printf("\n\t Previous Program : ");
    printf("\n\t UpComing Program : ");
}
*/
void join(){

}