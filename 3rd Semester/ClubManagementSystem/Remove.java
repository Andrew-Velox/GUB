package clubmanagementsystem;

import java.awt.*;
import javax.swing.*;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class Remove extends JFrame {

    private JTextField idField;
    private JButton deleteButton, backButton;
    JLabel wc;
    Font fnt;

    public Remove(String title) {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(150, 150, 400, 200);
        setLocation(400, 100);
        setTitle(title);

        Container con = this.getContentPane();
        con.setLayout(null);  // Use null layout for absolute positioning
        con.setBackground(Color.LIGHT_GRAY);

        fnt = new Font("Arial", Font.PLAIN, 18);

        wc = new JLabel("Student ID:");
        wc.setBounds(50, 30, 100, 30);
        wc.setFont(fnt);
        con.add(wc);

        idField = new JTextField();
        idField.setBounds(160, 30, 180, 30);
        idField.setFont(fnt);
        con.add(idField);

        deleteButton = new JButton("Delete");
        deleteButton.setBounds(50, 100, 120, 40);
        deleteButton.setFont(fnt);
        deleteButton.addActionListener(e -> deleteStudent());
        con.add(deleteButton);

        backButton = new JButton("Back");
        backButton.setBounds(220, 100, 120, 40);
        backButton.setFont(fnt);
        backButton.addActionListener(e -> {
            Admin admin = new Admin();
            admin.setVisible(true);
            dispose();
        });
        con.add(backButton);
    }

    private void deleteStudent() {
        String studentId = idField.getText();

        String sql = "DELETE FROM students WHERE student_id = ?";

        try (Connection con = DatabaseConnect.getConnection();
             PreparedStatement pst = con.prepareStatement(sql)) {

            pst.setString(1, studentId);
            int rowsAffected = pst.executeUpdate();

            if (rowsAffected > 0) {
                JOptionPane.showMessageDialog(this, "Student deleted successfully!");
            } else {
                JOptionPane.showMessageDialog(this, "Student ID not found!");
            }

        } catch (SQLException e) {
            e.printStackTrace();
            JOptionPane.showMessageDialog(this, "Error: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        EventQueue.invokeLater(() -> {
            Remove remove = new Remove("Remove Student");
            remove.setVisible(true);
        });
    }
}
