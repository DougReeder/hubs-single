# passes on the host the client asked for
proxy_set_header Host $host;

proxy_set_header X-Forwarded-For $remote_addr;
proxy_set_header X-Forwarded-Proto $scheme;

#proxy_hide_header Foo
