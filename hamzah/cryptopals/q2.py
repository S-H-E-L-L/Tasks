from binascii import unhexlify

a = unhexlify('1c0111001f010100061a024b53535009181c')
b = unhexlify('686974207468652062756c6c277320657965')

print(bytes([x ^ y for (x, y) in zip(a, b)]))
