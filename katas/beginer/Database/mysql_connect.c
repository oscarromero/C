#include <stdio.h>
#include <stdlib.h>

#include <my_global.h>
#include <mysql.h>

int main (int argc, char** argv) {
  MYSQL *con = mysql_init(NULL);

  if (con == NULL) {
    fprintf(stderr, "%s\n", mysql_error(con));
    exit(1);
  }

  if ( ! mysql_real_connect(con, "localhost", "root", "", "test", 0, 0, 0)) {
    fprintf(stderr, "%s\n", mysql_error(con));
    exit(1);
  }

  mysql_close(con);
  exit(0);
}
