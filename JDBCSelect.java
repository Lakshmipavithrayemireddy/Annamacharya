import java.sql.*;
class JDBCSelect{
public static void main(String[] args){
try{
Class.forName("oracle.jdbc.driver.OracleDriver");
Connection con=
 DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:XE","system","jkc");
Statement stmt=con.createStatement();
String sQuery="select *from Annamacharya3";
ResultSet rs=stmt.executeQuery(sQuery);
int i=1;
while(rs.next()){
System.out.println("student:"+i);
System.out.println("********************");
 System.out.print("Rollno:"+rs.getString("rnum")+"\t");
 System.out.print("Name:"+rs.getString("name")+"\t");
 System.out.print("Branchh:"+rs.getString("branch")+"\n");
i++;
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
