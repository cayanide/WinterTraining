cd ~/Work/WinterTraining/Sql
g++ -Wall -Wextra -I$MYSQL_INCLUDE_PATH -L$MYSQL_LIB_PATH -lmysqlclient -o try try.cpp

export DYLD_LIBRARY_PATH="$MYSQL_LIB_PATH:$DYLD_LIBRARY_PATH"
./try
