package com.paracamplus.ilp1.ilp1tme2;

import org.w3c.dom.Element;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.parser.IParserFactory;
import com.paracamplus.ilp1.parser.ParseException;



/*
 * Commentaires ajoutés par Shaficks
 * afin de faciliter la révision.
 * */

/**/
public class Parser extends com.paracamplus.ilp1.ast.Parser {
	private static int  nbConst = 0;

	/*
	 * Constructeur qui fait appel au constructeur de la classé Parser d'origine
	 * vu que celle-ci est une extension de la classe Parser
	 */
	public Parser(IParserFactory factory) {
		super(factory);
	}
	
	@Override
	public IASTexpression integerConstant(Element e) throws ParseException {
	    final String description = e.getAttribute("value");
	    nbConst++;
	    return getFactory().newIntegerConstant(description);
	}

	@Override
    public IASTexpression floatConstant(Element e) throws ParseException {
        final String description = e.getAttribute("value");
        nbConst++;
        return getFactory().newFloatConstant(description);
    }
	
	@Override
    public IASTexpression stringConstant(Element e) throws ParseException {
        final String description = e.getTextContent();
        nbConst++;
        return getFactory().newStringConstant(description);
    }
	
	@Override
    public IASTexpression booleanConstant(Element e) throws ParseException {
        final String description = e.getAttribute("value");
        nbConst++;
        return getFactory().newBooleanConstant(description);
    }
	
	/*
	 * Méthode qui retourne le nombre de constantes stocké dans la variable 
	 * statique de cette classe.
	 */
	protected int getNbConst(){
		return nbConst;
	}
	
}
