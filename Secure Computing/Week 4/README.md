echo "amooora" > plaintext.txt

Generate private key:
openssl genpkey -algorithm RSA -out private_key.pem -pkeyopt rsa_keygen_bits:2048

Extract public key:
openssl rsa -in private_key.pem -pubout -out public_key.pem

Encrypt using public key:
openssl pkeyutl -encrypt -pubin -inkey public_key.pem -in plaintext.txt -out encrypted.bin

Decrypt using private key:
openssl pkeyutl -decrypt -inkey private_key.pem -in encrypted.bin -out decrypted.txt

Check both files integrity:
diff <(sha256sum plaintext.txt) <(sha256sum decrypted.txt)
