# BillTracker

/*
1st menu:

1.Add a bill
2.Delete a bill
3.Show a bill
4.Show all bills
5.Quit

*/


//Read a file
//Initialize an array of Bill and populate date from the file
//Construct the main menu
//Construct detailed functions
//User input and validation
//Saving file after done


Example to split a string

std::string s = "scott>=tiger>=mushroom";
std::string delimiter = ">=";

size_t pos = 0;
std::string token;
while ((pos = s.find(delimiter)) != std::string::npos) {
    token = s.substr(0, pos);
    std::cout << token << std::endl;
    s.erase(0, pos + delimiter.length());
}
std::cout << s << std::endl;

Output:
scott
tiger
mushroom
