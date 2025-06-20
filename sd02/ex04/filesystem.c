#include "filesystem.h"

FSNode *create_file(const char *name, int size)
{
	FSNode *lst;

	lst = malloc(sizeof(FSNode));
	lst->type = FILE;
	lst->size = size;
	lst->name = name;
	lst->next = NULL;
	return lst;
}

FSNode *create_folder(const char *name)
{
	FSNode *lst;

	lst = malloc(sizeof(FSNode));
	lst->type = FOLDER;
	lst->size = 0;
	lst->name = name;
	lst->next = NULL;
	return lst;
}

void add_child(FSNode *parent, FSNode *child)
{
	if (!parent || !child)
		return ;
	if(parent->type == FILE)
		return;
	while(parent->next != NULL)
		parent = parent->next;
	parent->next = child;

}

FSNode *get_children(const FSNode *parent)
{
	return parent->next;
}

FSNode *get_sibling(const FSNode *node)
{
	return node->next;
}
