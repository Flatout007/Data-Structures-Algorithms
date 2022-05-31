var ArrayADT = /** @class */ (function () {
    function ArrayADT() {
        this.length;
    }
    ArrayADT.prototype.display = function () {
        for (var i = 0; i < this.length; i++)
            console.log(this[i]);
    };
    ArrayADT.prototype.append = function (value) {
        this[this.length] = value;
        return this.length++;
    };
    ArrayADT.prototype.insert = function (index, value) {
        var i;
        for (i = this.length; i > index; i--)
            this[i] = this[i - 1];
        this[i] = value;
        return this.length++;
    };
    ArrayADT.prototype["delete"] = function (index) {
        var element = this[index];
        for (var i = index; i < this.length; i++)
            this[i] = this[i + 1];
        this.length--;
        return element;
    };
    ArrayADT.prototype.get = function (index) {
        if (index < this.length && index >= 0)
            return this[index];
        return -1;
    };
    ArrayADT.prototype.search = function (key) {
        for (var i = 0; i < this.length; i++) {
            if (this[i] === key)
                return i;
        }
        return -1;
    };
    ArrayADT.prototype.set = function (index, value) {
        if (index < this.length && index >= 0)
            this[index] = value;
        this.display();
    };
    return ArrayADT;
}());
function init() {
    var arr = new ArrayADT();
    var count = 0;
    for (var i = 0; i < 5; i++)
        arr[i] = ++count;
    arr.length = 5;
    arr.append(10);
    arr.insert(3, 1000);
    arr["delete"](3);
    arr.display();
}
init();
