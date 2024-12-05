from pwn import *
from ctypes import *

p = process("./guess_random")
libc = CDLL("/lib/x86_64-linux-gnu/libc.so.6")

libc.srand(libc.time(0x00))
cracked_random = libc.rand()

p.sendline(str(cracked_random).encode())

p.interactive()