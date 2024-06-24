//MADE BY MOHABBAT//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int Limit=100;

//----------------Memberers Class-----------------//
class Member{
    public:

    string name,email,dep,number;
    long long id;
};

//----------globar Memberers counting----------//
int mem=0;
int cse_mem_cnt=0;
int eee_mem_cnt=0;
int txt_mem_cnt=0;
int swe_mem_cnt=0;
bool save_pass=false;

//---- Store data in Member Object array ---------------------
Member mb[Limit];
Member cse_mb[Limit];
Member swe_mb[Limit];
Member eee_mb[Limit];
Member txt_mb[Limit];

//-------Main Menus---------//
void admin();
void user();

//-------SUB Menus---------//
void cse();
void eee();
void txt();
void swe();
void add(Member mem_of[],int &cnt_for,string get);
void rmv(Member mem_of[],int &cnt_for,string get);
void update(Member mem_of[],int cnt_for,string get);
void find(Member mem_of[],int cnt_for,string get);
void show(Member mem_of[],int cnt_for,string s);


void check();

//----------print_this-----------//
int print(string come, string work){
    int opt=0;


    cout << "\n---------------------------------------------------------";
    cout << "\n|";
    cout << "\t\t    Select Club ";
    cout << "\t\t\t|\n";
    cout << "---------------------------------------------------------\n";
    cout << "|\t\t\t\t\t\t\t|\n";
    cout << "|\t\t 1. CSE Club \t\t\t\t|\n";
    cout << "|\t\t 2. EEE Club \t\t\t\t|\n";
    cout << "|\t\t 3. TXT Club \t\t\t\t|\n";
    cout << "|\t\t 4. SWE PANEL. \t\t\t\t|\n";
    cout << "|\t\t 0. Cancel. \t\t\t\t|\n";
    cout << "|_______________________________________________________|\n";

    cout << "\n\t\t[>_<] Enter: ";
    cin >> opt;

    if(opt<0 || opt>4){
        cout << "\n\t\t Wrong input.\n\n";
        cout << "\t Press Enter to go back: ";
        string xx;
        getchar();
        getline(cin,xx);
        print(come,work);

    }

    if(work=="Show"){
        if(opt==1) show(cse_mb,cse_mem_cnt,come);
        else if(opt==2) show(eee_mb,eee_mem_cnt,come);
        else if(opt==3) show(txt_mb,txt_mem_cnt,come);
        else if(opt==4) show(swe_mb,swe_mem_cnt,come);
        else admin();
    }

    else if(work=="Remove"){

        if(opt==1) rmv(cse_mb,cse_mem_cnt,come);
        else if(opt==2) rmv(eee_mb,eee_mem_cnt,come);
        else if(opt==3) rmv(txt_mb,txt_mem_cnt,come);
        else if(opt==4) rmv(swe_mb,swe_mem_cnt,come);
        else admin();
    }

    else if(work=="Update"){
        if(opt==1) update(cse_mb,cse_mem_cnt,come);
        else if(opt==2) update(eee_mb,eee_mem_cnt,come);
        else if(opt==3) update(txt_mb,txt_mem_cnt,come);
        else if(opt==4) update(swe_mb,swe_mem_cnt,come);
        else admin();
    }
    else if(work=="Find"){
        if(opt==1) find(cse_mb,cse_mem_cnt,come);
        else if(opt==2) find(eee_mb,eee_mem_cnt,come);
        else if(opt==3) find(txt_mb,txt_mem_cnt,come);
        else if(opt==4) find(swe_mb,swe_mem_cnt,come);
        else admin();
    }


    else if(work=="Add"){
        if(opt==1) add(cse_mb,cse_mem_cnt,come);
        else if(opt==2) add(eee_mb,eee_mem_cnt,come);
        else if(opt==3) add(txt_mb,txt_mem_cnt,come);
        else if(opt==4) add(swe_mb,swe_mem_cnt,come);
        else{
            if(come=="User") user();
            else if(come=="Admin") admin();
        }

    }


}

