/*
código e o nome dos produtos
 cujo preço são menores que 10 ou maiores que 100.

Daniel Arndt Alves
URI 2604
menores que 10 ou maiores que 100
*/

select products.id, products.name
 from products 
 where products.price < 10 or products.price > 100;