# Sistema de Gestión de Empleados

empleados = [
    {"nombre": "Barbé Alan", "edad": 19, "puesto": "Desarrollador Frontend"},
    {"nombre": "Berardi Facundo", "edad": 19, "puesto": "Desempleado"},
    {"nombre": "Cataldo Santino", "edad": 19, "puesto": "Desarrollador Full Stack"},
    {"nombre": "Córdoba Alan", "edad": 19, "puesto": "Desarrollador Full Stack"},
    {"nombre": "Di Mauro Tomas", "edad": 19, "puesto": "Co-Founder, Lead Developer"},
    {"nombre": "Enriquez Kiara", "edad": 19, "puesto": "Frontend Developer"},
    {"nombre": "Fidanza Juan Ignacio", "edad": 19, "puesto": "Técnico de Redes"},
    {"nombre": "López Luca", "edad": 19, "puesto": "Ferretero"},
    {"nombre": "Ricardo Camila", "edad": 19, "puesto": "Motera"},
    {"nombre": "Sado Nataly", "edad": 32, "puesto": "Jubilada"},
]

def agregar_empleado():
    """
    Permite agregar un nuevo empleado al registro.
    
    Pasos:
    1. Solicita al usuario ingresar el nombre del empleado.
    2. Solicita al usuario ingresar la edad del empleado.
    3. Solicita al usuario ingresar el puesto del empleado.
    4. Crea un diccionario con la información del empleado.
    5. Agrega el diccionario a la lista de empleados.
    6. Confirma al usuario que el empleado ha sido agregado.
    
    Esta función no realiza validaciones complejas de los datos ingresados.
    """
    nombre = input("Ingrese el nombre del empleado: ")
    edad = int(input("Ingrese la edad del empleado: "))
    puesto = input("Ingrese el puesto del empleado: ")
    empleados.append({"nombre": nombre, "edad": edad, "puesto": puesto})
    print(f"Empleado {nombre} agregado con éxito.")

def listar_empleados():
    """
    Muestra una lista numerada de todos los empleados registrados.
    
    Si no hay empleados registrados, muestra un mensaje indicándolo.
    Para cada empleado, muestra:
    - Número de índice (comenzando desde 1)
    - Nombre
    - Edad
    - Puesto
    
    Esta función es útil para visualizar rápidamente todos los empleados
    y se utiliza en otras funciones donde se necesita seleccionar un empleado.
    """
    if not empleados:
        print("No hay empleados registrados.")
    else:
        for i, emp in enumerate(empleados, 1):
            print(f"{i}. Nombre: {emp['nombre']}, Edad: {emp['edad']}, Puesto: {emp['puesto']}")

def actualizar_empleado():
    """
    Permite actualizar la edad o el puesto de un empleado existente.
    
    Pasos:
    1. Muestra la lista de empleados.
    2. Solicita al usuario seleccionar un empleado por su índice.
    3. Ofrece la opción de actualizar edad o puesto.
    4. Actualiza la información seleccionada con el nuevo valor proporcionado.
    
    Maneja errores de entrada inválida para el índice del empleado.
    """
    listar_empleados()
    if empleados:
        indice = int(input("Ingrese el número del empleado a actualizar: ")) - 1
        if 0 <= indice < len(empleados):
            print("1. Actualizar edad")
            print("2. Actualizar puesto")
            opcion = input("Seleccione qué desea actualizar (1/2): ")
            if opcion == "1":
                nueva_edad = int(input("Ingrese la nueva edad: "))
                empleados[indice]["edad"] = nueva_edad
            elif opcion == "2":
                nuevo_puesto = input("Ingrese el nuevo puesto: ")
                empleados[indice]["puesto"] = nuevo_puesto
            print("Información actualizada con éxito.")
        else:
            print("Índice de empleado inválido.")

def eliminar_empleado():
    """
    Permite eliminar un empleado del registro.
    
    Pasos:
    1. Muestra la lista de empleados.
    2. Solicita al usuario seleccionar un empleado por su índice.
    3. Elimina el empleado seleccionado de la lista.
    
    Maneja errores de entrada inválida para el índice del empleado.
    """
    listar_empleados()
    if empleados:
        indice = int(input("Ingrese el número del empleado a eliminar: ")) - 1
        if 0 <= indice < len(empleados):
            empleado = empleados.pop(indice)
            print(f"Empleado {empleado['nombre']} eliminado con éxito.")
        else:
            print("Índice de empleado inválido.")

def calcular_promedio_edad():
    """
    Calcula y muestra la edad promedio de todos los empleados registrados.
    
    Si no hay empleados registrados, muestra un mensaje indicando que no se puede calcular.
    """
    if empleados:
        promedio = sum(emp["edad"] for emp in empleados) / len(empleados)
        print(f"La edad promedio de los empleados es: {promedio:.2f} años.")
    else:
        print("No hay empleados registrados para calcular el promedio de edad.")

def menu():
    """
    Muestra el menú principal del programa y maneja la interacción con el usuario.
    
    Permite al usuario seleccionar entre las diferentes operaciones disponibles:
    1. Agregar empleado
    2. Listar empleados
    3. Actualizar información de empleado
    4. Eliminar empleado
    5. Calcular edad promedio
    6. Salir del programa
    
    El bucle continúa hasta que el usuario elige salir.
    """
    while True:
        print("\n--- Sistema de Gestión de Empleados ---")
        print("1. Agregar empleado")
        print("2. Listar empleados")
        print("3. Actualizar información de empleado")
        print("4. Eliminar empleado")
        print("5. Calcular edad promedio")
        print("6. Salir")
        opcion = input("Seleccione una opción: ")
        
        if opcion == "1":
            agregar_empleado()
        elif opcion == "2":
            listar_empleados()
        elif opcion == "3":
            actualizar_empleado()
        elif opcion == "4":
            eliminar_empleado()
        elif opcion == "5":
            calcular_promedio_edad()
        elif opcion == "6":
            print("Gracias por usar el Sistema de Gestión de Empleados.")
            break
        else:
            print("Opción inválida. Por favor, intente de nuevo.")

if __name__ == "__main__":
    menu()