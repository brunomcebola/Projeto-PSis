#ifndef _KVS_LIB_H

#define _KVS_LIB_H

int establish_connection(char *group_id, char *secret);
int put_value(char *key, char *value);
int get_value(char *key, char **value);
int delete_value(char *key);
int register_callback(char *key, void (*callback_funcation)(char *));
int close_connetion();

#endif