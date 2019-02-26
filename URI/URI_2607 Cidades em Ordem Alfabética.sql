/*
cidades dos fornecedores em ordem alfabética
sem repetição

Daniel Arndt Alves
URI 2607
Cidades em Ordem Alfabética
*/

select distinct providers.city
 from providers
 order by providers.city;