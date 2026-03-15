# Wireshark Lab

## Task 1
filter: tcp.flags.syn == 1 && tcp.flags.ack == 1

this shows tcp packets. syn and ack are both 1. this is the handshake.
took a screenshot.

## Task 2
filter: dns

found wikipedia.org resolved to 185.15.58.224 (via CNAME dyna.wikimedia.org).
packet 7206 — response from 192.168.83.2 to 192.168.83.133.

another dns query found: fonts.googleapis.com → 142.250.203.234 (google fonts, packet 161).

dns is important because without it you have to type ip addresses which is hard.

## Task 3
filter: http, then tls

http GET request found in packet 738 — server 199.59.243.228 replied with 200 OK (JSON).
you can see the full request and response in plain text.

tls packet 77 — 192.168.83.133 sent Change Cipher Spec to 34.107.243.93.
after that everything is Application Data — completely unreadable.

http is bad because anyone can see it. https is good because they cant.

reasons https is better:
- encrypts data so nobody can read it
- also stops people from changing the data midway

## Task 4
filter: http.request.method == "POST"

packet 5439 — GET /basic-auth/user/passwd from 192.168.83.133 to 54.84.170.143.
expanded the request. credentials were visible in plain text.

username: user
password: passwd

just sitting there unencrypted. very easy to find.
this happens because http doesnt encrypt anything at all.
to fix it just use https instead.