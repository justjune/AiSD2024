
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++

FILE_NAME=L610_229

objects=${FILE_NAME}.o ${FILE_NAME}test.o graph.o
${FILE_NAME}.exe: $(objects)
	$(CXX) -o ${FILE_NAME}.exe $(objects) 

${FILE_NAME}.o: ${FILE_NAME}.cpp
	$(CXX) -c ${FILE_NAME}.cpp 

${FILE_NAME}test.o: ${FILE_NAME}test.cpp ${FILE_NAME}.hpp
	${CXX} -c ${FILE_NAME}test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean test
test: ${FILE_NAME}.exe
	@echo "Running tests..."
ifeq ($(OS),Windows_NT)
	@echo "Windows OS detected"
	@where pwsh >nul 2>&1 && ( \
    	echo "Using PowerShell Core" && \
    	pwsh -Command " \
      		$$oldOut = [Console]::OutputEncoding; \
      		[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; \
      		$$newOut = [Console]::OutputEncoding; \
      		Write-Host 'Old output encoding: ' $$oldOut.EncodingName; \
      		Write-Host 'New output encoding: ' $$newOut.EncodingName; \
      		.\${FILE_NAME}.exe; \
      		[Console]::OutputEncoding = $$oldOut; \
      		$$restoredOut = [Console]::OutputEncoding; \
      		Write-Host 'Encoding restored'; \
      	Write-Host 'Restored output encoding: ' $$restoredOut.EncodingName" \
  	) || \
	where powershell >nul 2>&1 && ( \
		echo "Using Windows PowerShell" && \
		powershell -Command " \
			$$oldOut = [Console]::OutputEncoding; \
			[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; \
			$$newOut = [Console]::OutputEncoding; \
			Write-Host 'Old output encoding: ' $$oldOut.EncodingName; \
			Write-Host 'New output encoding: ' $$newOut.EncodingName; \
			.\${FILE_NAME}.exe; \
			[Console]::OutputEncoding = $$oldOut; \
			$$restoredOut = [Console]::OutputEncoding; \
			Write-Host 'Encoding restored'; \
			Write-Host 'Restored output encoding: ' $$restoredOut.EncodingName" \
	) || \
	echo "PowerShell not found, running directly (Russian text may not display correctly)" && \
		./${FILE_NAME}.exe
else
	@echo "Unix-like OS detected"
	@./${FILE_NAME}.exe
endif
	@$(MAKE) clean


clean:
ifeq ($(OS),Windows_NT)
	@echo "Cleaning Windows..."
	@del /Q ${objects} ${FILE_NAME}.exe > nul || \
	rm -f ${objects} ${FILE_NAME}.exe
else
	@echo "Cleaning Unix-like..."
	@rm -f ${objects} ${FILE_NAME}.exe
endif
