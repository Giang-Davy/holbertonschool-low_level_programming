#include <linux/kernel.h>
#include <linux/slab.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insère un nouveau noeud à une position donnée
 * @h: pointeur vers la tête de la liste
 * @idx: index où le nouveau noeud doit être inséré
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Retour: adresse du nouveau noeud, ou NULL si l'insertion a échoué
 */
struct dlistint_s *create_node(int n);
struct dlistint_s *insert_at_beginning(struct dlistint_s **h, struct dlistint_s *new_node);
struct dlistint_s *insert_at_position(struct dlistint_s **h, unsigned int idx, struct dlistint_s *new_node);

struct dlistint_s *insert_dnodeint_at_index(struct dlistint_s **h, unsigned int idx, int n)
{
	struct dlistint_s *new_node;

	/* Créer un nouveau noeud */
	new_node = create_node(n);
	if (!new_node)
		return NULL;

	/* Cas spécial: insérer au début */
	if (idx == 0)
		return insert_at_beginning(h, new_node);

	/* Parcourir la liste pour trouver la position */
	return insert_at_position(h, idx, new_node);
}

/**
 * create_node - crée un nouveau noeud avec la valeur donnée
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Retour: le nouveau noeud créé, ou NULL si la création a échoué
 */
struct dlistint_s *create_node(int n)
{
	struct dlistint_s *new_node;

	new_node = kmalloc(sizeof(struct dlistint_s), GFP_KERNEL);
	if (!new_node)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return new_node;
}

/**
 * insert_at_beginning - insère un nouveau noeud au début de la liste
 * @h: pointeur vers la tête de la liste
 * @new_node: nouveau noeud à insérer
 *
 * Retour: adresse du nouveau noeud
 */
struct dlistint_s *insert_at_beginning(struct dlistint_s **h, struct dlistint_s *new_node)
{
	new_node->next = *h;
	if (*h)
		(*h)->prev = new_node;

	*h = new_node;
	return new_node;
}

/**
 * insert_at_position - insère un nouveau noeud à une position spécifique dans la liste
 * @h: pointeur vers la tête de la liste
 * @idx: index où insérer le noeud
 * @new_node: noeud à insérer
 *
 * Retour: adresse du nouveau noeud, ou NULL si l'index est invalide
 */
struct dlistint_s *insert_at_position(struct dlistint_s **h, unsigned int idx,
				      struct dlistint_s *new_node)
{
	struct dlistint_s *current = *h;
	unsigned int i;

	/* Parcourir la liste pour arriver à l'élément avant l'index désiré */
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	/* Si current est NULL, l'index est invalide */
	if (!current) {
		kfree(new_node);
		return NULL;
	}

	/* Insérer le nouveau noeud à la position spécifiée */
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;

	return new_node;
}
