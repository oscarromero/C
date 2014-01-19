#include <stdio.h>
#include <stdlib.h>

#include <my_global.h>
#include <mysql.h>

int main () {
  printf("MySQL Client version: %s\n", mysql_get_client_info());
}
