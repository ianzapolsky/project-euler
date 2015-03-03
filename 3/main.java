public class main {

    static final int GRIDSIZE = 20;

    public static void main(String[] args) {
      int[][] vertices = new int[GRIDSIZE + 1][GRIDSIZE + 1];
      int i = 0, j = 0;
      int paths = findPaths(i, j, vertices); 
      System.out.println(paths);
    }

    public static int findPaths(int i, int j, int[][] vertices) {
      System.out.println("called findPaths");
      int paths = 0;

      // if we are at the bottom right corner, we are done
      if (i == vertices.length - 1 && j == vertices.length - 1) {
        return 1;
      }

      // if we can move right, move right
      if (j + 1 < vertices.length && vertices[i][j + 1] == 0) {
        //vertices[i][j + 1] = 1;
        paths += findPaths(i, j + 1, vertices);
      }
      // if we can move down, move down
      if (i + 1 < vertices.length && vertices[i + 1][j] == 0) {
        //vertices[i + 1][j] = 1;
        paths += findPaths(i + 1, j, vertices);
      }
      return paths;
    }

}
