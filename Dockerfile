FROM python:alpine

WORKDIR /app
COPY main.py /app
CMD [ "-p", "./test" ]
ENTRYPOINT [ "python3", "main.py" ]
