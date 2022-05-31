class ArrayADT {

    length: number;

    constructor() {
        this.length;
    }

    display(): void {

        for (let i: number = 0; i < this.length; i++)
            console.log(this[i]);
    }

    append(value: number): number {

        this[this.length] = value;
        return this.length++;
    }

    insert(index: number, value: number): number {

        let i: number;

        for (i = this.length; i > index; i--)
            this[i] = this[i - 1];

        this[i] = value;

        return this.length++;
    }

    delete(index: number): number {

        const element = this[index];

        for (let i: number = index; i < this.length; i++)
            this[i] = this[i + 1];

        this.length--;

        return element;
    }

    get(index: number): number {

        if(index < this.length && index >= 0)
            return this[index];

        return -1;    
    }

    search(key: number): number {

        for(let i: number = 0; i<this.length; i++) {

            if(this[i] === key)
                return i;
        }

        return -1;
    }

    set(index: number, value: number): void {

        if(index < this.length && index >= 0)
            this[index] = value;
        
        this.display();    
    }

}

function init(): void {

    const arr: ArrayADT = new ArrayADT();
    let count: number = 0;

    for (let i: number = 0; i < 5; i++)
        arr[i] = ++count;
    arr.length = 5;

    arr.append(10);
    arr.insert(3, 1000);
    arr.delete(3);
    arr.display();
} init();