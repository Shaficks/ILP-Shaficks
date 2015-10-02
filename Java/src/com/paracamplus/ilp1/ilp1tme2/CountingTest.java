package com.paracamplus.ilp1.ilp1tme2;

import com.paracamplus.ilp1.ast.Parser;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.parser.IParserFactory;



public class CountingTest implements ICountingConstantsProcess {
	
	// Compte les constantes a partir du DOM:
	public int getNbConstantesDOM() {
		
		
		return 1; // à modifier plus tard 
	}


	// Compte les constantes a partir de l'AST:
	public int getNbConstantesAST() throws EvaluationException {
		
		
		return 1; // à modifier plus tard
	}
	
	public void parseur(IParserFactory factory) {
		Parser parser = new Parser(factory);
	}
}
