package com.paracamplus.ilp1.ilp1tme2;

import static org.junit.Assert.assertTrue;

import java.io.File;

import com.paracamplus.ilp1.interfaces.IASTprogram;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.parser.IParserFactory;
import com.paracamplus.ilp1.parser.ParseException;
import com.paracamplus.ilp1.tools.Input;
import com.paracamplus.ilp1.tools.InputFromFile;



public class CountingTest implements ICountingConstantsProcess {
	protected static String rngFileName = "Grammars/grammar1.rng";
    protected static String samplesDirName = "Samples"; 
    protected static String pattern = "ur?[0-8]\\d*-[123456]";
	

	public CountingTest() {
		//Constructeur vide
	}


	
	@Override
	public int getNbConstantesDOM() {
		// Chargement du fichier XML dans un objet de type File
		File file =  new File("Samples/u48-1.xml");
		System.out.println("File loaded successfully !");
		//Déclaration des objets du parser et de la factory
		IParserFactory factory = new com.paracamplus.ilp1.ast.ASTfactory();
		Parser parser = new  Parser(factory);
		System.err.println("Testing " + file.getAbsolutePath() + " ...");
        //assertTrue(file.exists());
        System.out.println("File tested successfully !!");
        //Déclaration de l'objet input qui contiendra notre fichier
        Input input = new InputFromFile(file);
        //set du fichier input pour le parser
        parser.setInput(input);
        //Chargement du fichier de grammaire rng
        File rngFile = new File(rngFileName);
        parser.setGrammar(rngFile);
        try {
			IASTprogram program = parser.getProgram();
		} catch (ParseException e) {
			e.printStackTrace();
		}
		return parser.getNbConst();
	}

	
	
	@Override
	public int getNbConstantesAST() throws EvaluationException {
		// Chargement du fichier XML dans un objet de type File
		File file =  new File("Samples/u48-1.xml");
		System.out.println("File loaded successfully !");
		//Déclaration des objets du parser et de la factory
		IParserFactory factory = new com.paracamplus.ilp1.ast.ASTfactory();
		Parser parser = new  Parser(factory);
        System.err.println("Testing " + file.getAbsolutePath() + " ...");
        assertTrue(file.exists());
        Input input = new InputFromFile(file);
        parser.setInput(input);
        File rngFile = new File(rngFileName);
        parser.setGrammar(rngFile);
        try {
			IASTprogram program = parser.getProgram();
		} catch (ParseException e) {
			e.printStackTrace();
		}
		return 0;
	}
	
	public static void main(String [] args) throws ParseException {
		//File file = new File("/Samples/u49-1.xml");
		CountingTest ct = new CountingTest();
		System.out.println("le nombre de contante en DOM est " + ct.getNbConstantesDOM());
		
	}
	
}
