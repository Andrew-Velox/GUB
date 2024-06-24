package clubmanagementsystem;

import javax.swing.*;
import java.awt.*;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Vector;

public class View extends JFrame {
    private JTable table;
    private JButton backButton;

    public View(String title) {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(150, 150, 600, 400);
        setLocation(400, 100);
        setTitle(title);

        Container con = this.getContentPane();
        con.setLayout(new BorderLayout());

        try (Connection connection = DatabaseConnect.getConnection()) {
            Statement statement = connection.createStatement();
            String sql = "SELECT club, name, student_id, email, phone FROM students";
            ResultSet resultSet = statement.executeQuery(sql);

            Vector<Vector<Object>> data = new Vector<>();
            Vector<Object> columnNames = new Vector<>();
            columnNames.add("Club");
            columnNames.add("Name");
            columnNames.add("ID");
            columnNames.add("Email");
            columnNames.add("Phone");

            while (resultSet.next()) {
                Vector<Object> row = new Vector<>();
                row.add(resultSet.getString("club"));
                row.add(resultSet.getString("name"));
                row.add(resultSet.getString("student_id"));
                row.add(resultSet.getString("email"));
                row.add(resultSet.getString("phone"));
                data.add(row);
            }

            table = new JTable(data, columnNames);
            JScrollPane scrollPane = new JScrollPane(table);
            con.add(scrollPane, BorderLayout.CENTER);

        } catch (SQLException e) {
            e.printStackTrace();
            JOptionPane.showMessageDialog(this, "Error: " + e.getMessage());
        }

        backButton = new JButton("Back");
        backButton.addActionListener(e -> {
            Admin admin = new Admin();
            admin.setVisible(true);
            dispose();
        });

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(backButton);
        con.add(buttonPanel, BorderLayout.SOUTH);
    }

    public static void main(String[] args) {
        EventQueue.invokeLater(() -> {
            View view = new View("View Students");
            view.setVisible(true);
        });
    }
}
