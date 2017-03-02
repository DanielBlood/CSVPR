CSVPR (CSV Parser) written in C++
------------------
A simple CSV Parser written in C++

Example
-------
<pre>
csv_parser csv("example.txt");

//getting values to row number and column number.
string value = csv.get_value(3,4);

//Getting a particular row in the file
string line = csv.get_line(3);

// getting number of fields in a row.
int total_fields = csv.fields(csv.get_line(3));
</pre>
