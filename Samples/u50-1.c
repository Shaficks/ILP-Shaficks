#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object print;


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp149; 
  ILP_Object ilptmp150; 
  ILP_Object ilptmp151; 
ilptmp149 = ILP_Integer2ILP(2); 
ilptmp150 = ILP_Integer2ILP(4); 
ilptmp151 = ILP_Integer2ILP(2); 

  {
    ILP_Object a1 = ilptmp149;
    ILP_Object b2 = ilptmp150;
    ILP_Object c3 = ilptmp151;
{ 
  ILP_Object ilptmp152; 
{ 
  ILP_Object ilptmp153; 
  ILP_Object ilptmp154; 
{ 
  ILP_Object ilptmp155; 
  ILP_Object ilptmp156; 
{ 
  ILP_Object ilptmp157; 
  ILP_Object ilptmp158; 
ilptmp157 = b2; 
ilptmp158 = b2; 
ilptmp155 = ILP_Times(ilptmp157, ilptmp158);
} 
{ 
  ILP_Object ilptmp159; 
  ILP_Object ilptmp160; 
ilptmp159 = ILP_Integer2ILP(4); 
{ 
  ILP_Object ilptmp161; 
  ILP_Object ilptmp162; 
ilptmp161 = a1; 
ilptmp162 = c3; 
ilptmp160 = ILP_Times(ilptmp161, ilptmp162);
} 
ilptmp156 = ILP_Times(ilptmp159, ilptmp160);
} 
ilptmp153 = ILP_Minus(ilptmp155, ilptmp156);
} 
ilptmp154 = ILP_Integer2ILP(0); 
ilptmp152 = ILP_GreaterThan(ilptmp153, ilptmp154);
} 
  if ( ILP_isEquivalentToTrue(ilptmp152 ) ) {
{ 
  ILP_Object ilptmp163; 
ilptmp163 =  ILP_String2ILP("discriminant positif: deux racines"); 
return ILP_print(ilptmp163);
}

  } else {
{ 
  ILP_Object ilptmp164; 
{ 
  ILP_Object ilptmp165; 
  ILP_Object ilptmp166; 
{ 
  ILP_Object ilptmp167; 
  ILP_Object ilptmp168; 
{ 
  ILP_Object ilptmp169; 
  ILP_Object ilptmp170; 
ilptmp169 = b2; 
ilptmp170 = b2; 
ilptmp167 = ILP_Times(ilptmp169, ilptmp170);
} 
{ 
  ILP_Object ilptmp171; 
  ILP_Object ilptmp172; 
ilptmp171 = ILP_Integer2ILP(4); 
{ 
  ILP_Object ilptmp173; 
  ILP_Object ilptmp174; 
ilptmp173 = a1; 
ilptmp174 = c3; 
ilptmp172 = ILP_Times(ilptmp173, ilptmp174);
} 
ilptmp168 = ILP_Times(ilptmp171, ilptmp172);
} 
ilptmp165 = ILP_Minus(ilptmp167, ilptmp168);
} 
ilptmp166 = ILP_Integer2ILP(0); 
ilptmp164 = ILP_Equal(ilptmp165, ilptmp166);
} 
  if ( ILP_isEquivalentToTrue(ilptmp164 ) ) {
{ 
  ILP_Object ilptmp175; 
ilptmp175 =  ILP_String2ILP("discriminant nul: une seule racine"); 
return ILP_print(ilptmp175);
}

  } else {
{ 
  ILP_Object ilptmp176; 
ilptmp176 =  ILP_String2ILP("discriminant negatif: aucune racine"); 
return ILP_print(ilptmp176);
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
