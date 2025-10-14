let edad = 18;



/*
== equals
&& and

if(window == Active && onDisplay){
return success;
}

|| or

if(numero == 10 || 20){
print(numero par);
}

!= no equivale o no existe o no se cumplio
if (screen != onDisplay){
return error;
}
if(edad != 18){
eres muy chico o muy grande para estar aqui}

?  excess ? si hay excess : no hay excess
*/


function Verificador(){

    if(edad != 18 ){
console.log("Estas muy chiquito")
    }
    else if (edad >= 18){
console.log("puedes pasar")
    }
}

function Add(){
    let number = 10;
    while(number != 20){
        ++number;
    }
    console.log(number)
}

// ++ = +1 incremento, -- = -1 decremento, +=  monto_depositado += amount , monto_retirado -= amount; 

Add();
