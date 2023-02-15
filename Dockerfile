FROM openjdk:11
EXPOSE 8080
ADD target/2023-1.jar 2023-1.jar
ENTRYPOINT ['java', '-jar', "/2023-1.jar"]
