package com.paracamplus.ilp1.ilp1tme1;



import java.io.File;
import java.util.Vector;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;

import com.paracamplus.ilp1.parser.IParserFactory;





@RunWith(Parameterized.class)
public class InterpreterTest extends com.paracamplus.ilp1.interpreter.test.InterpreterTest{

	public InterpreterTest(File file) {
		super(file);
		// TODO Auto-generated constructor stub
	    IParserFactory factory = new com.paracamplus.ilp1.ilp1tme1.ASTfactory();
        this.parser = new com.paracamplus.ilp1.ast.Parser(factory);
	}

	   @Test
	    public void testButLastInstructon () throws Throwable {
	   }
}
