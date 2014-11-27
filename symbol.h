/*
 * symbol.h - Semantic data for symbols including type and scope.
 *
 * Copyright (C) 2014 Andrew Schwartzmeyer
 *
 * This file released under the AGPLv3.
 *
 */

#ifndef SYMBOL_H
#define SYMBOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

struct tree;
struct hash_node;

void symbol_populate();
struct typeinfo *type_check(struct tree *n);
void symbol_free(struct hash_node *n);

enum type {
	INT_T,
	DOUBLE_T,
	CHAR_T,
	BOOL_T,
	ARRAY_T,
	FUNCTION_T,
	CLASS_T,
	VOID_T,
	UNKNOWN_T
};

struct typeinfo {
	enum type base;
	bool pointer;

	union {
		struct arrayinfo {
			struct typeinfo *type;
			size_t size;
		} array;
		struct functioninfo {
			struct typeinfo *type; /* return */
			struct list *parameters; /* typeinfo */
			struct hasht *symbols; /* NULL until defined */
		} function;
		struct classinfo {
			char *type; /* from yytypes table */
			struct hasht *public;
			struct hasht *private;
		} class;
	};
};

void print_typeinfo(FILE *stream, const char *k, struct typeinfo *v);

#endif /* SYMBOL_H */
