#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int choice();
void msg();
void name();
void year();
void circle();
void rectangle();
void Vol_cuboid();
void simple_intrest();
void com_interest();
void swap();
void swapt();
void calculator();
void asci();
void even();
void big();
void bigger();
void leap();
void natural();
void number();
void table();
void fibo();
void prime();
void amstrng();
void main()
{
 while(1)
 {
 system("cls");
 switch(choice())
  {
  case 1:msg();
  break;
  case 2:name();
  break;
  case 3:year();
  break;
  case 4:circle();
  break;
  case 5:rectangle();
  break;
  case 6:Vol_cuboid();
  break;
  case 7:simple_intrest();
  break;
  case 8:com_interest();
  break;
  case 9:swap();
  break;
  case 10:swapt();
  break;
  case 11:calculator();
  break;
  case 12:asci();
  break;
  case 13:even();
  break;
  case 14:big();
  break;
  case 15:bigger();
  break;
  case 16:leap();
  break;
  case 17:natural();
  break;
  case 18:number();
  break;
  case 19:table();
  break;
  case 20:fibo();
  break;
  case 21:prime();
  break;
  case 22:amstrng();
  break;
  case 40:exit(0);
  break;
  }
  getch();
 }
}
int choice()
{
   int ch;
   printf("1:Print Massage\n");
   printf("2:Print Name\n");
   printf("3:Print Year\n");
   printf("4:Area Of Circle\n");
   printf("5:Area Of Rectangle\n");
   printf("6:Volume Of Cuboid\n");
   printf("7:Simple Interest\n");
   printf("8:Compound Interest\n");
   printf("9:Swap Using Third Variable\n");
   printf("10:Swap Without Third Variable\n");
   printf("11:Calculator\n");
   printf("12:ASCII Code\n");
   printf("13:Even-Odd\n");
   printf("14:Greatest Among Two NUM\n");
   printf("15:Greatest Among Three NUM\n");
   printf("16:Leap Year\n");
   printf("17:To Print Natural Num Upto 100\n");
   printf("18:Numbers Logics\n");
   printf("19:Multipication Table\n");
   printf("20:Fibonacci Series\n");
   printf("21:Prime Logics\n");
   printf("22:Armstrong Num\n");
   printf("23:string\n");
   printf("40:EXIT\n");
   printf("Enter your choice:");
   scanf("%d",&ch);
   return ch;
}
void msg()
{
    printf("HELLO WORLD");
}
void name()
{
    char n[20];
    fflush(stdin);
    printf("Enter Your name:\n");
    gets(n);
    printf("Hello %s\n i am fine?",n);
}
void year()
{
    printf("Welcome to 2021\n");
    printf("18/09/2021\n");
}
void circle()
{
    float pi=3.14,r;
    printf("Enter Redius:");
    scanf("%f",&r);
    printf("The Area of a Cirecle is %.2f",pi*r*r);
}
void rectangle()
{
    float l,w;
    printf("Enter The Value Of Length & Width:");
    scanf("%f %f",&l,&w);
    printf("The Area Of Rectangle Is %.2f",l*w);
}
void Vol_cuboid()
{
    float l,w,h;
    printf("Enter Value Of [Length] [Width] [Height]:");
    scanf("%f %f %f",&l,&w,&h);
    printf("Volume Of A Cuboid Is %.2f",l*w*h);
}
void simple_intrest()
{
    float p,r,t;
    printf("Enter [Principle Amount] [Rate] [Interest]:");
    scanf("%f %f %f",&p,&r,&t);
    printf("The Simple Interest Is %.2f",(p*r*t)/100);
}
void com_interest()
{
    float a,p,r,t;
    printf("Enter [Principle Amount] [Rate] [Interest]:");
    scanf("%f %f %f",&p,&r,&t);
    a=((p*(1+r/100))*t)-p;
    printf("The Compound Interest Is %.2f",a);
}
void swap()
{
    int a,b,t;
    printf("Enter The Value Of A & B:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping [A] = %d\n",a);
    printf("Before Swapping [B] = %d\n",b);
    t=a;
    a=b;
    b=t;
    printf("After  Swapping [A] = %d\n",a);
    printf("After  Swapping [B] = %d\n",b);

}
void swapt()
{
    int a,b;
    printf("Enter The Value Of A & B:");
    scanf("%d %d",&a,&b);
    printf("Before Swapping [A] = %d\n",a);
    printf("Before Swapping [B] = %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After  Swapping [A] = %d\n",a);
    printf("After  Swapping [B] = %d\n",b);

}

