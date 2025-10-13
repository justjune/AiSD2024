
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++

FILE_NAME=L203_068

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
	@if command -v pwsh >/dev/null 2>&1; then \
		echo "Using PowerShell Core"; \
		pwsh -Command " \
			$$oldOut = [Console]::OutputEncoding; \
			[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; \
			Write-Host 'Old output encoding: ' $$oldOut.EncodingName; \
			Write-Host 'New output encoding: ' [Console]::OutputEncoding.EncodingName; \
			.\${FILE_NAME}.exe; \
			[Console]::OutputEncoding = $$oldOut; \
			Write-Host 'Encoding restored'"; \
	elif command -v powershell >/dev/null 2>&1; then \
		echo "Using Windows PowerShell"; \
		powershell -Command " \
			$$oldOut = [Console]::OutputEncoding; \
			[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; \
			Write-Host 'Old output encoding: ' $$oldOut.EncodingName; \
			Write-Host 'New output encoding: ' [Console]::OutputEncoding.EncodingName; \
			.\${FILE_NAME}.exe; \
			[Console]::OutputEncoding = $$oldOut; \
			Write-Host 'Encoding restored'"; \
	else \
		echo "PowerShell not found, running directly (Russian text may not display correctly)"; \
		./${FILE_NAME}.exe; \
	fi
else
	@echo "Unix-like OS detected"
	@./${FILE_NAME}.exe
endif
	@$(MAKE) clean


clean:
ifeq ($(OS),Windows_NT)
	@echo "Cleaning Windows..."
	@cmd //c "del /Q ${objects} ${FILE_NAME}.exe 2>nul" || true
else
	@echo "Cleaning Unix..."
	@rm -f ${objects} ${FILE_NAME}.exe
endif