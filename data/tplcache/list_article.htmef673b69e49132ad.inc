<?php
$z[0]=Array("field","",338,357);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",358,384);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",425,454);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",494,552);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1250,1285);
$z[4][4]=array();
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1342,1364);
$z[5][4]=array();
$z[5][4]['name']="position";
$z[6]=Array("list","\r\n        <div class=\"blog-item\">\r\n          <div class=\"thum\"> <img src=\"[field:litpic/]\"> </div>\r\n          <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n          <div class=\"info\"> <span>类目:<a href=\"[field:typeurl/]\" style=\"text-decoration:none; color:#000\">[field:typename/]</a></span> <span class=\"time\">[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span> </div>\r\n          <div class=\"j_content content \">[field:description function='cn_substr(@me,250)'/]...</div>\r\n          <div class=\"readmore\"><a href=\"[field:arcurl/]\">[阅读全文]</a></div>\r\n        </div>\r\n        ",1473,2112);
$z[6][4]=array();
$z[6][4]['pagesize']="10";
$z[7]=Array("pagelist","",2177,2234);
$z[7][4]=array();
$z[7][4]['listitem']="index,end,pageno";
$z[7][4]['listsize']="1";
$z[8]=Array("channel","\r\n      <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n      ",2426,2611);
$z[8][4]=array();
$z[8][4]['type']="son";
$z[8][4]['currentstyle']="<li><a href='~typelink~' class='on'>~typename~</a></li>";
$z[9]=Array("include","",2642,2677);
$z[9][4]=array();
$z[9][4]['filename']="foot.htm";

?>