void calculator()
{
    float a,b;
    int ch,c,d,i=0;
    float rt,root=1;
    printf("NAYAN\n");
    printf("\nCALCULATOR\n");
    printf("PRESS 1:[ADD]\n");
    printf("PRESS 2:[SUB]\n");
    printf("PRESS 3:[MUL]\n");
    printf("PRESS 4:[DIV]\n");
    printf("PRESS 5:[REM]\n");
    printf("PRESS 6:[SQUARE^]\n");
    printf("PRESS 7:[CUBE^]\n");
    printf("PRESS 8:[SQUAREROOT]\n");
    printf("PRESS 20:[EXIT]\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    if(ch==20)
    {
    printf("[PRESS A To GO-BACK]");
    getch();
    main();
    }
    if(ch==5)
    {
    printf("Enter Two Number:");
    scanf("%d %d",&c,&d);
    }
    else if(ch==1||ch==2||ch==3||ch==4)
    {
    printf("Enter Two Number:");
    scanf("%f %f",&a,&b);
    }
    else if(ch==6||ch==7)
    {
    printf("Enter A Number:");
    scanf("%d",&c);
    }
    else
    {
        printf("Enter A Number:");
        scanf("%f",&rt);
    }
    switch(ch)
    {
        case 1:printf("RESULT:%.2f",a+b);
        break;
        case 2:printf("RESULT:%.2f",a-b);
        break;
        case 3:printf("RESULT:%.2f",a*b);
        break;
        case 4:printf("RESULT:%.2f",a/b);
        break;
        case 5:printf("RESULT:%d",c%d);
        break;
        case 6:printf("RESULT:%d",c*c);
        break;
        case 7:printf("RESULT:%d",c*c*c);
        case 8:while(1)
        {
            i=i+1;
                root=(rt/root+root)/2;
                if(i==rt+1)
                {
                break;
                }
        }
            printf("RESULT:%.2f",root);
        break;
    }
}
void asci()
{
    char c;
    fflush(stdin);
    printf("Enter A Character:");
    scanf("%c",&c);
    printf("The ASCII Code of %c Is:%d",c,c);
}
void even()
{
    int num;
    printf("Enter A Number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d Is Even Number",num);
    else
        printf("%d Is Odd Number",num);
}
void big()
{
    float a,b;
     printf("Enter First Num:");
     scanf("%f",&a);
     printf("Enter Second Num:");
     scanf("%f",&b);
     if(a>b)
         printf("%.1f Is Greater Number",a);
     else
         printf("%.1f Is Greater Number",b);
}
void bigger()
{
    float a,b,c;
     printf("Enter First Num:");
     scanf("%f",&a);
     printf("Enter Second Num:");
     scanf("%f",&b);
     printf("Enter Third Num:");
     scanf("%f",&c);

     if(a>b&a>c)
         printf("%.1f Is Greater Number",a);
     else if(b>c)
         printf("%.1f Is Greater Number",b);
     else
         printf("%.1f Is Greater NUmber",c);
}
void leap()
{
    int yr,ch,i;
    printf("1:To Check Leap Year\n");
    printf("2:To Know All Leap year In This Century\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    printf("Enter The Year:");
    scanf("%d",&yr);
    switch(ch)
    {
  case 1: if(yr%100==0)
    {
        if(yr%400==0)
            printf("%d Is A Leap Year",yr);
        else
            printf("%d Is A Not Leap Year",yr);
    }
    else
    {
        if(yr%4==0)
            printf("%d Is A Leap Year",yr);
        else
            printf("%d Is A Not Leap Year",yr);
    }
    break;
    case 2:for(i=yr;i<=2100;i++)
           {
               if(i%100==0)
               {
                   if(i%400==0)
                    printf("%d ",i);
               }
               else
               {
                   if(i%4==0)
                     printf("%d ",i);
               }
           }
    break;
    }
}
void natural()
{
    int i,ch,num,s=0;
    printf("1:[1 To 100]\n");
    printf("2:[100 To 1]\n");
    printf("3:[Even Natural Num]\n");
    printf("4:[Odd Natural Num]\n");
    printf("5:[Square Of N Natural Num]\n");
    printf("6:[Cube Of N Natural Num]\n");
    printf("7:[Sum Of N Natural Num]\n");
    printf("8:[Main Menu]\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:for(i=1;i<=100;i++)
                printf("%d ",i);
                break;
        case 2:for(i=100;i>=1;i--)
                printf("%d ",i);
                break;
        case 3:for(i=1;i<=100;i++)
               {
                  if(i%2==0)
                    printf("%d ",i);
               }
                break;
        case 4:for(i=1;i<=100;i++)
               {
                  if(i%2!=0)
                    printf("%d ",i);
               }
                break;
        case 5:
            printf("Enter A num:");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
                  printf("%d ",i*i);
                break;

        case 7:
            printf("Enter A num:");
            scanf("%d",&num);
            for(i=1;i<=num;i++)
                s=s+i;
                printf("Result:%d",s);
                break;
        case 8:main();
                break;
    }
}
void number()
{
    int num,i,rem,count=0,ch,num1,f=1;
    printf("1:[Count Digit Of A NUM]\n");
    printf("2:[Count Sum Of Digit Of A NUM]\n");
    printf("3:[Reverse Of A NUM]\n");
    printf("4:[Factorial Of A NUM]\n");
    printf("5:[Find The All Factor Of A Number]\n");
    printf("6:[Main Menu]\n");
    printf("Enter Your Choice:");
    scanf("%d",&ch);
    if(ch==6)
        main();
    switch(ch)
    {
        case 1:
        printf("Enter A Num:");
        scanf("%d",&num);
        num1=num;
          while(num>0)
          {
            rem=num%10;
            count++;
            num=num/10;
          }
        printf("Total Digit In %d Is %d:",num1,count);
            break;
        case 2:
        printf("Enter A Num:");
        scanf("%d",&num);
        num1=num;
          while(num>0)
          {
            rem=num%10;
            count+=rem;
            num=num/10;
          }
        printf("Total Sum Of Digit Of %d Is %d",num1,count);
            break;
        case 3:
        printf("Enter A Num:");
        scanf("%d",&num);
        printf("The Reverse Of %d Is ",num);
          while(num>0)
          {
            rem=num%10;
            printf("%d",rem);
            num=num/10;
          }
            break;
        case 4:
        printf("Enter A Num:");
        scanf("%d",&num);
        for(i=1;i<=5;i++)
            f=f*i;
            printf("The Factorial Of %d Is:%d",num,f);
        break;
        case 5:
            printf("Enter A num:");
            scanf("%d",&num);
            printf("The Factor is:");
            for(i=1;i<=num;i++)
            {
              if(num%i==0)
              printf("%d ",i);
            }
        break;
        default:
           printf("Invalid Choice");
           break;
    }
}
void table()
{
    int i,j,num,num1,ch;
    printf("1:[1-10]\n");
    printf("2:[Table of User Choice]\n");
    printf("3:[Table of User Choice In Range]\n");
    printf("4:[Main-Menu]\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\t\t\t\tTable Of [1--10]\n\n");
       for(i=1;i<=10;i++)
       {
           for(j=1;j<=10;j++)
           {
            printf("%d*%d=%d\t",j,i,i*j);
           }
       printf("\n\n");
       }
       break;
    case 2:
        printf("Enter A Num:");
        scanf("%d",&num);
        printf("\t\t\t\t\tTable Of %d\n\n",num);
        for(i=1;i<=10;i++)
        printf("%d*%d=%d\t",num,i,num*i);
        break;
    case 3:
        printf("Enter Start Num:");
        scanf("%d",&num);
        printf("Enter Start Num:");
        scanf("%d",&num1);
        printf("\t\t\t\tTable Of [%d--%d]\n\n",num,num1);
       for(i=num;i<=num1;i++)
       {
        printf("\n");
           for(j=1;j<=10;j++)
           {
            printf("%d*%d=%d\t",i,j,i*j);
           }
       }
       break;
    case 4:main();
       break;
    default:
        printf("Invalid Choice");
    }
}
void fibo()
{
    int term,num1=-1,num2=1,num3,i,ch;
    printf("1:[To Print First N Term Of Fibonacci Series]\n");
    printf("2:[To Find  N-th Term Of Fibonacci Series]\n");
    printf("3:[Main-Menu]\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter Term Limit:");
        scanf("%d",&term);
        for(i=1;i<=term;i++)
        {
            num3=num1+num2;
            num1=num2;
            num2=num3;
            printf("%d ",num3);
        }
        break;
    case 2:
      printf("Enter Term Limit:");
      scanf("%d",&term);
        for(i=1;i<=term;i++)
        {
            num3=num1+num2;
            num1=num2;
            num2=num3;
        }
        printf("The Nth Terms Of Fibonacci Series Is:%d",num3);
        break;
    case 3:main();
        break;
    default:
        printf("Invalid choice");
    }
}
void prime()
{
    int num,num1,ch,i,j,flag=0;
    printf("1:[To Check Prime Num]\n");
    printf("2:[To Print All Prime Num Upto 100]\n");
    printf("3:[To Print All Prime Num In Range]\n");
    printf("4:[To Find Next Prime Num]\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter A Num:");
        scanf("%d",&num);
        for(i=2;i<num;i++)
        {
           if(num%i==0)
                flag=1;
        }
        if(flag!=1)
            printf("%d Is A Prime Num",num);
        else
            printf("%d Is Not Prime",num);
            break;
    case 2:
        printf("\t\t\t[The Prime Num Btwn 1 To 100]\n\n");
        for(i=1;i<=100;i++)
        {
            for(j=2;j<i;j++)
                if(i%j==0)
                break;
            if(j==i)
                printf("%d\t",i);
        }
        break;
    case 3:
        printf("Enter Starting Num:");
        scanf("%d",&num);
        printf("Enter Starting Num:");
        scanf("%d",&num1);
         printf("\t\t\t[The Prime Num Btwn %d To %d]\n\n",num,num1);
        for(i=num;i<=num1;i++)
        {
            for(j=2;j<i;j++)
                if(i%j==0)
                break;
            if(j==i)
                printf("%d\t",i);
        }
        break;
    case 4:
        printf("Enter A Num:");
        scanf("%d",&num);
        for(i=num+1; ;i++)
        {
        for(j=2;j<i;j++)
         {
            if(i%j==0)
              break;
         }
         if(j==i)
         {
          printf("%d",i);
           break;
         }
        }
            break;
    }
}
void amstrng()
{
    int num,rem,num1,num2,a=0,p=0,ch,i,i1;
    printf("1:[To Check Armstrong Num Or Not]\n");
    printf("2:[To Generate Armstrong Num In a Given Range\n]");
    printf("Enter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
   case 1:
    printf("Enter A num:");
    scanf("%d",&num);
    num1=num;
    num2=num;
    while(num1!=0)
    {
        rem=num1%10;
        num1=num1/10;
        p++;
    }
    while(num>0)
    {
        rem=num%10;
        a=a+pow(rem,p);//Base*power
        num=num/10;
    }
    if(a==num2)
        printf("%d Is ArmsStrong Num",num2);
    else
        printf("%d Is Not A ArmsStrong Num",num2);
   break;
    case 2:
    printf("Enter Starting Point:");
    scanf("%d",&num);
    printf("Enter End Limit:");
    scanf("%d",&num1);
    for(i=num;i<=num1;i++)
    {
        i=i1;
        i=num2;
    while(i1!=0)
    {
        rem=i1%10;
        i1=i1/10;
        p++;
    }
    while(num2>0)
    {
        rem=num2%10;
        a=a+pow(rem,p);
        num2=num2/10;
    }
    if(a==i)
       printf("%d ",i);

    }
    }
}
void atm()
{

}
