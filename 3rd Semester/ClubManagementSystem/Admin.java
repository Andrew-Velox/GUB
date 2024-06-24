package clubmanagementsystem;

import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Admin extends JFrame {

    JButton Add_st,rmv_st,view_st,Back;
    JLabel wc;
    Container con;
    Font fnt;



    public Admin() {
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(150, 150, 500, 450);
        setLocation(400, 100);
        setTitle("Admin Panel");
    
        con = this.getContentPane();
        con.setLayout(null);
        con.setBackground(Color.GRAY);
        fnt = new Font("Arial", Font.PLAIN, 18);
        
        //menu---------------------
        wc = new JLabel("Select Your Option");
        wc.setBounds(0,0, 500, 70);
        wc.setFont(new Font(null, Font.BOLD, 25));
        wc.setOpaque(true);
        wc.setBackground(Color.LIGHT_GRAY);
        wc.setHorizontalAlignment(SwingConstants.CENTER);
        con.add(wc);
        
        //add-----------
        Add_st = new JButton("Add Student");
        Add_st.setBounds(120, 110, 250, 50);
        Add_st.setFont(new Font("Tahoma", Font.BOLD, 18));
        Add_st.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                   Join join = new Join("Admin");
                   join.setVisible(true);
                   dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(Add_st);
        
        //rmv-----------
        rmv_st = new JButton("Remove Student");
        rmv_st.setBounds(120, 175, 250, 50);
        rmv_st.setFont(new Font("Tahoma", Font.BOLD, 18));
        rmv_st.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    Remove remove = new Remove("Remove Member");
                    remove.setVisible(true);
                    dispose();
                    
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(rmv_st);
        
        
        //view-----------
        view_st = new JButton("View Studens");
        view_st.setBounds(120, 240, 250, 50);
        view_st.setFont(new Font("Tahoma", Font.BOLD, 18));
        view_st.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    View view = new View("View");
                    view.setVisible(true);
                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(view_st);
        
        

        
        //Back-----------
        Back = new JButton("Back");
        Back.setBounds(150, 310, 180, 50);

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
