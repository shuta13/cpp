FROM ubuntu
RUN apt-get update && apt-get install -y build-essential git libssl-dev cmake clang