//-------Main Panel---------//
int main(){
    if(cse_mem_cnt==0) check();
    int user_in;
    save_pass=false;

    /*---------For displaying User name in Welcome Message-----------
    char usr_nm[50];
    cout << "\n\t\t What is Your Name(Capital): ");
    gets(usr_nm);*/

    while (1){

        //cout << "\n -------------------------------------------------------\t\n");
        cout << "\n _______________________________________________________\t\n";
        cout << "|           _____    _____   __  __    _____   \t\t|\n";
        cout << "|          / ____|  / ____| |  \\/  |  / ____|  \t\t|\n";
        cout << "|         | |  __  | |      | \\  / | | (___    \t\t|\n";
        cout << "|         | | |_ | | |      | |\\/| |  \\___ \\   \t\t|\n";
        cout << "|         | |__| | | |____  | |  | |  ____ |  \t\t|\n";
        cout << "|          \\_____|  \\_____| |_|  |_| |_____/   V - O.3\t| \n";
        cout << "|\t\t\t\t\t\t\t|";
        cout << "\n|  G U B  C L U B   M A N A G E M E N T   S Y S T E M   |\n";
        cout << "|-------------------------------------------------------|";
        cout << "\n|";
        cout << "\t\t    W E L C O M E ";
        cout << "\t\t\t|\n";
        cout << "|-------------------------------------------------------|";
        cout << "\n<---------------Select your option---------------------->\n";
        cout << "|\t\t\t\t\t\t\t|\n";
        cout << "|\t\t 1. ADMIN PANEL. \t\t\t|\n";
        cout << "|\t\t 2. USER PANEL. \t\t\t|\n";
        cout << "|\t\t 3. EXIT. \t\t\t\t|\n";
        cout << "|_______________________________________________________|\n";
        cout << "\n\t\t [>_<] Enter: ";
        cin >>  user_in;;

        if(user_in==1){
            admin();
        }
        else if(user_in==2){
            user();
        }
        else if(user_in==3){
            cout << "\n\n\t\tGOOD BYE. [>_<]\n\n";
            exit(0);
        }
        else{
            cout << "\n\t\t Wrong Input.\n\n";
        }
    }
}


//-------Admin Panel---------//
void admin(){
    int user_in,xx;

    if(!save_pass){
        cout << "\n\t Enter Password to Log-in : ";
        cin >>  user_in;
    }
    if(user_in==101010 || save_pass){
        save_pass=true;

        cout << "\n----------------------------------------------------------";
        cout << "\n|";
        cout << "\t\tWELCOME TO ADMIN PANEL";
        cout << "\t\t\t |\n";
        cout << "----------------------------------------------------------";
        cout << "\n<----------------Select Your Option---------------------->";
        cout << "\n|\t\t\t\t\t\t\t |";
        cout << "\n|\t\t 1. Add a Student. \t\t\t |";
        cout << "\n|\t\t 2. Remove a Student. \t\t\t |";
        cout << "\n|\t\t 3. Update a Student Details. \t\t |";
        cout << "\n|\t\t 4. Find a Students.\t\t\t |";
        cout << "\n|\t\t 5. View Members Details.\t\t |";
        cout << "\n|\t\t 6. Total Member.\t\t\t |";
        cout << "\n|\t\t 0. Back. \t\t\t\t |";
        cout << "\n|\t\t\t\t\t\t\t |";
        cout << "\n----------------------------------------------------------";

        cout << "\n\t\t [>_<] Enter: ";
        cin >>  user_in;

        if(user_in==1){
            print("Admin","Add");
        }
        else if(user_in==2){
            print("Admin","Remove");
        }
        else if(user_in==3){
            print("Admin","Update");
        }
        else if(user_in==4){
            print("Admin","Find");
        }
        else if(user_in==5){
            print("Admin","Show");
        }
        else if(user_in==6){
            cout <<"=====================================================" << endl;
            cout << "\t\t Total Member- " << cse_mem_cnt+eee_mem_cnt+swe_mem_cnt+txt_mem_cnt << endl;
            cout <<"=====================================================" << endl;
            cout << "\t Press Enter to go back: ";
            string v;
            getchar();
            getline(cin,v);

            admin();

        }
        else if(user_in==0){
            main();
        }
        else{
            cout << "\n\t\t Wrong Input.\n\n";
            cout << "\t Press Enter to go back: ";
            string v;
            getchar();
            getline(cin,v);

            admin();
        }
    }

    else{
        cout << "\n\t\t Wrong Password.\n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|\t\t 01. Try Again \t\t\t\t |\n";
        cout << "|\t\t 00. Back \t\t\t\t |";
        cout << "\n----------------------------------------------------------";
        cout << "\n\t\t Enter: ";
        cin >>  xx;


        if(xx==1){
            admin();
        }
        else{
            main();
        }
    }
}

