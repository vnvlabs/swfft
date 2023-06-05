ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}

ARG COMMIT_HASH=unknown
LABEL vnv.version.swfft=${COMMIT_HASH}


# install swfft with VnV
COPY . ${SOFTWARE_DIR}/swfft
RUN cd ${SOFTWARE_DIR}/swfft \
    && make clean \
    && bear make  \
    && ${VNV_MATCHER} --package SWFFT\ 
                      --output reg_SWFFT.cpp\
                      --cache vnv.__cache__\
		              --fix-omp \ 
                      --regFile vnv.__registration__ \
 		              compile_commands.json \
    && ${VNV_MATCHER} --package TestDFFT\ 
                      --output reg_TestDFFT.cpp\
                      --cache vnv.__cache__\
 		              --regFile vnv.__registration__\
		              --targetFile $PWD/build/TestDFFT \
	                  compile_commands.json\
    && make


ENV VNV_CONFIG=${VNV_CONFIG}:${SOFTWARE_DIR}/swfft/vnv.__registration__
ENV VNV_CONFIG=${VNV_CONFIG}:${SOFTWARE_DIR}/swfft/vnv/gui/config/vnv.__registration__

