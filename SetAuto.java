import java.sql.*;
public class SetAuto{
public static void main(String args[]) throws Exception{
//Step 2:Registering with JDBC driver
Class.forName("oracle.jdbc.driver.OracleDriver");
//Step 3:Getting Connection object
Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:XE","system","jkc");
con.setAutoCommit(false);
//Step 4:Create Statement object
Statement stmt=con.createStatement();
String uQuery="update Annamacharya3 set branch='cse' where rnum='104'";
//Step 5:SQL Query Execution
int i=stmt.executeUpdate(uQuery);
con.commit();//con.rollback();
if(i>0)
System.out.println(i+"Rows updated");
}
}