//-------User Panel---------//
void user(){
    int user_x;
    cout << "\n----------------------------------------------------------";
    cout << "\n|";
    cout << "\t\tWELCOME TO USER PANEL";
    cout << "\t\t\t |\n";
    cout << "----------------------------------------------------------";
    cout << "\n<----------------Select Your Option---------------------->";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n|\t\t 1. Computer Club \t\t\t |";
    cout << "\n|\t\t 2. EEE Club \t\t\t\t |";
    cout << "\n|\t\t 3. Textile Club \t\t\t |";
    cout << "\n|\t\t 4. Software Club \t\t\t |";
    cout << "\n|\t\t 5. Join Club \t\t\t\t |";
    cout << "\n|\t\t 0. Back. \t\t\t\t |";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n----------------------------------------------------------\n";
    cout << "\t\t[>_<] Enter: ";
    cin >>  user_x;
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
            swe();
            break;
        case 5:
            print("User","Add");
            break;
        case 0:
            main();
            break;
        default:
            cout << "\n\t\t Wrong input.\n\n";
            cout << "\t Press Enter to go back: ";
            string xx;
            getchar();
            getline(cin,xx);
            user();
    }

}

//-------CSE SECTION---------//
void cse(){
    string user_x;
    cout << "\n\n----------------------------------------------------------";
    cout << "\n|";
    cout << "\t\tWELCOME TO COMPUTER CLUB";
    cout << "\t\t |\n";
    cout << "----------------------------------------------------------";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n|\t Club Name : Computer Clube.\t\t\t |";
    cout << "\n|\t President Name : Shamim Ahmed\t\t\t |";
    cout << "\n|\t Total Executive Member : 2 \t\t\t |";
    cout << "\n|\t Total General Member : "<<cse_mem_cnt<<"\t\t\t |";
    cout << "\n|\t Previous Program : IDPC Spring 2023. \t\t |";
    cout << "\n|\t UpComing Program : Coming Soon.\t\t |";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n----------------------------------------------------------";

    cout << "\n\n\t Press Enter to go back:  ";
    getchar();
    getline(cin,user_x);

    user();

}

//-------EEE SECTION---------//
void eee(){
    string user_x;
    cout << "\n\n----------------------------------------------------------";
    cout << "\n|";
    cout << "\t\tWELCOME TO EEE CLUB";
    cout << "\t\t\t |\n";
    cout << "----------------------------------------------------------";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n|\t Club Name : EEE Clube. \t\t\t |";
    cout << "\n|\t President Name : Sajib Biswas\t\t\t |";
    cout << "\n|\t Total Executive Member : 3 \t\t\t |";
    cout << "\n|\t Total General Member : "<<eee_mem_cnt<<"\t\t\t |";
    cout << "\n|\t Previous Program : Sustainable Technologies  \t |\n|\t\t\t    for Industry 5.0 \t\t |";
    cout << "\n|\t UpComing Program : Coming Soon.\t\t |";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n----------------------------------------------------------";

    cout << "\n\n\t Press Enter to go back:  ";
    getchar();
    getline(cin,user_x);

    user();

}

//-------TXT SECTION---------//
void txt(){
    string user_x;
    cout << "\n\n----------------------------------------------------------";
    cout << "\n|";
    cout << "\t\tWELCOME TO TEXTILE CLUB";
    cout << "\t\t\t |\n";
    cout << "----------------------------------------------------------";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n|\t Club Name : Textile Clube. \t\t\t |";
    cout << "\n|\t President Name : MD Tanvir Hasan\t\t |";
    cout << "\n|\t Total Executive Member : 4 \t\t\t |";
    cout << "\n|\t Total General Member : "<<txt_mem_cnt<<"\t\t\t |";
    cout << "\n|\t Previous Program : Textile Talent Hunt Season 8 |";
    cout << "\n|\t UpComing Program : Coming Soon.\t\t |";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n----------------------------------------------------------";

    cout << "\n\n\t Press Enter to go back:  ";
    getchar();
    getline(cin,user_x);

    user();

}

//-------SWE SECTION---------//
void swe(){
    string user_x;
    cout << "\n\n----------------------------------------------------------";
    cout << "\n|";
    cout << "\t\tWELCOME TO SOFTWARE CLUB";
    cout << "\t\t |\n";
    cout << "----------------------------------------------------------";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n|\t Club Name : SOFTWARE Clube. \t\t\t |";
    cout << "\n|\t President Name : MD Ibrahim\t\t\t |";
    cout << "\n|\t Total Executive Member : 3 \t\t\t |";
    cout << "\n|\t Total General Member : "<<swe_mem_cnt<<"\t\t\t |";
    cout << "\n|\t Previous Program : Talent Hunt. \t\t |";
    cout << "\n|\t UpComing Program : Coming Soon.\t\t |";
    cout << "\n|\t\t\t\t\t\t\t |";
    cout << "\n----------------------------------------------------------";

    cout << "\n\n\t Press Enter to go back:  ";
    getchar();
    getline(cin,user_x);

    user();

}



