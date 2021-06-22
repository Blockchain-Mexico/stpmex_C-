//
// Created by astrixial on 6/21/21.
//

#ifndef STPMEX_AUTH_H
#define STPMEX_AUTH_H

const int CUENTA_FIELD_NAMES = "empresa"
                               "cuenta"
                               "rfcCurp"
                               .split();
const int ORDEN_FIELDNAMES = "    institucionContraparte\n"
                             "    empresa\n"
                             "    fechaOperacion\n"
                             "    folioOrigen\n"
                             "    claveRastreo\n"
                             "    institucionOperante\n"
                             "    monto\n"
                             "    tipoPago\n"
                             "    tipoCuentaOrdenante\n"
                             "    nombreOrdenante\n"
                             "    cuentaOrdenante\n"
                             "    rfcCurpOrdenante\n"
                             "    tipoCuentaBeneficiario\n"
                             "    nombreBeneficiario\n"
                             "    cuentaBeneficiario\n"
                             "    rfcCurpBeneficiario\n"
                             "    emailBeneficiario\n"
                             "    tipoCuentaBeneficiario2\n"
                             "    nombreBeneficiario2\n"
                             "    cuentaBeneficiario2\n"
                             "    rfcCurpBeneficiario2\n"
                             "    conceptoPago\n"
                             "    conceptoPago2\n"
                             "    claveCatUsuario1\n"
                             "    claveCatUsuario2\n"
                             "    clavePago\n"
                             "    referenciaCobranza\n"
                             "    referenciaNumerica\n"
                             "    tipoOperacion\n"
                             "    topologia\n"
                             "    usuario\n"
                             "    medioEntrega\n"
                             "    prioridad\n"
                             "    iva\n"
                             .split();
const int SIGN_DIGEST = 'RSA_SHA256";

   // equivalent to split method?
// std::vector<std::string> split(const string& input, const string& regex) {
//    // passing -1 as the submatch index parameter performs splitting
//    std::regex re(regex);
//    std::sregex_token_iterator
//        first{input.begin(), input.end(), re, -1},
//        last;
//    return {first, last};
//}
class auth {

};


#endif //STPMEX_AUTH_H
