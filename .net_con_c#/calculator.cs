//uni testing


public void Calculaotr_ShoulderAddNumbers(){

//Arrange

var num1=4;
var num2=5;

//acto
var resultado= _calcular.Add(num1,num2);

//assert

assert.Equal(9,resultado);


}


