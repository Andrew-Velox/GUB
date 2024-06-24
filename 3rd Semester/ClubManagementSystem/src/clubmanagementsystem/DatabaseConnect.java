
package clubmanagementsystem;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DatabaseConnect {
    
  
    private static final String url = "jdbc:mysql://localhost:3306/studentbd";
    private static final String user = "v3";
    private static final String password = "velox";

    public static Connection getConnection() throws SQLException {
        return DriverManager.getConnection(url, user, password);
    }


}
