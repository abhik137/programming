// https://www.hackerrank.com/challenges/botclean

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class botclean {

    static void next_move(int posr, int posc, String[] board){
    	int dirt = 100;
    	stop_code:
    	while (true) {
    		// botpos == dirty
    		if (board[posr].charAt(posc) == dirt) {
                	System.out.println("CLEAN"); break;
            	}
    		
    		// any dirt left of the bot? if true: move left, else move right
    		if (board[posr].contains("d")) {
    			for (int i = 0; i < board[posr].length(); i++) {
                		if (board[posr].charAt(i) == dirt) {
                        		if (i < posc) { System.out.println("LEFT");
                        		} else { System.out.println("RIGHT"); }
                       		 	break stop_code;
                    		}
                	}
    		}
    		
        	// Any dirt above bot? if true: move up, else move down
            	for (int i = 0; i < board.length; i++) {
            		if (board[i].contains("d")) {
            			if (i < posr) { System.out.println("UP");
            			} else { System.out.println("DOWN"); }
            			break stop_code;
            		}
            	}
            	
            	break; // stop while loop
    	}
    }


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int [] pos = new int[2];
        String board[] = new String[5];
        for(int i=0;i<2;i++) pos[i] = in.nextInt();
        for(int i=0;i<5;i++) board[i] = in.next();
        next_move(pos[0], pos[1], board);
    }
}