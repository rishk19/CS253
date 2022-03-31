INC=Include
SRC=src
OBJ=obj
CPP=g++
# shaper: shape.o rect.o main.o
# 	g++ -o shaper shape.o rect.o main.o

# Book.o: Book.h Book.cpp
# 	g++ -o shape.cpp

# Book_databade.o : Book_database.h Book.h Book_database.cpp
# 	g++ -o Book_database.cpp

# User.o : User.h User.cpp
# 	g++ -o User.cpp

# Professor.o : User.h Book_database.h Book.h Professor.h Professor.cpp
# 	g++ -o Professor.cpp

# Student.o : User.h Book_database.h Book.h Student.h Student.cpp
# 	g++ -o Student.cpp


$(OBJ)/%.exe: $(SRC)/%.cpp
	@mkdir -p $(OBJ) 
	$(CPP) -c $^ -o $@ -I$(SRC) -I$(OBJ) -I$(INC) 



