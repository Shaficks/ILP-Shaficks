package com.paracamplus.ilp1.ilp1tme2;

import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;



 /* Interface créée lors du tme2 - Exercice 2.2 
  * 
  * Création d'une classe servant à compter le nombre de constantes apparaissant
  * dans un programme ILP.
  * */
public interface ICountingConstantsProcess {
	// Compte les constantes a partir du DOM:
	public int getNbConstantesDOM() ;


	// Compte les constantes a partir de l'AST:
	public int getNbConstantesAST() throws EvaluationException ;

}
