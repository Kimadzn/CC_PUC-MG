import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class PokemonInfo {
    static class Pokemon {
        String name;
        String type;
        String abilities;
        double weight;
        double height;
        double captureRate;
        boolean legendary;
        String generation;
        String releaseDate;

        public Pokemon(String name, String type, String abilities, double weight, double height,
                       double captureRate, boolean legendary, String generation, String releaseDate) {
            this.name = name;
            this.type = type;
            this.abilities = abilities;
            this.weight = weight;
            this.height = height;
            this.captureRate = captureRate;
            this.legendary = legendary;
            this.generation = generation;
            this.releaseDate = releaseDate;
        }

        @Override
        public String toString() {
            return String.format(
                "[#%s -> %s: %s - [%s] - [%s] - %.1fkg - %.1fm - %.0f%% - %s - %s gen] - %s",
                name, type, abilities, weight, height, captureRate, legendary ? "true" : "false", generation, releaseDate
            );
        }
    }

    public static void main(String[] args) {
        // Map to store Pokémon information
        Map<Integer, Pokemon> pokemons = new HashMap<>();
        // Populate the Pokémon data
        pokemons.put(181, new Pokemon("Ampharos", "Light Pokémon", "Static, Plus", 61.5, 1.4, 45, false, "2", "25/05/1999"));
        pokemons.put(791, new Pokemon("Solgaleo", "Sunne Pokémon", "Full Metal Body", 230.0, 3.4, 45, true, "7", "20/05/2016"));
        pokemons.put(453, new Pokemon("Croagunk", "Toxic Mouth Pokémon", "Anticipation, Dry Skin, Poison Touch", 23.0, 0.7, 140, false, "4", "21/05/2006"));
        pokemons.put(46, new Pokemon("Paras", "Mushroom Pokémon", "Effect Spore, Dry Skin, Damp", 5.4, 0.3, 190, false, "1", "01/11/1996"));
        pokemons.put(137, new Pokemon("Porygon", "Virtual Pokémon", "Trace, Download, Analytic", 36.5, 0.8, 45, false, "1", "06/06/1996"));
        pokemons.put(550, new Pokemon("Basculin", "Hostile Pokémon", "Reckless, Rock Head, Adaptability, Mold Breaker", 18.0, 1.0, 25, false, "5", "04/08/2010"));
        pokemons.put(411, new Pokemon("Bastiodon", "Shield Pokémon", "Sturdy, Soundproof", 149.5, 1.3, 45, false, "4", "22/09/2006"));
        pokemons.put(650, new Pokemon("Chesnaught", "Spiny Armor Pokémon", "Overgrow, Bulletproof", 85.0, 1.6, 45, false, "6", "12/10/2013"));

        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite os IDs dos Pokémon separados por espaço:");
        String input = scanner.nextLine();
        String[] ids = input.split(" ");

        // Processar os IDs fornecidos pelo usuário
        for (String idStr : ids) {
            try {
                int id = Integer.parseInt(idStr);
                if (pokemons.containsKey(id)) {
                    System.out.println(pokemons.get(id).toString());
                } else {
                    System.out.printf("Pokémon com ID #%s não encontrado.\n", idStr);
                }
            } catch (NumberFormatException e) {
                System.out.printf("'%s' não é um ID válido.\n", idStr);
            }
        }

        scanner.close();
    }
}

       
