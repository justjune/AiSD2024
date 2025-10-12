
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++

FILE_NAME=L606_219

objects=${FILE_NAME}.o ${FILE_NAME}test.o graph.o set_union.o
${FILE_NAME}.exe: $(objects)
	$(CXX) -o ${FILE_NAME}.exe $(objects) 

${FILE_NAME}.o: ${FILE_NAME}.cpp
	$(CXX) -c ${FILE_NAME}.cpp 

${FILE_NAME}test.o: ${FILE_NAME}test.cpp ${FILE_NAME}.hpp
	${CXX} -c ${FILE_NAME}test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

set_union.o: ../L608_221/set_union.cpp
	$(CXX) -c ../L608_221/set_union.cpp

.PHONY: clean test
test: ${FILE_NAME}.exe
	@echo "Running tests..."
	@if [ "$$OS" = "Windows_NT" ]; then \
		echo "Windows OS detected"; \
		old_cp=$$(chcp | sed 's/.*: //'); \
		echo "Current code page: $$old_cp"; \
		chcp 65001 > nul; \
		./${FILE_NAME}.exe; \
		chcp $$old_cp > nul; \
		echo "Restored code page: $$old_cp"; \
	else \
		echo "Unix-like OS detected"; \
		./${FILE_NAME}.exe; \
	fi
	@$(MAKE) clean


clean:
	rm -f ${objects} ${FILE_NAME}.exe

