FROM ubuntu:20.04
WORKDIR /app

# OPTIMIZATION [[
COPY ./configure ./
RUN ./configure
# ]]

COPY . ./
RUN ./run
