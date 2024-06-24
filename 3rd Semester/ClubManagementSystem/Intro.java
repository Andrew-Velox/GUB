
package clubmanagementsystem;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;


public class Intro extends JFrame {
    JButton AdminB,UserB,ExitB;
    JLabel usrLabel, passLabel, wc;
    Container con;
    Font fnt;
    
    public Intro(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(100, 50, 450, 350);
        setLocation(400, 200);
        setTitle("Select Option");
        
        con = this.getContentPane();
        con.setLayout(null);
        con.setBackground(Color.GRAY);
        fnt = new Font("Tahoma", Font.PLAIN, 18);
        
        //Login Now---------------------
        wc = new JLabel("Which Panel You Want to Go?");
        wc.setBounds(0, 00, 450, 80);
        wc.setFont(new Font(null, Font.BOLD, 25));
//        wc.setFont(new Font(null, Font.PLAIN, 25));
        wc.setOpaque(true);
        wc.setBackground(Color.LIGHT_GRAY);
        wc.setHorizontalAlignment(SwingConstants.CENTER);
        con.add(wc);
        
        
        
        
        AdminB = new JButton("Admin Panel");
        AdminB.setBounds(110, 100, 190, 40);
//        AdminB.setBackground(Color.gray);
//        AdminB.setForeground(Color.white);
        AdminB.setFont(new Font("Tahoma", Font.BOLD, 18));
        AdminB.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    Login login = new Login();
                    login.setVisible(true);
                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(AdminB);
        
        
        UserB = new JButton("User Panel");
        UserB.setBounds(110, 150, 190, 40);
//        UserB.setBackground(Color.gray);
//        UserB.setForeground(Color.white);
        UserB.setFont(new Font("Tahoma", Font.BOLD, 18));
        UserB.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    User user = new User();
                    user.setVisible(true);
                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(UserB);
        
        
        ExitB = new JButton("Exit");
        ExitB.setBounds(110, 200, 190, 40);
//        UserB.setBackground(Color.gray);
//        UserB.setForeground(Color.white);
        ExitB.setFont(new Font("Tahoma", Font.BOLD, 18));
        ExitB.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try {
                    
                    dispose();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(ExitB);
        
        
    }
    
    

    
}
