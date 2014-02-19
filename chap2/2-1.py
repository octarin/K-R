liste = {"char":1, "short":2, "int":4, "long":8}

for i in liste:
    print("printf(\"unsigned", i, ":", 0, '-', 2**(liste[i]*8)-1, "\\n\");")
    print("printf(\"signed", i, ":", -(2**(liste[i] * 7)), '-', 2**(liste[i] * 7) - 1, "\\n\");")

