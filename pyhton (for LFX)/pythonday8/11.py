# how to connect an API
import requests

base_url = "https://pokeapi.co/api/v2/"

def get_pokemon_info(name):
    url = f"{base_url}/pokemon/{name}"
    respine = requests.get(url)
    
    if respine.status_code == 200:
        pokemon_data = respine.json()
        return pokemon_data
    else:
        print(f"failed to retrive data {respine.status_code}")

pokemone_name = "snorlax"
pokemon_info = get_pokemon_info(pokemone_name)

if pokemon_info:
    print(f"{pokemon_info["name"]}")
    print(f"{pokemon_info["id"]}")
    print(f"{pokemon_info["height"]}")
    print(f"{pokemon_info["weight"]}")