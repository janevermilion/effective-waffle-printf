//
// Created by Jamar Slave on 16/12/2019.
//

#include "inc/ft_printf.h"
//c s p d i o u x X hh, h, l and ll %% #0-+
int         main()
{
	int *pnt;
   int cat = -10;
int dog = 123;
char *l = "cat";
  /*int res;
  res = printf("%5%");
  printf("\norigin returned: %i\n", res);
  printf("......\n");
  res = ft_printf("%5%");
  printf("\nMine returned: %i\n", res);

  char cat[7] = "catcat";//pq
  ft_printf("string: %s", cat);
	*/
  char *test;
  //ft_printf("%p", test);
  //int res = ft_printf("%s", l);

	//printf("\nres: %i", res);
	//printf("\n");
//	printf("%25p", pnt);
printf("mine:\n");
char *s_hidden = "cat\0mk";
ft_printf("%3.s<-", s_hidden);
printf("\norigin:\n");


printf("%3.s<-", s_hidden);
  return (0);
}
/*
 *     First line of code: {return test("%.s", "hello");}
      expected output : ""
      your output     : "s"
      expected (nonprintable as hex) : ""
      actual   (nonprintable as hex) : "s"
 */