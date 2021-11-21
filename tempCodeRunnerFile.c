#include<stdio.h>
void genetic_code(int ch);
int main()
  {
     char code;
     char acid[20][10]= { "alanine "," arginine ", " aspartic_acid " , " cysteine " , " histidine " ," glutamine " , " glutamic_acid " , " glycine " , " proline " , " serine " , " threonine " , " phenylalanine " , " tyrosine " , " tryptophan " , " stop_codon " , " lysine " , " leucine " , " isoleucine " , " methionine " , " valine " ;
     printf("you can select S.NO of amino acid to print\n");
                         printf("press 1 to alanine"); 
                         printf("press 2 to arginine");
                         printf("press 3 to aspartic_acid");
                         printf("press 4 to cysteine");
                         printf("press 5 to histidine");
                         printf("press 6 to glutamine");
                         printf("press 7 to glutamic_acid");
                         printf("press 8 to glycine");
                         printf("press 9 to proline");
                         printf("press 10 to serine");
                         printf("press 11 to threonine");
                         printf("press 12 to phenylalanine");
                         printf("press 13 to tyrosine");
                         printf("press 14 to tryptophan");
                         printf("press 15 to stop_codon");
                         printf("press 16 to lysine");
                         printf("press 17 to leucine");
                         printf("press 18 to isoleucine");
                         printf("press 19 to methionine");
                         printf("press 20 to valine);
                         printf("enter a character");
                         scanf("%c",&code);
                                genetic_code(x);
                                
   return 0;
  }
    void genetic_code(int ch)
{
  if(ch==1)
    {
        printf(" THE ALANINE GENETIC CODE IS\tGCU\tGCC\tGCA\tGCG\t");
    }
  if(ch==2)
    {
        printf(" THE ARGININE GENETIC CODE IS\t CGU\tCGC\tCGA\tCGG\tAGA\tAGG\t");
    }
  if(ch==3) 
    {
        printf(" THE ASPARTIC ACID GENETIC CODE IS\n GAU\n\nGAC\n");
    }
  if(ch==4)
    {
        printf(" THE CYSTEINE GENETIC CODE IS\n GCU\nGCC\nGCA\n\n");
    }
  if(ch==5)
    {
        printf(" THE HISTIDINE GENETIC CODE IS\n CAC\nCAU\n");
    }
  if(ch==6)
    {
        printf("THE glutamine GENETIC CODE IS\tCAG\tCAA\t");
    }
  if(ch==7)
    {
        printf(" THE GLUTAMIC ACID GENETIC CODE IS\n GCU\nGCC\nGCA\nGCG\n");
    }
  if(ch==8)
    {
       printf(" THE GLYCINE GENETIC CODE IS\n GGG\nGGA\nGGC\nGGU\n");
    }
   if(ch==9)
    {
        printf(" THE PROLINE GENETIC CODE IS\n CCU\nCCC\nCCA\nCCG\n");
    }
    if(ch==10)
    {
        printf(" THE SERINE GENETIC CODE IS\n UCG\nUCA\nUCC\nUCU\nAGU\nAGC\n");
    }
    if(ch==11)
    {
        printf(" THE THREONINE GENETIC CODE IS\n ACU\nACC\nACA\nACG\n");
    }
    if(ch==12)
    {
        printf(" THE PHENYLALANINE GENETIC CODE IS\n UUC\nUUU\n");
    }
    if(ch==13)
    {
        printf(" THE THYROSINE GENETIC CODE IS\n UAC\nUAU\n");
    }
    if(ch==14)
    {
        printf(" THE TRYPTOPHAN GENETIC CODE IS\n UGG\n");
    }
    if(ch==15)
    {
        printf(" THE STOP CODON GENETIC CODE IS\n UGG\nUGA\nUAG\nUAA\n");
    }
    if(ch==16)
    {
        printf(" THE LYSINE GENETIC CODE IS\n AAA\nAAG\n");
    }
    if(ch==17)
    {
        printf(" THE LEUCINE GENETIC CODE IS\n UAA\nUUG\nCUU\nCUC\nCUA\nCUG\n");
    }
    if(ch==18)
    {
        printf(" THE ISOLEUCINE GENETIC CODE IS\n AUA\nAUC\nAUU\n");
    }
    if(ch==19)
    {
        printf(" THE METHIONINE GENETIC CODE IS\n AUG\n AND ITS ALSO START CODAN\n");
    }
    if(ch==20)
    {
        printf(" THE VALINE GENETIC CODE IS\n GUU\nGUC\nGUA\nGUG\n");
    }
  }