// test--------------------------------------------------------------
void check(){

    string names[]={"Kelvin","Xorry","Andrew","Mark","Shasha"};
    string depts[]={"CSE","EEE","SWE","TXT","SWE"};
    string emails[]={"Kelvin@gamil.com","Xorry@gmai.com","Andrew@gamil.com","Mark@gamil.com","Shasha@gmail.com"};
    string numbers[]={"01232321","01232531","01232621","01223244","01232001"};
    ll ids[]={10,11,12,13,14};


    for(int x=0; x<5; x++){

        cse_mb[x].name = names[x];
        cse_mb[x].id=ids[x];
        cse_mb[x].email=emails[x];
        cse_mb[x].number=numbers[x];
        cse_mb[x].dep=depts[x];

        eee_mb[x].name = names[x];
        eee_mb[x].id=ids[x];
        eee_mb[x].email=emails[x];
        eee_mb[x].number=numbers[x];
        eee_mb[x].dep=depts[x];

        txt_mb[x].name = names[x];
        txt_mb[x].id=ids[x];
        txt_mb[x].email=emails[x];
        txt_mb[x].number=numbers[x];
        txt_mb[x].dep=depts[x];

        swe_mb[x].name = names[x];
        swe_mb[x].id=ids[x];
        swe_mb[x].email=emails[x];
        swe_mb[x].number=numbers[x];
        swe_mb[x].dep=depts[x];
    }

    cse_mem_cnt=5;
    txt_mem_cnt=5;
    swe_mem_cnt=5;
    eee_mem_cnt=5;
}



//-------Add Section---------//
void add(Member mem_of[],int &cnt_for, string get){
    int user_x;



    cout << "\n\n----------------------------------------------------------";
    cout << "\n|";
    cout << "\t\t   File is Opened";
    cout << "\t\t\t |\n";
    cout << "----------------------------------------------------------";



    cout << "\n\n\t Enter Your Name: ";
    getchar();
    getline(cin,mem_of[cnt_for].name);
    cout << "\t Enter Your ID: ";
    cin >> mem_of[cnt_for].id;
    cout << "\t Enter Your Email: ";
    cin >> mem_of[cnt_for].email;
    cout << "\t Enter Your Number: ";
    cin >> mem_of[cnt_for].number;
    cout << "\t Enter Your Department: ";
    cin >> mem_of[cnt_for].dep;




    cout << "\n\n\t\t Add successfully.\n\n";
    cnt_for++;

    if(get=="Admin"){
        cout << "----------------------------------------------------------\n";
        cout << "|\t\t 01. Add Another Student. \t\t |\n";
        cout << "|\t\t 00. Back. \t\t\t\t |";
        cout << "\n----------------------------------------------------------";
        cout << "\n\t\t [>_<] Enter: ";
        cin >>  user_x;

        if(user_x==0 || user_x==0){
            admin();
        }
        else if(user_x==01 || user_x==1){
            add(mem_of,cnt_for,get);
        }
    }

    else if(get=="User"){
        string tt;
        cout << "\t Press Enter to go back:  ";
        getchar();
        getline(cin,tt);
        user();

    }


}

//-------Memberers Details Section---------//
void show(Member mem_of[],int cnt_for,string s){
    string user_x;


    cout << "\n\n-----------------------------------------------------";
    cout << "\n|";
    cout << "\t\t  Memberers Details";
    cout << "\t\t    |\n";
    cout << "-----------------------------------------------------\n\n";

    if(cnt_for==0){
        cout << "\t\t There is NO Member." << endl;
        cout << "\n\n\t Press Enter to go back:  ";
        cin >>  user_x;
        getchar();
        getline(cin,user_x);
        admin();
    }



    for(int x=0; x<cnt_for; x++){
        cout <<"=====================================================" << endl;
        cout << "\t\t Member-0" << x+1 << endl;
        cout <<"=====================================================" << endl;
        cout << "\t\tName: " << mem_of[x].name << endl;
        cout << "\t\tId: " << mem_of[x].id << endl;
        cout << "\t\tEmail: " << mem_of[x].email << endl;
        cout << "\t\tNumber: " << mem_of[x].number << endl;
        cout << "\t\tDepartment: " << mem_of[x].dep << endl;
    }



    cout << "\n\n\t Press Enter to go back:  ";
    getchar();
    getline(cin,user_x);
    admin();
}

