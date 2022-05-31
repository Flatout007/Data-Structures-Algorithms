$num = 2;

def first_n_even n
    if n === 0
        return;
    else
        print $num;
        $num += 2;
        first_n_even(n-1); 
    end
end

puts first_n_even(5);