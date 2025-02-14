CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = listaSequencial

$(TARGET): listaSequencial.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) listaSequencial.cpp

clean:
	rm -f $(TARGET)
