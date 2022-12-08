from ctypes import *
import aspose.words as aw
import ctypes

#carregando a LIB compartilhada
lib = ctypes.CDLL("C:/Users/Lenovo/Desktop/tb/convlib.so")

lib.connected()
lib.menu_conversor

retorna = lib.menu_conversor
retorna.restype = ctypes.POINTER(ctypes.c_char_p)

free_func = lib.free_memory
free_func.argtypes = [ctypes.POINTER(ctypes.c_char_p)]

cstring_pointer = retorna()
cstring = ctypes.c_char_p.from_buffer(cstring_pointer)
string = cstring.value.decode("utf-8")

with open("C:\\Users\\Lenovo\\Desktop\\tb\\caminho.txt","r") as arquivo:
 
    caminho = arquivo.read()
    docx = aw.Document("C:\\Users\\Lenovo\\Desktop\\tb\\entradaDeArquivos\\"+caminho)
    docx.save("C:\\Users\\Lenovo\\Desktop\\tb\\saidaDeArquivos\\resultado."+string)

free_func(cstring_pointer)

    




