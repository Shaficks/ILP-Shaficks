package com.paracamplus.ilp1.ilp1tme2;

import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTbinaryOperation;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTboolean;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTfloat;
import com.paracamplus.ilp1.interfaces.IASTinteger;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interfaces.IASToperator;
import com.paracamplus.ilp1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTstring;
import com.paracamplus.ilp1.interfaces.IASTunaryOperation;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;

public class CountingVisitor implements IASTvisitor <Integer , Object, EvaluationException>{

	static Integer rep = 0;
	
	public CountingVisitor() {
	}
	
	
	@Override
	public Integer visit(IASTalternative iast, Object data)
			throws EvaluationException {
		rep = rep + iast.getCondition().accept(this, data);
		rep = rep + iast.getConsequence().accept(this, data);
		rep = rep + iast.getAlternant().accept(this, data);
		return rep;
	}

	@Override
	public Integer visit(IASTbinaryOperation iast, Object data)
			throws EvaluationException {
		rep = rep + iast.getLeftOperand().accept(this, data);
		rep = rep + iast.getRightOperand().accept(this, data);
		return rep;
	}

	@Override
	public Integer visit(IASTblock iast, Object data)
			throws EvaluationException {
		Integer rep = 0;
		rep = iast.getBody().accept(this, data);
		return rep;
	}

	@Override
	public Integer visit(IASTboolean iast, Object data)
			throws EvaluationException {
		return 1;
	}

	@Override
	public Integer visit(IASTfloat iast, Object data)
			throws EvaluationException {
		return 1;
	}

	@Override
	public Integer visit(IASTinteger iast, Object data)
			throws EvaluationException {
		return 1;
	}

	@Override
	public Integer visit(IASTinvocation iast, Object data)
			throws EvaluationException {
		return 0;
	}

	@Override
	public Integer visit(IASToperator iast, Object data)
			throws EvaluationException {
		return 0;
	}

	@Override
	public Integer visit(IASTsequence iast, Object data)
			throws EvaluationException {
		Integer rep = 0;
		IASTexpression[] tab;
		tab = iast.getExpressions();
		for(int i = 0; i < tab.length; i++) {
			//if(tab[i].)
		}
		return rep;
	}

	@Override
	public Integer visit(IASTstring iast, Object data)
			throws EvaluationException {
		return 1;
	}

	@Override
	public Integer visit(IASTunaryOperation iast, Object data)
			throws EvaluationException {
		return 1;
	}

	@Override
	public Integer visit(IASTvariable iast, Object data)
			throws EvaluationException {
		return 1;
	}
	
	public static void main(String[] args) {
		
	}


}
