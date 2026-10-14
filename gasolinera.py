print("SISTEMA DE ESTACION DE GASOLINA")
def main(prp):
    tsd = 850
    ts = 1.5
    input(("Escriba su presupuesto en BOLIVARES: "))
    prp = input()
    pass

    dls = float(prp / tsd)
    choice = input(f"Su presupuesto es de {dls} dolares, desea continuar: (Y/n)")
    if choice.upper() == "Y":
        ltsch = input(f"Surtira {dls * ts} litros , presione Y/n")
        if ltsch == "Y":
            print("Surtido con exito")
        elif ltsch == "n":
            print("Adios")
    else:
        print("Adios")

    
    return dls , choice , ts , ltsch

main(2000)