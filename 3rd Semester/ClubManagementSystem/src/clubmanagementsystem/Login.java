package clubmanagementsystem;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Login extends JFrame implements ActionListener {

    String usrnm, pass;
    JLabel usrLabel, passLabel, wc;
    JTextField tf;
    JPasswordField pf;
    JButton logIn;
    Container con;
    Font fnt;

    Login() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(100, 100, 459, 400);
        setLocation(300, 200);
        setTitle("Login");

        con = this.getContentPane();
        con.setLayout(null);
        con.setBackground(Color.WHITE);
        fnt = new Font("Arial", Font.PLAIN, 18);

        // Login Now
        wc = new JLabel("Login First");
        wc.setBounds(150, 20, 150, 50);
        wc.setFont(new Font(null, Font.PLAIN, 30));
        con.add(wc);

        // Username
        usrLabel = new JLabel("Username: ");
        usrLabel.setBounds(50, 100, 150, 50);
        usrLabel.setFont(fnt);
        con.add(usrLabel);

        tf = new JTextField();
        tf.setBounds(170, 110, 200, 40);
        tf.setFont(fnt);
        con.add(tf);

        // Password
        passLabel = new JLabel("Password: ");
        passLabel.setBounds(50, 155, 150, 50);
        passLabel.setFont(fnt);
        con.add(passLabel);

        pf = new JPasswordField();
        pf.setBounds(170, 160, 200, 40);
        pf.setFont(fnt);
        pf.setEchoChar('*');
        con.add(pf);

        // Button
        logIn = new JButton("Login");
        logIn.setBounds(200, 230, 120, 40);
        logIn.setFont(fnt);
        logIn.addActionListener(this);
        con.add(logIn);
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        if (ae.getSource() == logIn) {
            usrnm = tf.getText();
            pass = String.valueOf(pf.getPassword());

            if (usrnm.equals("v3") && pass.equals("123")) {
                Admin menuPage = new Admin();
                menuPage.setVisible(true);
                dispose();
            } else if (usrnm.isEmpty() || pass.isEmpty()) {
                JOptionPane.showMessageDialog(null, "Please enter the Username or Password :(");
            } else {
                JOptionPane.showMessageDialog(null, "Incorrect Username or Password :(");
            }
        }
    }

}
