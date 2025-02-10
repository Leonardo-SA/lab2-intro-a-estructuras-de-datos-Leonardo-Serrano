# Definición del compilador
CXX = g++

# Directorios
SRC_DIR = src
BUILD_DIR = build

# Asegurar que el directorio de compilación exista
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Reglas independientes para cada ejecutable
ej1: $(SRC_DIR)/ejercicio1/ejercicio1.cpp | $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/ej1 $(SRC_DIR)/ejercicio1/ejercicio1.cpp
	./build/ej1

ej2: $(SRC_DIR)/ejercicio2/ejercicio2.cpp | $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/ej2 $(SRC_DIR)/ejercicio2/ejercicio2.cpp
	./build/ej2

ej3: $(SRC_DIR)/ejercicio3/ejercicio3.cpp | $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/ej3 $(SRC_DIR)/ejercicio3/ejercicio3.cpp
	./build/ej3

ej4: $(SRC_DIR)/ejercicio4/ejercicio4.cpp | $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/ej4 $(SRC_DIR)/ejercicio4/ejercicio4.cpp
	./build/ej4

ej5: $(SRC_DIR)/ejercicio5/ejercicio5.cpp | $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/ej5 $(SRC_DIR)/ejercicio5/ejercicio5.cpp
	./build/ej5

ej6: $(SRC_DIR)/ejercicio6/ejercicio6.cpp | $(BUILD_DIR)
	$(CXX) -o $(BUILD_DIR)/ej6 $(SRC_DIR)/ejercicio6/ejercicio6.cpp
	./build/ej6

# Limpiar archivos compilados
clean:
	rm -rf $(BUILD_DIR)/*.o $(BUILD_DIR)/*
