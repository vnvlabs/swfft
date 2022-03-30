ARG FROM_IMAGE=vnv_base
FROM ${FROM_IMAGE}:latest

# install swfft with VnV
COPY . ./swfft
RUN cd swfft && make clean && bear make  
RUN cd swfft && ${VNV_MATCHER} --package SWFFT --output reg_SWFFT.C compile_commands.json && make
RUN cd ./swfft/build && ./TestDfft 10 10 



ARG COMMIT_HASH=unknown
LABEL vnv.version.swfft=${COMMIT_HASH}

ENV VNV_CONFIG=${VNV_CONFIG}:/swfft/.vnv-config.json

