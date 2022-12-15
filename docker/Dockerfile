ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}

ARG COMMIT_HASH=unknown
LABEL vnv.version.swfft=${COMMIT_HASH}


# install swfft with VnV
COPY . ${SOURCE_DIR}/swfft
RUN cd ${SOURCE_DIR}/swfft \
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
 		      --regFile vnv.__registration__\
		      --targetFile $PWD/build/TestDFFT \
	              compile_commands.json\
    && make


ENV VNV_CONFIG=${VNV_CONFIG}:${SOURCE_DIR}/swfft/build/vnv.__registration__
ENV VNV_CONFIG=${VNV_CONFIG}:${SOURCE_DIR}/swfft/docker/config/vnv.__registration__

