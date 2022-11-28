
import aspose.words as aw

#Este trecho é responsavel por pegar o saida fornecida pelo usuario
with open("valorDoUsuario.txt","r") as arquivo:
    data = arquivo.read()
 
docx = aw.Document ("C:\\Users\\helys\Desktop\python\\entradaArquivos\\sample.docx")
docx.save("C:\\Users\\helys\Desktop\python\\saidaArquivos\\sample."+data)





