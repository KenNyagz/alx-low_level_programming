#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht) {
    if (ht == NULL) {
        return; // If ht is NULL, there's nothing to delete
    }

    for (unsigned long int i = 0; i < ht->size; i++) {
        hash_node_t *current = ht->array[i];

        while (current != NULL) {
            hash_node_t *next = current->next; // Store the next node
            free(current->key);
            free(current->value);
            free(current);
            current = next; // Update current to point to the next node
        }
    }

    free(ht->array);
    free(ht);

}
