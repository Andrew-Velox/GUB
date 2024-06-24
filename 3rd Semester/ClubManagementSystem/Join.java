package clubmanagementsystem;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;


public class Join extends JFrame {

    private JLabel clubLabel, nameLabel, idLabel, emailLabel, phoneLabel;
    private JComboBox<String> clubComboBox;
    private JTextField nameField, idField, emailField, phoneField;
    private JButton submitButton, backButton;


    public Join(String get) {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(150, 150, 500, 400);
        setLocation(400, 100);
        setTitle("Join Club");

        Container con = this.getContentPane();
        con.setLayout(null);
        con.setBackground(Color.LIGHT_GRAY);
        Font fnt = new Font("Arial", Font.PLAIN, 18);

        // Club Label and ComboBox
        clubLabel = new JLabel("Select Club:");
        clubLabel.setBounds(50, 50, 150, 30);
        clubLabel.setFont(fnt);
        con.add(clubLabel);

        String[] clubs = { "CSE Club", "EEE Club", "Textile Club", "Cultural Club" };
        clubComboBox = new JComboBox<>(clubs);
        clubComboBox.setBounds(200, 50, 200, 30);
        clubComboBox.setFont(fnt);
        con.add(clubComboBox);

        // Name Label and TextField
        nameLabel = new JLabel("Name:");
        nameLabel.setBounds(50, 100, 150, 30);
        nameLabel.setFont(fnt);
        con.add(nameLabel);

        nameField = new JTextField();
        nameField.setBounds(200, 100, 200, 30);
        nameField.setFont(fnt);
        con.add(nameField);

        // ID Label and TextField
        idLabel = new JLabel("ID:");
        idLabel.setBounds(50, 150, 150, 30);
        idLabel.setFont(fnt);
        con.add(idLabel);

        idField = new JTextField();
        idField.setBounds(200, 150, 200, 30);
        idField.setFont(fnt);
        con.add(idField);

        // Email Label and TextField
        emailLabel = new JLabel("Email:");
        emailLabel.setBounds(50, 200, 150, 30);
        emailLabel.setFont(fnt);
        con.add(emailLabel);

        emailField = new JTextField();
        emailField.setBounds(200, 200, 200, 30);
        emailField.setFont(fnt);
        con.add(emailField);

        // Phone Label and TextField
        phoneLabel = new JLabel("Phone:");
        phoneLabel.setBounds(50, 250, 150, 30);
        phoneLabel.setFont(fnt);
        con.add(phoneLabel);

        phoneField = new JTextField();
        phoneField.setBounds(200, 250, 200, 30);
        phoneField.setFont(fnt);
        con.add(phoneField);

        // Submit Button
        submitButton = new JButton("Submit");
        submitButton.setBounds(150, 300, 100, 40);
        submitButton.setFont(new Font("Arial", Font.BOLD, 18));
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                String club = (String) clubComboBox.getSelectedItem();
                String name = nameField.getText();
                String id = idField.getText();
                String email = emailField.getText();
                String phone = phoneField.getText();

                // Add the student to the list
                Students student = new Students(club, name, id, email, phone);
                submitForm();

                // Show confirmation
                JOptionPane.showMessageDialog(null, "Successfully joined the " + club);

                // Clear the fields
                nameField.setText("");
                idField.setText("");
                emailField.setText("");
                phoneField.setText("");
                
            }
        });
        con.add(submitButton);

        // Back Button
        backButton = new JButton("Back");
        backButton.setBounds(270, 300, 100, 40);
        backButton.setFont(new Font("Arial", Font.BOLD, 18));
        backButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent ae) {
                try{
                    if(get=="User"){
                        User userPanel = new User();
                        userPanel.setVisible(true);
                        dispose();
                    }
                    else if(get=="Admin"){
                        Admin admin = new Admin();
                        admin.setVisible(true);
                        dispose();
                    }
                }
                catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        con.add(backButton);
    }
    
    private void submitForm() {
        String club = (String) clubComboBox.getSelectedItem();
        String name = nameField.getText();
        String student_id = idField.getText();
        String email = emailField.getText();
        String phone = phoneField.getText();

        String sql = "INSERT INTO students (club, name, email, phone, student_id) VALUES (?, ?, ?, ?, ?)";

        try (Connection con = DatabaseConnect.getConnection();
             PreparedStatement pst = con.prepareStatement(sql)) {

            pst.setString(1, club);
            pst.setString(2, name);
            pst.setString(3, email);
            pst.setString(4, phone);
            pst.setString(5, student_id);

            pst.executeUpdate();
            JOptionPane.showMessageDialog(this, "Student details added successfully!");

        } catch (SQLException e) {
            e.printStackTrace();
            JOptionPane.showMessageDialog(this, "Error: " + e.getMessage());
        }
    }



}
