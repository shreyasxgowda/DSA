
/*
#include <stdio.h>

struct employee{
      int id;
      float salary;
      char department[20];
};

int main(){
    struct employee e1={111, 40000.00, 'E'};
    struct employee e2={112, 50000.00, 'E'};
    printf("%d \n",e1.id); //111
    printf("%c \n",e1.department);  //E
    printf("After manipulation of data \n");
    strcpy(e1.department,"EEE");
    strcpy(e2.department,"EECE");
    printf("%s \n",e1.department);  //X
    printf("%s \n",e2.department);  //Y



    return 0;

}
*/

/*
#include <stdio.h>

struct country{
      char name[30];
      char capital[30];
      char currency[30];
      int code;
};

int main(){
         struct country c1={"India","New Delhi","INR",91};
         struct country c2={"Nepal","Kathmandu","NPR",977};
         struct country c3={"America","Washington DC","US DOLLAR",1};
         printf("%s %s %s %d\n",c1.name, c1.capital,c1.currency,c1.code);
         printf("%s %s %s %d\n",c2.name, c2.capital,c2.currency,c2.code);
         printf("%s %s %s %d\n",c3.name, c3.capital,c3.currency,c3.code);
         printf("%d", sizeof(c3));


}
*/

/*

#include <stdio.h>

struct country{
      char name;

};
int main(){
         struct country c1={"India"};

         printf("%s\n",c1.name);
         printf("%d", sizeof(c1));


}


*/

/*
#include <stdio.h>
#include <string.h>

union employee{
     int id;
     float salary;
     char dept[20];
};


int main(){

         union employee emp;

         emp.id=10;
         emp.salary=40000.00;
         strcpy(emp.dept, "Electrical and Computer");
         printf("emp.id: %d \n",emp.id);
         printf("emp.salary: %f \n",emp.salary);
         printf("emp.dept: %s \n",emp.dept);

}
*/


/*
#include <stdio.h>
#include <string.h>

struct employee{
     int id;
     float salary;
     char dept[20];
};


int main(){

         struct employee emp;

         emp.id=10;
         emp.salary=40000.00;
         strcpy(emp.dept, "Electrical and Computer");
         printf("size of id: %d \n",sizeof(emp.id));
         printf("size of salary: %d \n",sizeof(emp.salary));
         printf("size of dept: %d \n",sizeof(emp.dept));

}
*/


































