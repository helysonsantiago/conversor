from ctypes import *
import aspose.words as aw
import ctypes


 

 


#carregando a LIB compartilhada
lib = ctypes.CDLL("C:/Users/helys/Desktop/conversor/convlib.so")

lib.connected()

lib.menu_usuario()

retorna = lib.menu_conversor
retorna.restype = ctypes.POINTER(ctypes.c_char_p)

free_func = lib.free_memory
free_func.argtypes = [ctypes.POINTER(ctypes.c_char_p)]

cstring_pointer = retorna()


cstring = ctypes.c_char_p.from_buffer(cstring_pointer)

string = cstring.value.decode("utf-8")



print(type(string))
print(string)


with open("C:\\Users\\helys\\Desktop\\conversor\\caminho.txt","r") as arquivo:
    caminho = arquivo.read()

docx = aw.Document("C:\\Users\\helys\\Desktop\\conversor\\entradaDeArquivos\\"+caminho)

docx.save("C:\\Users\\helys\\Desktop\\conversor\\arquivosConvertidos\\resultado."+string)
   


free_func(cstring_pointer)






