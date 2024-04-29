impoer java.sql.*;
public class SetAuto
{
	public static void  main(string aegs[])thoer exception
	{
		class.froname("orecale.jdbc.driver.orcaledriver");
		connection
		con=drivermanager.getconnection("jdbc:oracle:thin:@localhost:1521:xe","system,"admin");
		con.setAutocommit(false);
		statement stmt=con.createstatement();
		string uquery="update aitsgoogle set empdes='product owner'
		where empid='aitsgoogle5t1'";
		int i=stsmt query executeupdatae(uquery);
		con.commit();
		if(i>0)
			system.out.println(i+"rows update");
	}
}
