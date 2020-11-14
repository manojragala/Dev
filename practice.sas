proc print
data=sashelp.prdsale(firstobs=75 obs=90);
run;

*Proc Means gives out N,mean,std dev,max,min for the variables specified;
proc means
data=sashelp.prdsale;
var actual predict;
run;

data income;
input income expenses;
datalines;
1000 700
2000 500
11000 10000
;
run;

proc print
data=income;
run;

proc print
data=sashelp.air;
run;

proc print
data=sashelp.buy;run
;

/*
 * SAS dataset consists of 2  main portions 
 * 1)Descriptive portion of the dataset (Metadata fo the dataset,description of variables etc)
 * 2)Data portion of the dataset (Data in tabular form)
 * Contents procedure (Proc Contents) can be used to get the metadata.
 */

proc contents
data=sashelp.air;
run;

libname mydata '/folders/myfolders';

data mydata.airset;
	set sashelp.air;
run;

data mydata.income;
input income expense;*input is used to declare the attributes or variables of the dataset;
datalines;
4500 2000
5000 2300
7890 2810
8900 5400
2300 2000
;
run;
















