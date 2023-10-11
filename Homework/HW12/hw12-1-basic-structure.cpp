/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/
#include <stdio.h>

struct Person {
	    char  Name[20] ;
	    int   Age ;
	    char  Sex ;
	    float Score ;
	} ;

int main() {
    struct Person a[2] ;
    for ( int i = 0 ; i < 2 ; i++ ) {
        printf( "Person %c :\n", (char) (i + 65) ) ;
        printf( "Name :\n") ;
        scanf( "%s", a[i].Name ) ;
        printf( "Age :\n" ) ;
        scanf( "%d", &a[i].Age ) ;
        printf( "Sex :\n" ) ;
        scanf( " %c", &a[i].Sex ) ;
        printf( "Score :\n" ) ;
        scanf( "%f", &a[i].Score ) ;
     
    } //end for

    for ( int i = 0; i < 2 ; i++ ) {
        printf( "--| Person %c Information |--\n", (char) (i + 65) ) ;
        printf( "Name : %s (%c)\n", a[i].Name, a[i].Sex ) ;
        printf( "Age : %d years old\n", a[i].Age ) ;
        printf( "Score : %.2f points\n", a[i].Score ) ;
        printf( "\n" ) ;
    } //end for

    return 0 ;
} //end main 