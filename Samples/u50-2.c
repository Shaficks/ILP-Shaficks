#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object a;
ILP_Object b;
ILP_Object print;
ILP_Object c;
ILP_Object d;


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp177; 
  ILP_Object ilptmp178; 
  ILP_Object ilptmp179; 
  ILP_Object ilptmp180; 
ilptmp177 = ILP_Integer2ILP(2); 
ilptmp178 = ILP_Integer2ILP(4); 
ilptmp179 = ILP_Integer2ILP(2); 
{ 
  ILP_Object ilptmp181; 
  ILP_Object ilptmp182; 
{ 
  ILP_Object ilptmp183; 
  ILP_Object ilptmp184; 
ilptmp183 = b; 
ilptmp184 = b; 
ilptmp181 = ILP_Times(ilptmp183, ilptmp184);
} 
{ 
  ILP_Object ilptmp185; 
  ILP_Object ilptmp186; 
ilptmp185 = ILP_Integer2ILP(4); 
{ 
  ILP_Object ilptmp187; 
  ILP_Object ilptmp188; 
ilptmp187 = a; 
ilptmp188 = c; 
ilptmp186 = ILP_Times(ilptmp187, ilptmp188);
} 
ilptmp182 = ILP_Times(ilptmp185, ilptmp186);
} 
ilptmp180 = ILP_Minus(ilptmp181, ilptmp182);
} 

  {
    ILP_Object a1 = ilptmp177;
    ILP_Object b2 = ilptmp178;
    ILP_Object c3 = ilptmp179;
    ILP_Object c4 = ilptmp180;
{ 
  ILP_Object ilptmp189; 
{ 
  ILP_Object ilptmp190; 
  ILP_Object ilptmp191; 
ilptmp190 = d; 
ilptmp191 = ILP_Integer2ILP(0); 
ilptmp189 = ILP_GreaterThan(ilptmp190, ilptmp191);
} 
  if ( ILP_isEquivalentToTrue(ilptmp189 ) ) {
{ 
  ILP_Object ilptmp192; 
{ 
  ILP_Object ilptmp193; 
ilptmp193 =  ILP_String2ILP("discriminant positif: deux racines"); 
ilptmp192 = ILP_print(ilptmp193);
}
ilptmp192 = ILP_Integer2ILP(1); 
return ilptmp192; 
} 

  } else {
{ 
  ILP_Object ilptmp194; 
{ 
  ILP_Object ilptmp195; 
  ILP_Object ilptmp196; 
ilptmp195 = d; 
ilptmp196 = ILP_Integer2ILP(0); 
ilptmp194 = ILP_Equal(ilptmp195, ilptmp196);
} 
  if ( ILP_isEquivalentToTrue(ilptmp194 ) ) {
{ 
  ILP_Object ilptmp197; 
{ 
  ILP_Object ilptmp198; 
ilptmp198 =  ILP_String2ILP("discriminant nul: une seule racine"); 
ilptmp197 = ILP_print(ilptmp198);
}
ilptmp197 = ILP_Integer2ILP(1); 
return ilptmp197; 
} 

  } else {
{ 
  ILP_Object ilptmp199; 
{ 
  ILP_Object ilptmp200; 
ilptmp200 =  ILP_String2ILP("discriminant negatif: aucune racine"); 
ilptmp199 = ILP_print(ilptmp200);
}
ilptmp199 = ILP_Integer2ILP(1); 
return ilptmp199; 
} 

  }
}

  }
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
