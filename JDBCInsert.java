import java.sql.*;
class JDBCinsert{
public static void main(String[] args){
try{
Class.forName("oracle.jdbc.driver.OracleDriver");
Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:XE","system","jkc");
Statement stmt=con.createStatement();
String iQuery="insert into Annamacharya3(rnum,name,branch)values('103','Lakshmi Kanth','Cloud Specialist')";
int i=stmt.executeUpdate(iQuery);
if(i>0){
System.out.println(i+" record inserted");
}
else{
 System.out.println("No Record ineserted,Insert OperationUnsuccessful");
 }
}
 catch(ClassNotFoundException e){
e.printStackTrace();
}
 catch(SQLException e){
 e.printStackTrace();
}
}
}