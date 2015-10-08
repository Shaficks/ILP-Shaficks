#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp127; 
  ILP_Object ilptmp128; 
  ILP_Object ilptmp129; 
ilptmp127 = ILP_Integer2ILP(2); 
ilptmp128 = ILP_Integer2ILP(10); 
ilptmp129 = ILP_Integer2ILP(2); 

  {
    ILP_Object a1 = ilptmp127;
    ILP_Object b2 = ilptmp128;
    ILP_Object c3 = ilptmp129;
{ 
  ILP_Object ilptmp130; 
{ 
  ILP_Object ilptmp131; 
{ 
  ILP_Object ilptmp132; 
  ILP_Object ilptmp133; 
{ 
  ILP_Object ilptmp134; 
  ILP_Object ilptmp135; 
ilptmp134 = b2; 
ilptmp135 = b2; 
ilptmp132 = ILP_Times(ilptmp134, ilptmp135);
} 
{ 
  ILP_Object ilptmp136; 
  ILP_Object ilptmp137; 
ilptmp136 = ILP_Integer2ILP(4); 
{ 
  ILP_Object ilptmp138; 
  ILP_Object ilptmp139; 
ilptmp138 = a1; 
ilptmp139 = c3; 
ilptmp137 = ILP_Times(ilptmp138, ilptmp139);
} 
ilptmp133 = ILP_Times(ilptmp136, ilptmp137);
} 
ilptmp131 = ILP_GreaterThan(ilptmp132, ilptmp133);
} 
  if ( ILP_isEquivalentToTrue(ilptmp131 ) ) {
ilptmp130 =  ILP_String2ILP("discriminant positif: deux racines"); 

  } else {
{ 
  ILP_Object ilptmp140; 
{ 
  ILP_Object ilptmp141; 
  ILP_Object ilptmp142; 
{ 
  ILP_Object ilptmp143; 
  ILP_Object ilptmp144; 
ilptmp143 = b2; 
ilptmp144 = b2; 
ilptmp141 = ILP_Times(ilptmp143, ilptmp144);
} 
{ 
  ILP_Object ilptmp145; 
  ILP_Object ilptmp146; 
ilptmp145 = ILP_Integer2ILP(4); 
{ 
  ILP_Object ilptmp147; 
  ILP_Object ilptmp148; 
ilptmp147 = a1; 
ilptmp148 = c3; 
ilptmp146 = ILP_Times(ilptmp147, ilptmp148);
} 
ilptmp142 = ILP_Times(ilptmp145, ilptmp146);
} 
ilptmp140 = ILP_Equal(ilptmp141, ilptmp142);
} 
  if ( ILP_isEquivalentToTrue(ilptmp140 ) ) {
ilptmp130 =  ILP_String2ILP("discriminant nul: une seule racine"); 

  } else {
ilptmp130 = ILP_FALSE; 

  }
}

  }
}
ilptmp130 =  ILP_String2ILP("discriminant negatif: aucune racine"); 
return ilptmp130; 
} 

  }
}

} 

static ILP_Object ilp_caught_program () {
  struct ILP_catcher* current_catcher = ILP_current_catcher;
  struct ILP_catcher new_catcher;

  if ( 0 == setjmp(new_catcher._jmp_buf) ) {
    ILP_establish_catcher(&new_catcher);
    return ilp_program();
  };
  return ILP_current_exception;
}

int main (int argc, char *argv[]) 
{ 
  ILP_START_GC; 
  ILP_print(ilp_caught_program()); 
  ILP_newline(); 
  return EXIT_SUCCESS; 
} 
