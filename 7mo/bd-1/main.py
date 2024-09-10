import random
import time

class Jugador:
    def __init__(self):
        self.salud = 100
        self.dinero = 50
        self.objetos = []

def imprimir_lento(texto):
    for caracter in texto:
        print(caracter, end='', flush=True)
        time.sleep(random.uniform(0, 0.1))
    print()

def tomar_decision(opciones):
    for i, opcion in enumerate(opciones, 1):
        print(f"{i}. {opcion}")
    while True:
        eleccion = input("¿Qué decides? ")
        if eleccion.isdigit() and 1 <= int(eleccion) <= len(opciones):
            return int(eleccion)
        print("Opción no válida. Intenta de nuevo.")

def evento_aleatorio(jugador):
    eventos = [
        ("Encuentras una moneda de oro.", lambda: setattr(jugador, 'dinero', jugador.dinero + 10)),
        ("Te tropiezas y te lastimas.", lambda: setattr(jugador, 'salud', jugador.salud - 10)),
        ("Encuentras una poción curativa.", lambda: jugador.objetos.append("Poción curativa")),
        ("Un ladrón intenta robarte.", lambda: setattr(jugador, 'dinero', max(0, jugador.dinero - 20))),
    ]
    evento, efecto = random.choice(eventos)
    imprimir_lento(evento)
    efecto()

def mostrar_estado(jugador):
    print(f"\nSalud: {jugador.salud} | Dinero: {jugador.dinero} | Objetos: {', '.join(jugador.objetos)}")

def aventura():
    jugador = Jugador()
    
    imprimir_lento("Bienvenido a la Gran Aventura Interactiva!")
    imprimir_lento("Te encuentras en un mundo mágico lleno de misterios y peligros.")
    
    while jugador.salud > 0:
        mostrar_estado(jugador)
        
        imprimir_lento("\n¿Qué quieres hacer?")
        decision = tomar_decision(["Explorar la cueva oscura", "Visitar el mercado", "Descansar en la posada", "Usar objeto"])
        
        if decision == 1:
            imprimir_lento("Te adentras en la cueva oscura...")
            if random.random() < 0.5:
                imprimir_lento("¡Encuentras un tesoro!")
                jugador.dinero += random.randint(20, 50)
            else:
                imprimir_lento("¡Oh no! ¡Un monstruo te ataca!")
                jugador.salud -= random.randint(10, 30)
        
        elif decision == 2:
            imprimir_lento("Llegas al bullicioso mercado.")
            if jugador.dinero >= 20:
                comprar = tomar_decision(["Comprar poción curativa (20 monedas)", "No comprar nada"])
                if comprar == 1:
                    jugador.dinero -= 20
                    jugador.objetos.append("Poción curativa")
                    imprimir_lento("Compraste una poción curativa.")
            else:
                imprimir_lento("No tienes suficiente dinero para comprar.")
        
        elif decision == 3:
            imprimir_lento("Descansas en la posada y recuperas algo de salud.")
            jugador.salud = min(100, jugador.salud + 20)
        
        elif decision == 4:
            if "Poción curativa" in jugador.objetos:
                jugador.objetos.remove("Poción curativa")
                jugador.salud = min(100, jugador.salud + 50)
                imprimir_lento("Usaste la poción curativa y recuperaste salud.")
            else:
                imprimir_lento("No tienes objetos para usar.")
        
        evento_aleatorio(jugador)
    
    imprimir_lento("¡Oh no! Tu salud ha llegado a 0. La aventura ha terminado.")
    imprimir_lento(f"Terminaste con {jugador.dinero} monedas y los siguientes objetos: {', '.join(jugador.objetos)}")

if __name__ == "__main__":
    aventura()