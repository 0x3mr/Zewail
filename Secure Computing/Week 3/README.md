List all possible ciphers
openssl enc -ciphers

To encrypt:
openssl enc ENCRYPTION_ALGORITHM -pbkdf2 -salt -in plaintext.txt -out encrypted.bin

To decrypt:
openssl enc -d -aes-256-cbc -pbkdf2 -salt -in encrypted.bin -out decrypted.txt

---

ENCRYPTION_ALGORITHM = -aes-256-cbc
.bin = binary file
salt = add random bits if both passwords are equal
pbkdf2 = password based key derivation function 2
