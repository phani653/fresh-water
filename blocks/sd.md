* Problem will occur if multiple programs are running on multiple computers via Network trying to achieve a single task
* The main challenge in distributed systems is: <b>Fault tolerance</b> -> The System as a whole should continue work, even when some parts are faulty.
* <b>Latency</b> -> Time till the message receives
* <b>Bandwidth</b> -> Data volume per unit time
* <b>Service-oriented Architecture/Microservices:</b> Splitting a large software application into multiple services(on multiple nodes) that communicate via RPC
* SLO (Service Level Objective):
    * ex: 99.9% of requests in a day get a response in 200 ms
* SLA (Service Level Agrrement):
    * Contract specifying some SLO, penalties for violation
 * Network Models - Reliable, Fair-loss or arbitrary
 * Node Models - Crash-stop, Crash-recovery or Byzantine
 * Time Models - Synchronous, Partially synchronous or Asynchronous
 * 
* MD5
----
* Message Digest Algorithm 5
* A message digest is a numeric representation of a message computed by a cryptographic hash algorithm or a function. Regardless of the size of the message, the message digest produces a numeric representation of a fixed size when hashed. It is used to ensure and verify that a message is genuine.
* MD5 is a widely used cryptographic hash function that produces a 128-bit (16-byte) hash value.
* Regardless of the input size, the output (hash) size is always 128 bits or 32 hexadecimal characters.
* One-Way function: MD5 is a one-way function, meaning it's computationally infeasible to reverse the process and obtain the original input from the hash value.
* May be vunaralable for collision

Sha256sum
---------
* SHA-256 is a cryptographic hash function that belongs to the SHA-2 family. It produces a 256-bit (32-byte) hash value, typically represented as a 64-character hexadecimal number. SHA-256 is widely used for securing sensitive information and verifying data integrity.
* Similar to MD5, SHA-256 is a hash function. It takes an input of any size and produces a fixed-size output, specifically 256 bits or 64 hexadecimal characters.
* One-Way function: SHA-256 is a one-way function, meaning it's computationally infeasible to reverse the process and obtain the original input from the hash value.
* Diddicult to get collision
* Grteat for password hashing and security relate things

Base62
-------
* Base62 is a numeral system with a radix of 62, meaning it uses 62 distinct characters to represent numbers. The characters typically include uppercase and lowercase letters (26 each) and digits (10), resulting in a total of 62 characters. This encoding scheme is often used in computing for various purposes, including shortening URLs, generating unique identifiers, and encoding data in a URL-safe and human-readable format.
* The length of a Base62-encoded string varies based on the value it represents. Larger values will result in longer strings.
* URL-Safe: Base62 is often preferred in scenarios where the encoded data will be included in URLs. The choice of characters ensures that Base62-encoded strings are safe for inclusion in URLs without the need for URL encoding.

