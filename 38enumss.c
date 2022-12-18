#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    // enum = a user defined type of named integer identifiers
    //               helps to make a program more readable

    enum Day today;
    today = Sun;

    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("\nI have to work today :(");
    }

    return 0;
}


// #include <stdio.h> 
// enum day {sunday , monday, tuesday, wednesday, thursday, friday, saturday}; 
  
// int main() 
// {
//   // Enums can also take their integer equivalent values
//   enum day today = 4;

//   switch(today)
//   {
//     case sunday:
//       printf("The day today is Sunday");
//       break;
//     case monday:
//       printf("The day today is Monday");
//       break;
//     case tuesday:
//       printf("The day today is Tuesday");
//       break;
//     case wednesday:
//       printf("The day today is Wednesday");
//       break;
//     case thursday:
//       printf("The day today is Thursday");
//       break;
//     case friday:
//       printf("The day today is Friday");
//       break;
//     default:
//       printf("The day today is Saturday");
//   }
//     return 0; 
// } 