// --------find section-----------//
void find(Member mem_of[],int cnt_for,string s){
    cout << endl << endl;
    ll id;
    cout << "\t\tEnter ID NO: ";
    cin >> id;

    ll index=-1;

    for(int x=0; x<cnt_for; x++){
        if(id==mem_of[x].id){
            index=x;
            break;
        }
    }

    if(index==-1){
        cout << "\n\n\t\t Member Not Found\n";
    }
    else{
        cout << endl;
        cout <<"=====================================================" << endl;
        cout << "\t\t Member NO-0" << index+1 << endl;
        cout <<"=====================================================" << endl;
        cout << "\t\tName: " << mem_of[index].name << endl;
        cout << "\t\tId: " << mem_of[index].id << endl;
        cout << "\t\tEmail: " << mem_of[index].email << endl;
        cout << "\t\tNumber: " << mem_of[index].number << endl;
        cout << "\t\tDepartment: " << mem_of[index].dep << endl;
    }

    cout << "\n\n\t Press Enter to go back:  ";
    string tt;
    getchar();
    getline(cin,tt);
    admin();
}


// --------------------Update----------------------//
void update(Member mem_of[],int cnt_for,string get){
    cout << endl << endl;
    ll id,opt;
    cout << "\t\tEnter ID NO: ";
    cin >> id;

    ll index=-1;

    for(int x=0; x<cnt_for; x++){
        if(id==mem_of[x].id){
            index=x;
            break;
        }
    }

    if(index==-1){
        cout << "\n\n\t\t Member Not Found\n";
    }

    else {
        while(1){
            int val;
            cout << "\n\n";
            cout << "\t\t Select Option" << endl;
            cout << "\n----------------------------------------------------------";
            cout << "\n\n";
            cout << "\t\t 1. Update Name" << endl;
            cout << "\t\t 2. Update Id" << endl;
            cout << "\t\t 3. Update Number" << endl;
            cout << "\t\t 4. Update Departmen" << endl;
            cout << "\t\t 5. Update Email" << endl;
            cout << "\t\t 0. Back" << endl;
            cout << "\t\t Enter: ";
            cin >> val;



            if(val==1){
                cout << "\n\n\t Enter Name: ";
                getchar();
                getline(cin,mem_of[index].name);

                cout << "\n\n\t Name Update Successfull\n\n";
            }
            else if(val==2){
                cout << "\t Enter ID: ";
                cin >> mem_of[index].id;
                cout << "\n\n\t ID Update Successfull\n\n";
            }
            else if(val==3){
                cout << "\t Enter Number: ";
                cin >> mem_of[index].number;
                cout << "\n\n\t Number Update Successfull\n\n";
            }
            else if(val==4){
                cout << "\t Enter Department: ";
                cin >> mem_of[index].dep;
                cout << "\n\n\t Department Update Successfull\n\n";
            }
            else if(val==5){
                cout << "\t Enter Email: ";
                cin >> mem_of[index].email;
                cout << "\n\n\t Email Update Successfull\n\n";
            }
            else{
                admin();
            }
        }
    }

    cout << "\n\n\t Press Enter to go back:  ";
    string tt;
    getchar();
    getline(cin,tt);
    admin();


}

// ------------------ Remove ---------------------//
void rmv(Member mem_of[],int &cnt_for,string get){

    cout <<"\n\n";
    ll id;
    cout << "\t\tEnter ID NO: ";
    cin >> id;

    ll index=-1;

    for(int x=0; x<cnt_for; x++){
        if(id==mem_of[x].id){
            index=x;
            break;
        }
    }

    if(index==-1){
        cout << "\n\n\t\t Member Not Found\n";
        cout << "\n\n\t Press Enter to go back:  ";
        string tt;
        getchar();
        getline(cin,tt);
        admin();
    }

    else{
        for(int x=index; x<cnt_for; x++){
            mem_of[x].name = mem_of[x+1].name;
            mem_of[x].id = mem_of[x+1].id;
            mem_of[x].email = mem_of[x+1].email;
            mem_of[x].number = mem_of[x+1].number;
            mem_of[x].dep = mem_of[x+1].dep;
        }
    }
    cnt_for--;
    cout << "\n\n\t Member Removed,";
    cout << "\n\n\t Press Enter to go back:  ";
    string tt;
    getchar();
    getline(cin,tt);
    admin();
}
