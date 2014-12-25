/*
 * rules.c - Implementation of rules.
 *
 * Copyright (C) 2014 Andrew Schwartzmeyer
 *
 * This file released under the AGPLv3 license.
 */

#include "rules.h"

/*
 * For the given rule, create a case which returns the stringified
 * version of the rule (a static string literal).
 */
#define R(rule) case rule: return #rule
char *print_rule(enum rule r)
{
	switch (r) {
		R(PROGRAM);
		R(LITERAL);
		R(QUAL_ID);
		R(NESTED_NAME1);
		R(POSTFIX_ARRAY_INDEX);
		R(POSTFIX_CALL);
		R(POSTFIX_CAST);
		R(POSTFIX_DOT_FIELD);
		R(POSTFIX_ARROW_FIELD);
		R(POSTFIX_PLUSPLUS);
		R(POSTFIX_MINUSMINUS);
		R(EXPR_LIST);
		R(UNARY_PLUSPLUS);
		R(UNARY_MINUSMINUS);
		R(UNARY_STAR);
		R(UNARY_AMPERSAND);
		R(UNARY_PLUS);
		R(UNARY_MINUS);
		R(UNARY_NOT);
		R(UNARY_TILDE);
		R(UNARY_SIZEOF_EXPR);
		R(UNARY_SIZEOF_TYPE);
		R(NEW_EXPR);
		R(NEW_TYPE_ID);
		R(NEW_DECL);
		R(DIRECT_NEW_DECL1);
		R(DIRECT_NEW_DECL2);
		R(DELETE_EXPR1);
		R(DELETE_EXPR2);
		R(PM_EXPR2);
		R(PM_EXPR3);
		R(MULT_EXPR);
		R(DIV_EXPR);
		R(MOD_EXPR);
		R(ADD_EXPR);
		R(SUB_EXPR);
		R(SHIFT_LEFT);
		R(SHIFT_RIGHT);
		R(REL_LT);
		R(REL_GT);
		R(REL_LTEQ);
		R(REL_GTEQ);
		R(EQUAL_EXPR);
		R(NOTEQUAL_EXPR);
		R(AND_EXPR);
		R(XOR_EXPR);
		R(OR_EXPR);
		R(LOGICAL_AND_EXPR);
		R(LOGICAL_OR_EXPR);
		R(TERNARY_EXPR);
		R(ASSIGN_EXPR);
		R(EXPR2);
		R(CASE_STATEMENT);
		R(DEFAULT_STATEMENT);
		R(COMPOUND_STATEMENT);
		R(STATEMENT_SEQ1);
		R(STATEMENT_SEQ2);
		R(IF_STATEMENT);
		R(IF_ELSE_STATEMENT);
		R(SWITCH_STATEMENT);
		R(CONDITION2);
		R(WHILE_LOOP);
		R(DO_WHILE_LOOP);
		R(FOR_LOOP);
		R(BREAK_STATEMENT);
		R(CONTINUE_STATEMENT);
		R(RETURN_STATEMENT);
		R(DECL_SEQ);
		R(SIMPLE_DECL);
		R(DECL_SPEC_SEQ);
		R(NESTED_SIMPLE_TYPE_SPEC);
		R(ELAB_TYPE_SPEC1);
		R(ELAB_TYPE_SPEC2);
		R(INIT_DECL_LIST);
		R(INIT_DECL);
		R(DECL2);
		R(DIRECT_DECL2);
		R(DIRECT_DECL3);
		R(DIRECT_DECL4);
		R(DIRECT_DECL5);
		R(DIRECT_DECL6);
		R(PTR3);
		R(PTR4);
		R(DECL_D3);
		R(TYPE_ID);
		R(TYPE_SPEC_SEQ);
		R(ABSTRACT_DECL);
		R(DIRECT_ABSTRACT_DECL);
		R(DIRECT_ABSTRACT_DECL3);
		R(DIRECT_ABSTRACT_DECL4);
		R(PARAM_DECL_LIST1);
		R(PARAM_DECL1);
		R(PARAM_DECL2);
		R(PARAM_DECL3);
		R(PARAM_DECL4);
		R(CTOR_FUNCTION_DEF);
		R(FUNCTION_DEF);
		R(INITIALIZER);
		R(INIT1);
		R(INIT_CLAUSE2);
		R(INIT_LIST);
		R(CLASS_SPEC);
		R(CLASS_HEAD1);
		R(CLASS_HEAD2);
		R(MEMBER_SPEC1);
		R(MEMBER_SPEC2);
		R(MEMBER_DECL1);
		R(MEMBER_DECL_LIST2);
		R(MEMBER_DECLARATOR1);
		R(MEMBER_DECLARATOR2);
		R(MEMBER_DECLARATOR3);
		R(CONSTANT_INIT);
		R(CTOR_INIT);
		R(MEM_INIT_LIST);
		R(MEM_INIT);
		R(MEM_INIT_ID1);
		R(MEM_INIT_ID3);
		R(TOKEN);
	default:
		return "Rule not found";
	}
}
#undef R
