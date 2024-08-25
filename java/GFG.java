import java.util.Arrays;

public class GFG {
	public static int total_nodes = 0;

	static void printSubset(int[] A, int size) {
		for (int i = 0; i < size; i++) {
			System.out.print(" " + A[i]);
		}
		System.out.println();
	}

	static void subset_sum(int[] s, int[] t, int s_size, int t_size, int sum, int ite, int target_sum) {
		total_nodes++;

		if (target_sum == sum) {
			printSubset(t, t_size);
			if (ite + 1 < s_size && sum - s[ite] + s[ite + 1] <= target_sum) {
				subset_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
			}
			return;
		} else {
			if (ite < s_size && sum + s[ite] <= target_sum) {
				for (int i = ite; i < s_size; i++) {
					t[t_size] = s[i];
					if (sum + s[i] <= target_sum) {
						subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
					}
				}
			}
		}
	}

	static void generateSubsets(int[] s, int size, int target_sum) {
		int[] tuplet_vector = new int[size];
		int total = 0;
		Arrays.sort(s);
		for (int i = 0; i < size; i++) {
			total = total + s[i];
		}
		if (s[0] <= target_sum && total >= target_sum) {
			subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);
		}
	}

	public static void main(String[] args) {

		int[] weights = { 15, 22, 14, 26, 32, 9, 16, 8 };
		int target = 53;
		int size = weights.length;
		generateSubsets(weights, size, target);
		System.out.println("Nodes generated " + total_nodes);
	}
}
// 8 9 14 22n 8 14 15 16n 15 16 22nNodes generated 68
