
// Function to test if input is lower case (Scalar) or upper case (Array)
bool whatCase(char name, bool flag){
    if(name >= 'A' && name <= 'Z')
        flag = 0; // This is an Array
    else if(name >= 'a' && name <= 'z')
        flag = 1; // This is a Scalar
return flag;
}

// Help function
void printhelp(void){
    printf("\nAvailable commands:\n");
    printf("    help: show this message\n");
    printf("    set <var> <value>: Set variable <var> to value <value>, e.g. \"set a 3.14\"\n");
    printf("    sin <res> <var>: Calculates the sin values of <var> and stores in <res>\n");
    printf("    show <var>: Shows a scalar or array variable\n");
    printf("    showFile <filename>: Show the file <filename>\n");
    printf("    deleteFile <filename> Deletes the file <filename>\n");
    printf("    importCSV <var> <filename>: Imports variables from the CSV file <filename> and stores in array <var>\n");
    printf("    exportCSV <filename>: Saves a variable into the CSV file <filename>\n");
    printf("    exportMAT <filename>: Saves a variable into the Matlab file <filename>\n");
    printf("    exportJSON <filename>: Saves a variable into the JSON file <filename>\n");
    printf("    exportXML <filename>: Saves a variable into the XML file <filename>\n");
    printf("    quit: exit this application\n");
    printf("    exit: exit this application\n");
    printf("    exit x: exit this application with return code x\n");
    }



// change int to double
int set(char name, int v){
    scalarFlag = whatCase(name, scalarFlag);
    if(scalarFlag == 0){

    } else if(scalarFlag == 1){
        printf("outside switch");
        switch(name)
        {
            case 'a':
            a = 3;
            printf("a = %i", a);
                break;

            case 'b':

                break;

            case 'c':

                break;

            case 'r':

                break;

            case 'x':

                break;

            case 'y':

                break;

            default:
                printf("\nSomething went wrong...(set)\n");
                return 0;
        }
    }
}

//int clear(char name){
//
//return
//}
//
//int show(char name){
//
//}
//
//int array(char name, double start, double stop){
//
//}

