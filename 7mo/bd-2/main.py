# Ejercicio 1: Lista de estudiantes con su edad
def encontrar_edades_extremas(estudiantes):
    if not estudiantes:
        return None, None
    
    estudiante_mayor = max(estudiantes, key=lambda x: x[1])
    estudiante_menor = min(estudiantes, key=lambda x: x[1])
    
    return estudiante_mayor, estudiante_menor

# Ejercicio 2: Diccionario de productos y precios
def calcular_total(productos, compra):
    total = 0
    for producto, cantidad in compra.items():
        if producto in productos:
            total += productos[producto] * cantidad
    return total

# Ejercicio 3: Registro de personas y filtrado por edad
def registrar_persona(registro, nombre, edad, correo):
    registro[nombre] = {"edad": edad, "correo": correo}

def filtrar_mayores_de_edad(registro):
    return {nombre: datos for nombre, datos in registro.items() if datos["edad"] >= 18}

# Ejercicio 4: Ordenar abecedario desordenado
def ordenar_abecedario(abecedario_desordenado):
    orden_espanol = 'abcdefghijklmnñopqrstuvwxyz'
    return sorted(abecedario_desordenado, key=lambda x: orden_espanol.index(x))

# Ejercicio 5: Registro de transacciones bancarias

def crear_cuenta(numero_cuenta, saldo_inicial):
    return {
        "numero_cuenta": numero_cuenta,
        "saldo": saldo_inicial,
        "transacciones": []
    }

def registrar_transaccion(cuenta, tipo, monto):
    if tipo not in ["depósito", "retiro"]:
        return "Tipo de transacción inválido"
    
    if tipo == "retiro" and monto > cuenta["saldo"]:
        return "Saldo insuficiente"
    
    cuenta["transacciones"].append({
        "tipo": tipo,
        "monto": monto,
        "saldo_anterior": cuenta["saldo"],
        "saldo_nuevo": cuenta["saldo"] + monto if tipo == "depósito" else cuenta["saldo"] - monto
    })
    
    if tipo == "depósito":
        cuenta["saldo"] += monto
    else:
        cuenta["saldo"] -= monto
    
    return "Transacción registrada con éxito"

def obtener_saldo(cuenta):
    return cuenta["saldo"]

def obtener_historial(cuenta):
    return cuenta["transacciones"]


# Ejemplos de uso
if __name__ == "__main__":
    # Ejercicio 1
    estudiantes = [("Ana", 20), ("Carlos", 18), ("María", 22), ("Pedro", 19)]
    mayor, menor = encontrar_edades_extremas(estudiantes)
    print(f"Estudiante mayor: {mayor}")
    print(f"Estudiante menor: {menor}")

    # Ejercicio 2
    productos = {"manzana": 0.5, "pan": 1.0, "leche": 2.0}
    compra = {"manzana": 3, "pan": 2, "leche": 1}
    total = calcular_total(productos, compra)
    print(f"Total a pagar: ${total}")

    # Ejercicio 3
    registro_personas = {}
    registrar_persona(registro_personas, "Juan", 25, "juan@email.com")
    registrar_persona(registro_personas, "Ana", 17, "ana@email.com")
    registrar_persona(registro_personas, "Carlos", 30, "carlos@email.com")
    
    mayores_de_edad = filtrar_mayores_de_edad(registro_personas)
    print("Personas mayores de edad:")
    for nombre, datos in mayores_de_edad.items():
        print(f"{nombre}: {datos}")
    
    # Ejercicio 4
    print("\nEjercicio 4: Ordenar abecedario desordenado")
    abecedario_desordenado = list('zyxwvutsrqponmlkjihñgfedcba')
    print(f"Abecedario desordenado ({len(abecedario_desordenado)} letras): {abecedario_desordenado}")
    
    abecedario_ordenado = ordenar_abecedario(abecedario_desordenado)
    print(f"Abecedario ordenado ({len(abecedario_ordenado)} letras): {abecedario_ordenado}")
    
    print("\nPosición de cada letra en el abecedario ordenado:")
    for indice, letra in enumerate(abecedario_ordenado, start=1):
        print(f"  Letra '{letra}' en posición {indice}")

    # Ejercicio 5
    print("\nEjercicio 5: Registro de transacciones bancarias")
    
    # Crear una cuenta
    mi_cuenta = crear_cuenta("12345", 1000)
    print(f"Cuenta creada: {mi_cuenta['numero_cuenta']}, Saldo inicial: ${mi_cuenta['saldo']}")
    
    # Realizar transacciones
    print(registrar_transaccion(mi_cuenta, "depósito", 500))
    print(registrar_transaccion(mi_cuenta, "retiro", 200))
    print(registrar_transaccion(mi_cuenta, "depósito", 1000))
    print(registrar_transaccion(mi_cuenta, "retiro", 1500))
    
    # Intentar un retiro mayor al saldo
    print(registrar_transaccion(mi_cuenta, "retiro", 2000))
    
    # Mostrar saldo actual
    print(f"Saldo actual: ${obtener_saldo(mi_cuenta)}")
    
    # Mostrar historial de transacciones
    print("\nHistorial de transacciones:")
    for transaccion in obtener_historial(mi_cuenta):
        print(f"  Tipo: {transaccion['tipo']}, Monto: ${transaccion['monto']}, " 
              f"Saldo anterior: ${transaccion['saldo_anterior']}, "
              f"Nuevo saldo: ${transaccion['saldo_nuevo']}")