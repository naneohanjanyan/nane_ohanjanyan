'use strict'

let snickersPrice = 200,
    colaPrice = 400,
    jermukPrice = 99.9,
    chocolatePrice = 1200,
    candyPrice = 350;

let snickersQuantity,
    colaQuantity,
    jermukQuantity,
    chocolateQuantity,
    candyQuantity;

snickersQuantity = prompt('input snickers quantity', 0);
colaQuantity = prompt('input cola quantity', 0);
jermukQuantity = prompt('input jermuk quantity', 0);
chocolateQuantity = prompt('input chocolate quantity', 0);
candyQuantity = prompt('input candy quantity', 0);

const priceAllProduct = snickersPrice * snickersQuantity + colaPrice * colaQuantity
    + jermukPrice * jermukQuantity + chocolatePrice * chocolateQuantity
    + candyPrice * candyQuantity;

if (priceAllProduct == 0) {

    console.log('You did not buy anything');

} else {

    let amountPaid = prompt('pay for the products (', priceAllProduct, ' amd');

    if (amountPaid === '' || amountPaid === '  ') {

        console.log('Wrong amount of money');

    } else if (priceAllProduct() > amountPaid) {

        console.log('Your money is not enough for shopping.');

    } else {

        let returnAmount = amountPaid - priceAllProduct;

        console.log('Total: ', amountPaid)
        console.log('Returt: ', returnAmount)
        console.log('Costs: ', priceAllProduct);
        console.log('Product: ');

        if (snickersQuantity != 0)
            console.log('Snickers ~ ', snickersQuantity, ' ~ ', snickersQuantity * snickersPrice);

        if (colaQuantity != 0)
            console.log('Cola ~ ', colaQuantity, ' ~ ', colaQuantity * colaPrice);

        if (jermukQuantity != 0)
            console.log('Jermuk ~ ', jermukQuantity, ' ~ ', jermukQuantity * jermukPrice);

        if (chocolateQuantity != 0)
            console.log('Chocolate ~ ', chocolateQuantity, ' ~ ', chocolateQuantity * chocolatePrice);

        if (candyQuantity != 0)
            console.log('Candy ~ ', candyQuantity, ' ~ ', candyQuantity * candyPrice);
    }

}