public class teste {
    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        int x = 3;
        boolean contemX = contemElemento(array, x);
        System.out.println("O array contém o elemento " + x + "? " + contemX);
    }
    
    public static boolean contemElemento(int[] array, int x) {
        for (int elemento : array) {
            if (elemento == x) {
                return true;
            }
        }
        return false;
    }
}
