'use strict'

// ex 1

function toUppercase(str) {
    const result = str.trimStart().split(' ')
    result[0] = result[0].toUpperCase();
    const word = result.join(' ');
    return word;
}

console.log('1st ex:')
console.log(toUppercase('                  javascript is a programming language'));

// ex 2

function sliceIntoChunks(arr, chunkSize) {
    if (chunkSize <= 0) return arr;
    const result = [];
    for (let i = 0; i < arr.length; i += chunkSize) {
        const chunk = arr.slice(i, i + chunkSize);
        result.push(chunk);
    }
    return result;
}

console.log('\n2nd ex:')
console.log(sliceIntoChunks([1, 2, 3, 4], 2));
console.log(sliceIntoChunks([1, 2, 3, 4, 5], 4));
console.log(sliceIntoChunks([1, 2, 3, 4, 5, 6, 7, 8], 3));

// ex 3

function sumObjectNumbers(myObject) {
    let sum = 0;
    for (let key in myObject) {
        if (typeof myObject[key] == "number") {
            sum += myObject[key];
        }
    }
    return sum;
}

const myObject = {
    a: 10,
    b: 20,
    c: 'string',
    d: 12,
}

console.log('\n3rd ex:')
console.log(sumObjectNumbers(myObject));

// ex 4

function clacVowelCount(str) {
    let vowelCount = 0;
    const vowelsArray = ['a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U']
    for (let i = 0; i < str.length; i++) {
        if (vowelsArray.includes(str[i]))
            vowelCount++
    }
    return vowelCount;
}

const str = 'Today is the best day of my life'

console.log('\n4th ex:')
console.log(clacVowelCount(str));

// ex 5

function calcSums(arr) {
    const sumObject = {
        posititve: null,
        negative: null
    }
    for (let i = 0; i < arr.length; i++) {
        (arr[i] >= 0) ? sumObject.posititve += arr[i] : sumObject.negative += arr[i];
    }
    return sumObject;
}

const arr = [10, -12, 30, -1, -8, 0, 14, -33, 20];

console.log('\n5th ex:')
console.log(calcSums(arr));

// ex 6 

function getUniqueCities(data) {
    const cityArray = [];
    for (let i = 0; i < data.length; i++) {
        cityArray.push(data[i].city)
    }
    return new Set([...cityArray])
}


const data = [
    { id: 1, name: 'Name one', city: 'Stepanakert' },
    { id: 2, name: 'Name one', city: 'Erevan' },
    { id: 3, name: 'Name one', city: 'Moscow' },
    { id: 4, name: 'Name one', city: 'Stepanakert' },
    { id: 5, name: 'Name one', city: 'Erevan' },
];

console.log('\n6th ex:')
console.log(getUniqueCities(data));


// ex 7

function anagramsChecked(str1, str2) {
    str1 = str1.replace(/[^\w]/g, '').toLowerCase().split('').sort().join('');
    str2 = str2.replace(/[^\w]/g, '').toLowerCase().split('').sort().join('');
    return str1 === str2;
}

console.log('\n7th ex:')
console.log(anagramsChecked('rail safety', 'fairy tales'));
console.log(anagramsChecked('RAIL! SAFETY!', 'fairy tales'));
console.log(anagramsChecked('Hi there', 'Bye there'));
