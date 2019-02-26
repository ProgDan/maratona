/*
+--------------------+
| Daniel Arndt Alves |
|      URI 2622      |
| Pessoas Jur�dicas  |
+--------------------+
*/
select c.name 
from customers c inner join legal_person l on c.id = l.id_customers