#include <stdio.h>
int main()
{

    int score=0;
    char ans,a,b,c,d;

    printf("----Welcome to AstroQuest----\n");
    printf("\n");

    printf("1.Which planet in our solar system has the strongest magnetic field?\n");
    printf("a) Mars\n b) Earth\n c) Jupiter\n d) Venus\n");
    printf("Submit your Answer :");
    scanf(" %c",&ans);
    if(ans=='c')
    {
        printf("CORRECT!!");
        score++;
        printf("\nYOU  EARNED A POINT\n");
    }
    else
    {
        printf("Ooops..sorry! WRONG ANSWER!\nCorrect Answer is : Jupiter.\n\n");
    }

    printf("\n");
  

    printf("2.Orion Belt is made up of how many stars?\n");
    printf("a) four\n b) three\n c) two\n d) one\n");
    printf("Submit your Answer :");
    scanf(" %c",&ans);
    if(ans=='b')
    {
        printf("CORRECT!!");
        score++;
        printf("\nYOU  EARNED A POINT\n");
    }
    else
    {
        printf("Ooops..sorry! WRONG ANSWER!\nCorrect Answer is : three.\n\n");
    }

     printf("\n");
  

    printf("3.What method did NASA Kepler Space Telescope primarily use to detect exoplanets?\n");
    printf("a) Transit method\n b) Radial velocity method\n c) Direct imaging\n d) Gravitational lensing\n");
    printf("Submit your Answer :");
    scanf(" %c",&ans);
    if(ans=='a')
    {
        printf("CORRECT!!");
        score++;
        printf("\nYOU  EARNED A POINT\n");
    }
    else
    {
        printf("Ooops..sorry! WRONG ANSWER!\nCorrect Answer is : Transit method.\n\n");
    }


     printf("\n");
  

    printf("4.The star Sirius, the brightest star in the night sky, belongs to which constellation?\n");
    printf("a) Ursa Major\n b) Orion\n c) Canis Major\n d) Lyra\n");
    printf("Submit your Answer :");
    scanf(" %c",&ans);
    if(ans=='c')
    {
        printf("CORRECT!!");
        score++;
        printf("\nYOU  EARNED A POINT\n");
    }
    else
    {
        printf("Ooops..sorry! WRONG ANSWER!\nCorrect Answer is : Canis Major.\n\n");
    }

    
     printf("\n");
  

    printf("5.What is the habitable zone around a star?\n");
    printf("a) Region where planets are closest to the star\n b) Area with strongest gravity pull\n c) Zone filled with asteroids\n d) Region where liquid water can exist\n");
    printf("Submit your Answer :");
    scanf(" %c",&ans);
    if(ans=='d')
    {
        printf("CORRECT!!");
        score++;
        printf("\nYOU  EARNED A POINT\n");
    }
    else
    {
        printf("Ooops..sorry! WRONG ANSWER!\nCorrect Answer is : Region where liquid water can exist.\n\n");
    }

    printf("\n GAME OVER !!\n");
    
    printf("\n***************\n");

    printf("\nYOUR TOTAL SCORE IS : %d out of 5 \n",score);

}
