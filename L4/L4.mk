# # L402_132reval!
RM = del
# # Имя исполняемого файла
TARGET = L402_132reval
# # Исходные файлы
SRCS = L402_132.cpp L402_132reval.cpp
# # Объектные файлы
OBJS = $(SRCS:.cpp=.o)

# # Линковка объектных файлов в исполняемый файл
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET).exe

# # Правило для компиляции .cpp в .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@



.PHONY: clean
clean:
	$(RM) $(objects) $(l101022o) $(l604217o) ${l606219o} ${l610229o} m.exe L101022.exe L604_217.exe L606_219.exe L610_229.exe


