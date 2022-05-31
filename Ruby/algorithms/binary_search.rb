class Array
    def binary_search target
        left = 0; right = self.length-1;

        until left > right
            mid = left + right - left / 2;
            if self[mid] === target
                return mid;
            elsif self[mid] > target
                right = mid-1;
            else 
                left = mid+1;
            end
        end
        
        -1;
    end
end

puts [100,200,300,400,1000].binary_search(100);