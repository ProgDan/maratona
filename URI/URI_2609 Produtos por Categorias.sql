/*
nome e a quantidade de produtos de cada uma categoria.

Daniel Arndt Alves
URI 2609
Produtos por Categorias
*/

select categories.name, sum(products.amount)
 from products, categories
 where products.id_categories = categories.id
 group by categories.name;