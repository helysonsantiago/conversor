from ctypes import *
import ctypes

#carregando a LIB compartilhada
lib = ctypes.CDLL("C:/Users/helys/Desktop/conv/convlib.so")

lib.connected()


retorna = lib.menu_conversor
retorna.restype = ctypes.POINTER(ctypes.c_char_p)

free_func = lib.free_memory
free_func.argtypes = [ctypes.POINTER(ctypes.c_char_p)]


cstring_pointer = retorna()

cstring = ctypes.c_char_p.from_buffer(cstring_pointer)

string = (cstring.value).decode("utf-8")

print(string)





free_func(cstring_pointer)

