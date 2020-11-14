proc print data=sashelp.class;
run;

data sam(where=(gender='F') rename=(sex=gender name=fname a=age) keep= sex name a);
set sashelp.class;
a=put(age,2.);
run;

proc contents
data=sam varnum;
run;

data _NULL_;
set sam;
Age= put(Age,2.);
run;

proc univariate
data=sashelp.class plot;
run;

