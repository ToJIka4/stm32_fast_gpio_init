/*
The MIT License (MIT)

Copyright (c) 2016 Stephen Plyaskin <strelok@e-kirov.ru>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

var fs = require('fs');

console.log('#ifndef __FAST_GPIO_INIT_H_');
console.log('#define __FAST_GPIO_INIT_H_');

console.log('');

console.log('#include "cmsis_device.h"');
console.log('#include "fgi_config.h"');

var resArr = [];

function genHex(a, letters) {
    var hex;
    if (a >= 0) {
        hex = a.toString(16);
    } else {
        hex = ((a >> 28) & 0x0F).toString(16) + (a).toString(16).substr(-7);
    }
    while (hex.length < letters) hex = '0' + hex;
    return '0x' + hex;
}

function genHex4(a) {
    return genHex(a, 4)
}

function genHex8(a) {
    return genHex(a, 8)
}

for (var i = 'A'.charCodeAt(0); i <= 'F'.charCodeAt(0); i++) {


    for (var j = 0; j < 16; j++) {
        var port = String.fromCharCode(i);
        var odr_0 = 0 << j;
        var odr_1 = 1 << j;
        var odr_default = 0x00000000 & (1 << j);
        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_ODR_0)');
        resArr.push('#define FGI_' + port + '_' + j + '_ODR ' + genHex8(odr_0));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_ODR_1)');
        resArr.push('#define FGI_' + port + '_' + j + '_ODR ' + genHex8(odr_1));
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_ODR ' + genHex8(odr_default));
        resArr.push('#endif');
    }

    for (var j = 0; j < 16; j++) {
        var port = String.fromCharCode(i);
        var moder_in = 0 << (j * 2);
        var moder_out = 1 << (j * 2);
        var moder_af = 2 << (j * 2);
        var moder_an = 3 << (j * 2);
        var moder_default;
        if (i == 'A'.charCodeAt(0)) {
            // see reference manual
            moder_default = 0x28000000 & (3 << (j * 2));
        } else {
            moder_default = 0x00000000 & (3 << (j * 2));
        }

        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_MODER_IN)');
        resArr.push('#define FGI_' + port + '_' + j + '_MODER ' + genHex8(moder_in));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_MODER_OUT)');
        resArr.push('#define FGI_' + port + '_' + j + '_MODER ' + genHex8(moder_out));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_MODER_AF)');
        resArr.push('#define FGI_' + port + '_' + j + '_MODER ' + genHex8(moder_af));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_MODER_AN)');
        resArr.push('#define FGI_' + port + '_' + j + '_MODER ' + genHex8(moder_an));
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_MODER ' + genHex8(moder_default));
        resArr.push('#endif');
    }

    for (var j = 0; j < 16; j++) {
        var port = String.fromCharCode(i);
        var otyper_pp = 0 << j;
        var otyper_od = 1 << j;
        var otyper_default = 0x00000000 & (1 << j);
        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_OTYPER_PP)');
        resArr.push('#define FGI_' + port + '_' + j + '_OTYPER ' + genHex8(otyper_pp));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_OTYPER_OD)');
        resArr.push('#define FGI_' + port + '_' + j + '_OTYPER ' + genHex8(otyper_od));
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_OTYPER ' + genHex8(otyper_default));
        resArr.push('#endif');
    }

    for (var j = 0; j < 16; j++) {
        var port = String.fromCharCode(i);
        var ospeedr_low = 0 << (j * 2);
        var ospeedr_medium = 1 << (j * 2);
        var ospeedr_high = 3 << (j * 2);
        var ospeedr_default;
        if (i == 'A'.charCodeAt(0)) {
            // see reference manual
            ospeedr_default = 0x0C000000 & (3 << (j * 2));
        } else {
            ospeedr_default = 0x00000000 & (3 << (j * 2));
        }

        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_OSPEEDR_LOW)');
        resArr.push('#define FGI_' + port + '_' + j + '_OSPEEDR ' + genHex8(ospeedr_low));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_OSPEEDR_MEDIUM)');
        resArr.push('#define FGI_' + port + '_' + j + '_OSPEEDR ' + genHex8(ospeedr_medium));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_OSPEEDR_HIGH)');
        resArr.push('#define FGI_' + port + '_' + j + '_OSPEEDR ' + genHex8(ospeedr_high));
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_OSPEEDR ' + genHex8(ospeedr_default));
        resArr.push('#endif');
    }

    for (var j = 0; j < 16; j++) {
        var port = String.fromCharCode(i);
        var pupdr_nopull = 0 << (j * 2);
        var pupdr_pull_up = 1 << (j * 2);
        var pupdr_pull_down = 3 << (j * 2);
        var pupdr_default;
        if (i == 'A'.charCodeAt(0)) {
            // see reference manual
            pupdr_default = 0x24000000 & (3 << (j * 2));
        } else {
            pupdr_default = 0x00000000 & (3 << (j * 2));
        }

        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_PUPDR_NOPULL)');
        resArr.push('#define FGI_' + port + '_' + j + '_PUPDR ' + genHex8(pupdr_nopull));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_PUPDR_PULL_UP)');
        resArr.push('#define FGI_' + port + '_' + j + '_PUPDR ' + genHex8(pupdr_pull_up));
        resArr.push('#elif defined(FGI_' + port + '_' + j + '_PUPDR_PULL_DOWN)');
        resArr.push('#define FGI_' + port + '_' + j + '_PUPDR ' + genHex8(pupdr_pull_down));
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_PUPDR ' + genHex8(pupdr_default));
        resArr.push('#endif');
    }

    for (var j = 0; j < 8; j++) {
        var port = String.fromCharCode(i);
        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_AFR_AF0)');
        resArr.push('#define FGI_' + port + '_' + j + '_AFR ' + genHex8(0 << (j * 4)));
        for (var k = 1; k < 8; k++) {
            resArr.push('#elif defined(FGI_' + port + '_' + j + '_AFR_AF' + k + ')');
            resArr.push('#define FGI_' + port + '_' + j + '_AFR ' + genHex8(k << (j * 4)));
        }
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_AFR ' + genHex8(0));
        resArr.push('#endif');
    }

    for (var j = 8; j < 16; j++) {
        var port = String.fromCharCode(i);
        resArr.push('');
        resArr.push('#if defined(FGI_' + port + '_' + j + '_AFR_AF0)');
        resArr.push('#define FGI_' + port + '_' + j + '_AFR ' + genHex8(0 << ((j - 8) * 4)));
        for (var k = 1; k < 8; k++) {
            resArr.push('#elif defined(FGI_' + port + '_' + j + '_AFR_AF' + k + ')');
            resArr.push('#define FGI_' + port + '_' + j + '_AFR ' + genHex8(k << ((j - 8) * 4)));
        }
        resArr.push('#else');
        resArr.push('#define FGI_' + port + '_' + j + '_AFR ' + genHex8(0));
        resArr.push('#endif');
    }
}

function genRcc(cb) {
    fs.readFile('genRcc.tpl', 'utf8', (err, data) => {
        if (err) throw err;
        var res = '';
        for (var i = 'A'.charCodeAt(0); i <= 'F'.charCodeAt(0); i++) {
            res += "\n\n";
            res += data.split('%%X%%').join(String.fromCharCode(i));
        }
        cb(res);
    });
}

function genInit(cb) {
    fs.readFile('genInit.tpl', 'utf8', (err, data) => {
        if (err) throw err;
        var res = '';
        for (var i = 'A'.charCodeAt(0); i <= 'F'.charCodeAt(0); i++) {
            res += "\n";
            res += data.split('%%X%%').join(String.fromCharCode(i));
        }
        cb(res);
    });
}

genRcc(function(data) {
    resArr.push(data);
    fs.readFile('genInitStart.tpl', 'utf8', (err, data) => {
        if (err) throw err;
        resArr.push('');
        resArr.push(data);

        genInit(function(data) {
            resArr.push(data);
            resArr.push('}');
            resArr.push('');
            resArr.push('#endif //__FAST_GPIO_INIT_H_');
            resArr.push('');

            console.log(resArr.join("\n"));
        });
    });
});