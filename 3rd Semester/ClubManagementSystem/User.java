
package clubmanagementsystem;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class User extends JFrame {

    static void addActionListener(ActionListener actionListener) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
    JButton CSE_Club,EEE_Club,Textile_Club,Cultural_Club,Join_club,Back;
    JLabel wc;
    Container con;
    Font fnt;
    
    
    
    
    
    
     private void showClubInfo(String clubName, String presidentName, int totalExecutiveMember, int totalMember, String previousProgram, String upComingProgram) {
//        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JFrame infoFrame = new JFrame("Club Information");
        infoFrame.setSize(400, 400);
        infoFrame.setLocationRelativeTo(null);
        infoFrame.setLayout(new BorderLayout());

        JPanel infoPanel = new JPanel();
        infoPanel.setLayout(new BorderLayout());
        infoPanel.setBackground(Color.LIGHT_GRAY); // Set background color

        JTextArea textArea = new JTextArea();
        textArea.setEditable(false);
        textArea.setFont(new Font("Monospaced", Font.PLAIN, 14));
        textArea.setBackground(Color.WHITE); // Set background color
        textArea.setOpaque(true);

        String info = "\n  <----------WELCOME TO " + clubName + "---------->\n\n"
                    + "\tClub Name: " + clubName + "\n"
                    + "\tPresident Name: " + presidentName + "\n"
                    + "\tTotal Executive Member: " + totalExecutiveMember + "\n"
                    + "\tTotal General Member: " + totalMember + "\n"
                    + "\tPrevious Program: " + previousProgram + "\n"
                    + "\tUpcoming Program: " + upComingProgram + "\n";

        textArea.setText(info);
        infoFrame.add(textArea, BorderLayout.CENTER);

        JButton backButton = new JButton("Exit");
        backButton.setFont(new Font("Arial", Font.BOLD, 18));
        backButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                infoFrame.dispose();
            }
        });

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(backButton);
        infoFrame.add(buttonPanel, BorderLayout.SOUTH);

        infoFrame.setVisible(true);
    }
    
    public User(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(150, 150, 500, 550);
        setLocation(400, 100);
        setTitle("User Panel");
    
        con = this.getContentPane();
        con.setLayout(null);
        con.setBackground(Color.GRAY);
        fnt = new Font("Tahoma", Font.PLAIN, 18);
        
        //User---------------------
        wc = new JLabel("Select Which Club You Want to Know");
        wc.setBounds(0,0, 500, 100);
        wc.setFont(new Font(null, Font.BOLD, 25));
        wc.setOpaque(true);
        wc.setBackground(Color.LIGHT_GRAY);
        wc.setHorizontalAlignment(SwingConstants.CENTER);
        con.add(wc);
        
        //cse-----------
        CSE_Club = new JButton("CSE CLUB");
        CSE_Club.setBounds(120, 130, 250, 40);
        CSE_Club.setFont(new Font("Tahoma", Font.BOLD, 18));
        CSE_Club.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    showClubInfo("CSE CLUB", "Ronaldo", 5, 50, "IDPC Program", "AI Workshop");
//                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(CSE_Club);
        
        //eee-----------
        EEE_Club = new JButton("EEE CLUB");
        EEE_Club.setBounds(120, 185, 250, 40);
        EEE_Club.setFont(new Font("Tahoma", Font.BOLD, 18));
        EEE_Club.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    showClubInfo("EEE CLUB", "Ibrahm", 5, 50, "Robotics Program", "EEE Workshop");
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(EEE_Club);
        
        
        //textile-----------
        Textile_Club = new JButton("Textile CLUB");
        Textile_Club.setBounds(120, 240, 250, 40);
        Textile_Club.setFont(new Font("Tahoma", Font.BOLD, 18));
        Textile_Club.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    showClubInfo("Textile CLUB", "Siam", 5, 50, "VVV Program", "Coming Soon");
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(Textile_Club);
        
        //cultural-----------
        Cultural_Club = new JButton("Cultural CLUB");
        Cultural_Club.setBounds(120, 295, 250, 40);

        Cultural_Club.setFont(new Font("Tahoma", Font.BOLD, 18));
        Cultural_Club.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    showClubInfo("Cultural CLUB", "Shamim", 5, 50, "Green Fest", "Coming Soon");
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(Cultural_Club);
        
        //Join-----------
        Join_club = new JButton("Join CLUB");
        Join_club.setBounds(120, 350, 250, 40);

        Join_club.setFont(new Font("Tahoma", Font.BOLD, 18));
        Join_club.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    
                    Join join = new Join("User");
                    join.setVisible(true);
                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(Join_club);
        
        
        //Back-----------
        Back = new JButton("Back");
        Back.setBounds(140, 405, 200, 40);

        Back.setFont(new Font("Tahoma", Font.BOLD, 18));
        Back.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    Intro intro = new Intro();
                    intro.setVisible(true);
                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(Back);
        
        
    }
}
