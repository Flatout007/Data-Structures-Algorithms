<<-DOC
    :method => p_digits_reverse;

    :description => {
        Write a program that prints the digits of
        an integer in reverse.
    }

    :example => {
       Input: 1445 # => 5441
    }
DOC

=begin :algorithm 
  1.PRINT "enter an integer";

  2.GET user integer input n;

  3.WHILE n is not 0 -> 
        SET r to last digit by modding n by 10;
        PRINT r;
        REDUCE n by dividing n by 10;
=end

def p_digits_reverse
    puts "enter a valid integer";

    n = gets.to_i;

    until n === 0
        r = n % 10;
        print r;
        n /= 10;
    end
end

puts p_digits_reverse();