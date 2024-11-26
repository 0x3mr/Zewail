Commands:

sudo docker build -t hello-world-test .

sudo docker run -p 4000:4000 -v $(pwd):/app hello-world-test

sudo docker-compose up --build

sudo docker-compose down