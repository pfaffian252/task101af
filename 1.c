#include <stdio.h>
#include <string.h>
int main ()
{
 char sep[10]=" ", s[80];
 char *istr;
 FILE *fin, *fout;
 fin=fopen("input.txt", "r");
 fout=fopen( "output.txt", "w");
 while (NULL!= fgets( s, 80, fin))
 {
   istr = strtok (s,sep);
   while (istr != NULL)
   {
      fprintf (fout, "%s ", istr);
      istr = strtok (NULL,sep);
   }
 }
 fclose(fin);
 fclose(fout);
return 0;
}
