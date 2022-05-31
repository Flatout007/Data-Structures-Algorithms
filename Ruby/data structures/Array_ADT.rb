class Array_ADT
    attr_accessor :len;

    def initialize
        @len = 0;
        @A = {};
    end

    def set idx, val
        if idx >= 0 && idx < self.len
            self[idx] = val;
        end

        self.display;
    end

    def search key
        i = 0;
        until i === self.len
            if self[i] === key
                return i;
            end
            
            i+=1;
        end

        -1;
    end

    def get idx
        if idx < self.len && idx >= 0
            return self[idx];
        end

        -1;
    end

    def delete idx
        ele = self[idx];

        i = idx;
        until i === self.len-1
            self[i] = self[i+1];
            i+=1;
        end

        self.len-=1;

        ele;
    end

    def insert idx, val
        i = self.len;
        until i === idx
            self[i] = self[i-1];
            i-=1;
        end

        self[i] = val;

        self.len+=1;
    end

    def append val
        self[self.len] = val;
        self.len+=1;
    end

    def display 
        i = 0; 
        until i === self.len
            print "#{self[i]} ";
            i+=1;
        end
    end

    def []= key, value
        @A[key] = value;
    end

    def [] key
        @A[key];
    end

end

arr = Array_ADT.new;
count = 0;

i = 0;
until i === 5
    count+=1;
    arr[i] = count;
    i+=1;
end
arr.len = 5;

arr.append(10);
arr.insert(5, 1000);   
puts arr.set(1,1000);
