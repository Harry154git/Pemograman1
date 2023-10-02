sepatu_A=400000
sepatu_B=350000
diskon_sepatu_A=13/100
diskon_sepatu_B=21/100
harga_sepatu_A=round(sepatu_A-sepatu_A*diskon_sepatu_A)
harga_sepatu_B=round(sepatu_B-sepatu_B*diskon_sepatu_B)
print("Harga sepatu A adalah "+ str(sepatu_A))
print("Harga sepatu B adalah "+ str(sepatu_B))
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi "+str(harga_sepatu_A))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi "+str(harga_sepatu_B))