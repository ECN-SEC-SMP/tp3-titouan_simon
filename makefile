CXX = g++
CXXFLAGS = -Wall -std=c++23
TARGET = main.out
SOURCES = main.cpp 
BUILD_DIR = build
OBJECTS = $(SOURCES:%.cpp=$(BUILD_DIR)/%.o)

all: $(TARGET)

$(TARGET): $(BUILD_DIR) $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/$(TARGET) $(OBJECTS)

$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean all