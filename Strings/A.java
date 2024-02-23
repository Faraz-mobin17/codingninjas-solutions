package Strings;

import java.util.*;

public class A {
    public static void main(String[] args) {
        Map<String, String> map = new HashMap<>();
        map.put("one", "1");
        map.put("two", "2");
        map.put("three", "3");

        System.out.println(map.get("one").add("2"));
    }
}
