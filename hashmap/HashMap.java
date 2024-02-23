package hashmap;

import java.util.Arrays;
import java.util.LinkedList;

public class HashMap {
    static class Hashmap<k, v> {
        private class Node {
            k key;
            v value;

            public Node(k key, v value) {
                this.key = key;
                this.value = value;
            }
        }

        private int n; // nodes
        private int N; // buckets
        private LinkedList<Node> buckets[];

        @SuppressWarnings("unchecked")
        public Hashmap() {
            this.N = 4;
            this.buckets = new LinkedList[4];
            for (int i = 0; i < 4; i += 1) {
                this.buckets[i] = new LinkedList<>();
            }
        }

        private int hashFunction(final k key) {
            int bi = Math.abs(key.hashCode());
            return bi % N;
        }

        private int search(k key, int bi) {
            LinkedList<Node> ll = buckets[bi];
            for (int i = 0; i < ll.size(); i += 1) {
                if (ll.get(i).key == key) {
                    return i;
                }
            }
            return -1;
        }

        @SuppressWarnings("unchecked")
        private void rehash() {
            LinkedList<Node> oldbucket[] = buckets;
            buckets = new LinkedList[N * 2]; // double the size of old bucket

            for (int i = 0; i < N * 2; i += 1) {
                buckets[i] = new LinkedList<>();
            }

            for (int i = 0; i < oldbucket.length; i += 1) {
                LinkedList<Node> ll = oldbucket[i];
                for (int j = 0; j < ll.size(); j += 1) {
                    Node node = ll.get(j);
                    put(node.key, node.value);
                }
            }
        }

        public void put(k key, v value) {
            // check if the value exits or not
            // to check use bucket index pass it to hash func
            int bi = hashFunction(key);
            int di = search(key, bi);
            if (di == -1) { // key doesn't exists
                buckets[bi].add(new Node(key, value));
                n++;
            } else {
                Node node = buckets[bi].get(di);
                node.value = value;
            }
            double lambda = (double) n / N;
            if (lambda > 2.0) {
                // rehashing
                rehash();
            }
        }

        public v get(k key, v value) {
            int bi = hashFunction(key);
            int di = search(key, bi);
            if (di == -1) { // key doesn't exists
                return null;
            } else {
                Node node = buckets[bi].get(di);
                return node.value;
            }
        }

        public boolean containsKey(k key, v value) {
            int bi = hashFunction(key);
            int di = search(key, bi);
            return di == -1;
        }

        @Override
        public String toString() {
            return "Hashmap [n=" + n + ", N=" + N + ", buckets=" + Arrays.toString(buckets) + "]";
        }
    }

    public static void main(String[] args) {
        Hashmap<String, Integer> hm = new Hashmap<>();
        hm.put("India", 190);
        hm.put("China", 200);
        hm.put("Mexico", 100);
    }
}
