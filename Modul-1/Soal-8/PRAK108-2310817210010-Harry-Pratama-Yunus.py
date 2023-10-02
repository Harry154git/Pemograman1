putaran=5
jarak_tempuh=14
putaran_1=jarak_tempuh*1000/putaran
x=2*3.14
r=putaran_1/x
jari_jari=round(r/1000,2)
print("Diketahui :")
print("Pak Dengklek mengelilingi taman = "+str(putaran)+" putaran")
print("Jarak tempuh Pak Dengklek = "+str(jarak_tempuh)+" Kilometer\n")
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah "+str(jari_jari)+" Kilometer")