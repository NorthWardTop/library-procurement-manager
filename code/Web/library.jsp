<%@ page language="java" import="java.util.*" pageEncoding="utf-8"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>




<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>图书馆图书需求提交页面</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->
   <style>
   .s1{font: normal small-caps normal 18pt Cuorier}
   </style>
  </head>
  
  <body>
  <center>
     <font face="隶书" size=8  >欢迎进入系统！</font>
      <form action="JDBC.jsp" method="post">
      <table border="1" width=50% align="CENTER" bgcolor="#009ACD"  bordercolor="#00000A"  rules=none>
               <tr><td align="center" width="50%"  height=40>&nbsp;</td></tr>
               <tr>
               
               <td align="center" width="50%"  height=40><div align="center" class='s1'>请输入书名：</div></td>
               <td ><div align="left"><input type="text" style="height:30px;width:180px" name="book_name" size='25'></div></td>
               </tr>
               
               <tr>
                 <td align="center" width="50%"  height=40><div align="center" class='s1'> 请输入出版社名：  </div></td>
                 <td><div align="left"> <input type="text" style="height:30px;width:180px" name="press" size='25' ></div><br></td>
                 </tr>
                 <tr><td align="center" width="50%"  height=40>&nbsp;</td></tr>
                 
                  </table>
                 
                 <p align="center">
                 <input type="submit" style="height:40px; width:100px" value="提交" >  
                 </p>
              
               
       
        
         </form>
        </center>       
    
  
  </body>
</html>
