#include <stdio.h>
#include <stdbool.h> // header file for boolean header file
// boolean data type = True / False

int main()
{
    // What is boolean data type
    bool a = true;

    if (a == true)
        printf("참\n");
    else
        printf("거짓\n");
    
    // size of boolean data type 
    printf("\n%d\n", sizeof(int));
    printf("%d\n", sizeof(bool));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(long double));
    printf("%d\n", sizeof(long long));

    // boolean data type & logical operator
    printf("\n%d\n", true && true);
    printf("%d\n", true && false);
    printf("%d\n", false && false);
    printf("%d\n", true || true);
    printf("%d\n", true || false);
    printf("%d\n", false || false);
    printf("%d\n", !true);
    printf("%d\n", !false);

    // output
    bool b = true, c = false;
    printf(b ? "\ntrue\n" : "\nfalse\n");
    printf(c ? "true\n" : "false\n");
    printf("%s\n", b ? "true" : "false");
    printf("%s\n", c ? "true" : "false");

    // if & boolean
    if (true)
        printf("\n참\n");
    else
        printf("\n거짓\n");
    
    if (false)
        printf("참\n");
    else
        printf("거짓\n");

    // practice #1
    bool b1 = false;
    bool b2 = true;
 
    if (b1 != true)
        printf("\n참\n");
    else
        printf("\n거짓\n");
 
    printf("%s\n", b2 == false ? "참" : "거짓");

    /*
    comparsion operator
    == / != / > / < / >= / <=

    conditional operator
    conditional equation ? value1 : value2

    logical operator
    And && / OR || / NOT !

    boolean data type - it needs #include <stdbool.h>
    true / false
    */
   
    return 0;
}

