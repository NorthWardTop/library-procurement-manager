<%@ page language="java" import="java.util.*" pageEncoding="UTF-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>
<%@ page contentType="text/html; charset=utf-8" %> 
<%@ page language="java" %> 
<%@ page import="com.mysql.jdbc.Driver" %> 
<%@ page import="java.sql.*" %> 

<% 
//加载驱动程序 
String driverName="com.mysql.jdbc.Driver"; 

//数据库信息
------------------------------------------
String userName="root"; 
//密码 
String userPasswd="lyh2o16"; 
//数据库名 
String dbName="library-manager"; 
//表名 
String tableName="Demand"; 

String url="jdbc:mysql://123.206.82.143/"+dbName+"?user="+userName+"&password="+userPasswd+"&characterEncoding=utf-8"; 
Class.forName("com.mysql.jdbc.Driver").newInstance(); 
Connection conn=DriverManager.getConnection(url); 
 
String sql="SELECT * FROM "+tableName; 
---------------------------------------------

//String sql="insert into need(book_name,press)values(?,?)";
PreparedStatement stmp = conn.prepareStatement(sql);//就是创建了一个对象然后去通过对象调用executeQuery方法来执行sql语句。
request.setCharacterEncoding("UTF-8");
String name=request.getParameter("book_name");
String press=request.getParameter("press");
stmp.setString(1,name);
stmp.setString(2,press);
int n=stmp.executeUpdate(); 
if(n==1){ %> 数据插入操作成功！<%
                
} %><%else{ %>数据插入操作失败!<%}
if(stmp!=null){
     stmp.close();
}
if(conn!=null){
     conn.close();
}
%>

     <br>
  </body>
</html>
