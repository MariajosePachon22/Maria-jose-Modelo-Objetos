vertices = []
caras = []

while True:
    print("MENÚ")
    print("1. Ingresar vértice")
    print("2. Ingresar cara")
    print("3. Imprimir figura")
    print("4. Salir")
    
    opcion = int(input("Seleccione una opción: "))
    
    if opcion == 1:
        x = float(input("Ingrese la coordenada x del vértice: "))
        y = float(input("Ingrese la coordenada y del vértice: "))
        z = float(input("Ingrese la coordenada z del vértice: "))
        vertices.append((x, y, z))
    
    elif opcion == 2:
        if len(vertices) == 0:
            print("¡Debe ingresar al menos un vértice!")
        else:
            cara = []
            cantidad = int(input("¿Cuántos vértices tiene esta cara? "))
            for i in range(cantidad):
                indice = int(input(f"Ingrese el índice del vértice {i+1}: "))
                if indice < len(vertices):
                    cara.append(indice)
                else:
                    print("Índice no válido.")
                    break
            else:
                caras.append(cara)
    
    elif opcion == 3:
        print("Vértices:")
        for i in range(len(vertices)):
            print(f"Vértice {i}: {vertices[i]}")

        print("Caras:")
        for i in range(len(caras)):
            print(f"Cara {i}: {caras[i]}")

    elif opcion == 4:
        print("¡FIN!")
        break

    else:
        print("Opción no válida. Intente de nuevo.")
