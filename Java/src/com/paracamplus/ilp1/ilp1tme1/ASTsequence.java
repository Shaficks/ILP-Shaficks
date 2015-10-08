package com.paracamplus.ilp1.ilp1tme1;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTinstruction;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;

public class ASTsequence extends com.paracamplus.ilp1.ast.ASTsequence
implements IASTsequence{

	public ASTsequence(IASTexpression[] expressions) {
		super(expressions);
		// TODO Auto-generated constructor stub
	}
	
	@Override
	public IASTexpression[] getAllButLastInstructions()
			throws EvaluationException {
		System.out.println("gjhklmù");
		
		IASTexpression[] temp = getExpressions();
		IASTexpression[] rep = new  IASTexpression[expressions.length - 1];
		System.out.println(temp.length);
		for(int i = 0; i< temp.length - 1 ; i++){
			System.out.println("bonn");
			rep[i] = temp[i];
		}
 		return rep;
		// TODO Auto-generated method stub
	}

	

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(
			IASTvisitor<Result, Data, Anomaly> visitor, Data data)
			throws Anomaly {
		// TODO Auto-generated method stub
		 return visitor.visit(this, data);
	}



	@Override
	public IASTexpression[] getExpressions() {
		// TODO Auto-generated method stub
		return this.expressions;
	}

}
