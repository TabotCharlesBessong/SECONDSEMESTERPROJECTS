
import hashlib
# print(hashlib.algorithms_guaranteed)
md5 = hashlib.md5()
print(type(md5))
print(md5)
md5.update(b'Python')
print(md5.digest())
print(md5.hexdigest())

sha = hashlib.sha1(b'Python').hexdigest()
print(sha,"sha")

hashed_string = hashlib.sha224(b'Hello world!')
hex_digest = hashed_string.hexdigest()
print(hex_digest)
