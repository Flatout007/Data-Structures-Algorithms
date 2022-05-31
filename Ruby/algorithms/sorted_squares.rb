<<-DOC
    :method => sorted_squares(nums=>Integer[])

    :description => {
        Given an integer array nums sorted in non-decreasing order, 
        return an array of the squares of each number sorted in 
        non-decreasing order.
    }

    :example => {
        Input: nums = [-7,-3,2,3,11] # => [4,9,9,49,121]
    }

    :time => {O(n)} n = nums.length
    :space => {O(1)}
    :param => {Integer[]} nums
    :return => {Integer[]}
DOC

def sorted_squares(nums)
=begin
    ##
    # :algorithm => {
      1.FOR traversing of nums -> 
            SET the value in nums of [i] to it's squared version;

      2.SORT nums in non-decreasing order;  
    }
=end

    i = 0;
    until i === nums.length
        nums[i] = nums[i] * nums[i]  
        i+=1; 
    end

    nums = nums.sort() {|a,b| a <=> b}

    nums; 
end