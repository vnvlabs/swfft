ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}

# install swfft with VnV
COPY . ${SOFTWARE_DIR}/swfft
RUN cd ${SOFTWARE_DIR}/swfft \
    && make clean \
    && bear make  \
    && ${VNV_MATCHER} --package SWFFT\ 
                      --output reg_SWFFT.cpp\
                      --cache vnv.__cache__\
		              --fix-omp \ 
 		              compile_commands.json \
    && ${VNV_MATCHER} --package TestDFFT\ 
                      --output reg_TestDFFT.cpp\
                      --cache vnv.__cache__\
		              --targetFile $PWD/build/TestDFFT \
	                  compile_commands.json\
    && make



