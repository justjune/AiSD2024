
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++

FILE_NAME=L909_373

objects=${FILE_NAME}.o ${FILE_NAME}test.o
${FILE_NAME}.exe: $(objects)
	$(CXX) -o ${FILE_NAME}.exe $(objects) 

${FILE_NAME}.o: ${FILE_NAME}.cpp
	$(CXX) -c ${FILE_NAME}.cpp 

${FILE_NAME}test.o: ${FILE_NAME}test.cpp ${FILE_NAME}.hpp
	${CXX} -c ${FILE_NAME}test.cpp


.PHONY: clean test
test: ${FILE_NAME}.exe
	@echo "Running tests..."
ifeq ($(OS),Windows_NT)
	@echo "Windows OS detected"
	@for /f "tokens=4" %%i in ('chcp') do set OLD_CP=%%i & \
    	echo Current code page: %%i & \
    	echo Change code page to UTF-8 & \
    	chcp 65001 & \
    	${FILE_NAME}.exe & \
    	chcp %%i > nul & \
    	echo Restored code page: %%i
else
	@echo "Unix-like OS detected"
	@./${FILE_NAME}.exe
endif
	@$(MAKE) clean


clean:
ifeq ($(OS),Windows_NT)
	@echo "Cleaning Windows..."
	@del /Q ${objects} ${FILE_NAME}.exe || rm -f ${objects} ${FILE_NAME}.exe
else
	@echo "Cleaning Unix-like..."
	@rm -f ${objects} ${FILE_NAME}.exe
endif