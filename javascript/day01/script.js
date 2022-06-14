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

        console.log('Total: ', amountPaid, ' amd')
        console.log('Returt: ', returnAmount, ' amd')
        console.log('Costs: ', priceAllProduct, ' amd');
        console.log('Product: ');

        if (snickersQuantity != 0)
            console.log('Snickers ~ ', snickersQuantity, ' pieces ~ ', snickersQuantity * snickersPrice, ' amd');

        if (colaQuantity != 0)
            console.log('Cola ~ ', colaQuantity, ' pieces ~ ', colaQuantity * colaPrice, ' amd');

        if (jermukQuantity != 0)
            console.log('Jermuk ~ ', jermukQuantity, ' pieces ~ ', jermukQuantity * jermukPrice, ' amd');

        if (chocolateQuantity != 0)
            console.log('Chocolate ~ ', chocolateQuantity, ' pieces ~ ', chocolateQuantity * chocolatePrice, ' amd');

        if (candyQuantity != 0)
            console.log('Candy ~ ', candyQuantity, ' pieces ~ ', candyQuantity * candyPrice, ' amd');
    }
}