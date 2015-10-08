package com.paracamplus.ilp1.ilp1tme1;


import com.paracamplus.ilp1.interfaces.IASTexpression;

import com.paracamplus.ilp1.parser.IParserFactory;

public class ASTfactory  extends com.paracamplus.ilp1.ast.ASTfactory 
implements IParserFactory{

	    @Override
		public com.paracamplus.ilp1.ilp1tme1.IASTsequence 
		newSequence(IASTexpression[] asts) {
	    	System.out.println("je suis dans ma factory");
	        return new com.paracamplus.ilp1.ilp1tme1.ASTsequence(asts);
	    }

}
