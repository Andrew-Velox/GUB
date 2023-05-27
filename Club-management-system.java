import java.util.Scanner;

abstract class Club{

    String clubName, presidentName;

    int totalExecutiveMember,totalMember;

    public abstract void addMemner();

    public abstract void deleteMemner();

    public abstract void display();

}

class ComputerClub extends Club{

    private String previousProgram;

    private String upComingProgram;

    ComputerClub(String clubName,String presidentName,int totalExecutiveMember,int totalMember ){

        this.clubName = clubName;

        this.presidentName = presidentName;

        this.totalExecutiveMember = totalExecutiveMember;

        this.totalMember = totalMember;

    }

    public void addMemner(){

        System.out.println("Under Constraction");

    }

    public void deleteMemner(){

        System.out.println("Under Constraction");

    }

    public void setPreviousProgram(String previousProgram) {

        this.previousProgram = previousProgram;

    }

    public void setUpComingProgram(String upComingProgram) {

        this.upComingProgram = upComingProgram;

    }

    @Override

    public void display() {

        System.out.println("<************WELCOME TO COMPUTER CLUB************>");

        System.out.println("Club Name : "+clubName);

        System.out.println("President Name : "+presidentName);

        System.out.println("Total Executive Member : "+totalExecutiveMember);

        System.out.println("Total General Member : "+totalMember);

        System.out.println("Previous Program : "+previousProgram);

        System.out.println("UpComing Program : "+upComingProgram);

        System.out.println();

    }

}

class EEE_Club extends Club{

    private String previousProgram;

    private String upComingProgram;

    EEE_Club(String clubName,String presidentName,int totalExecutiveMember,int totalMember ){

        this.clubName = clubName;

        this.presidentName = presidentName;

        this.totalExecutiveMember = totalExecutiveMember;

        this.totalMember = totalMember;

    }

    public void addMemner(){

        System.out.println("Under Constraction");

    }

    public void deleteMemner(){

        System.out.println("Under Constraction");

    }

    public void setPreviousProgram(String previousProgram) {

        this.previousProgram = previousProgram;

    }

    public void setUpComingProgram(String upComingProgram) {

        this.upComingProgram = upComingProgram;

    }

    @Override

    public void display() {

        System.out.println("<************WELCOME TO EEE CLUB************>");

        System.out.println("Club Name : "+clubName);

        System.out.println("President Name : "+presidentName);

        System.out.println("Total Executive Member : "+totalExecutiveMember);

        System.out.println("Total General Member : "+totalMember);

        System.out.println("Previous Program : "+previousProgram);

        System.out.println("UpComing Program : "+upComingProgram);

        System.out.println();

    }

}

class TextileCLub extends Club{

    private String previousProgram;

    private String upComingProgram;

    TextileCLub(String clubName,String presidentName,int totalExecutiveMember,int totalMember ){

        this.clubName = clubName;

        this.presidentName = presidentName;

        this.totalExecutiveMember = totalExecutiveMember;

        this.totalMember = totalMember;

    }

    public void addMemner(){

        System.out.println("Under Constraction");

    }

    public void deleteMemner(){

        System.out.println("Under Constraction");

    }

    public void setPreviousProgram(String previousProgram) {

        this.previousProgram = previousProgram;

    }

    public void setUpComingProgram(String upComingProgram) {

        this.upComingProgram = upComingProgram;

    }

    @Override

    public void display() {

        System.out.println("<************WELCOME TO TEXTILE CLUB************>");

        System.out.println("Club Name : "+clubName);

        System.out.println("President Name : "+presidentName);

        System.out.println("Total Executive Member : "+totalExecutiveMember);

        System.out.println("Total General Member : "+totalMember);

        System.out.println("Previous Program : "+previousProgram);

        System.out.println("UpComing Program : "+upComingProgram);

        System.out.println();

    }

}

class CulturalClub extends Club{

    private String previousProgram;

    private String upComingProgram;

    CulturalClub(String clubName,String presidentName,int totalExecutiveMember,int totalMember ){

        this.clubName = clubName;

        this.presidentName = presidentName;

        this.totalExecutiveMember = totalExecutiveMember;

        this.totalMember = totalMember;

    }

    public void addMemner(){

        System.out.println("Under Constraction");

    }

    public void deleteMemner(){

        System.out.println("Under Constraction");

    }

    public void setPreviousProgram(String previousProgram) {

        this.previousProgram = previousProgram;

    }

    public void setUpComingProgram(String upComingProgram) {

        this.upComingProgram = upComingProgram;

    }

    @Override

    public void display() {

        System.out.println("<************WELCOME TO CULTURAL CLUB************>");

        System.out.println("Club Name : "+clubName);

        System.out.println("President Name : "+presidentName);

        System.out.println("Total Executive Member : "+totalExecutiveMember);

        System.out.println("Total General Member : "+totalMember);

        System.out.println("Previous Program : "+previousProgram);

        System.out.println("UpComing Program : "+upComingProgram);

        System.out.println();

    }

}

public class Main {

    public static void main(String[] args) {

        int option = 0;

        Scanner input = new Scanner(System.in);

        while (true) {

            System.out.println("<--------------Select your option----------------->");

            System.out.println("1. Admin panel");

            System.out.println("2. User panel");

            option = input.nextInt();

            if (option == 1) {

                System.out.println("Under Constraction");

//                break;

            } else if (option == 2) {

                while (true) {

                    System.out.println("<-------------Select Your Club Which you Want to Know------------->");

                    System.out.println("1. Computer Club");

                    System.out.println("2. EEE Club");

                    System.out.println("3. Textile Club");

                    System.out.println("4. Cultural Club");

                    System.out.println("5. join Club");

                    System.out.println("6. Want to Exit");

                    int chose = input.nextInt();

                    if (chose == 1) {

                        ComputerClub club1 = new ComputerClub("Computer club", "Shamim", 25, 100);

                        club1.setPreviousProgram("ICPC Program");

                        club1.setUpComingProgram("Coming Soon");

                        club1.display();

//                            break

                    } else if (chose == 2) {

                        EEE_Club club2 = new EEE_Club("EEE club", "Araf", 25, 100);

                        club2.setPreviousProgram("Robot Program");

                        club2.setUpComingProgram("Coming Soon");

                        club2.display();

//                            break;

                    } else if (chose == 3) {

                        TextileCLub club2 = new TextileCLub("Textile club", "XOXO", 25, 100);

                        club2.setPreviousProgram("XXXX Program");

                        club2.setUpComingProgram("Coming Soon");

                        club2.display();

//                            break;

                    } else if (chose == 4) {

                        CulturalClub club2 = new CulturalClub("Cultural club", "Fattah", 25, 100);

                        club2.setPreviousProgram("Green Fest Program");

                        club2.setUpComingProgram("Coming Soon");

                        club2.display();

//                            break;

                    }

                    else if(chose==5){

                        System.out.println("Under-construction");

                    }

                    else if (chose == 6) {

                        return;

                    } else {

                        System.out.println("Wrong Option");

                    }

                }

            }

        }

    }

}


