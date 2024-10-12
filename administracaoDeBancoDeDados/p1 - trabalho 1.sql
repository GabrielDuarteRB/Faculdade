create database faculdade_ifood;

/*Crie as tabelas acima */
create table cliente(
	id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    email VARCHAR(255) UNIQUE,
    created_at TIMESTAMP default NOW(),
    updated_at TIMESTAMP,
    deleted_at TIMESTAMP
);

create table item(
	id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255),
    descricao VARCHAR(255),
    preco FLOAT NOT NULL,
    created_at TIMESTAMP DEFAULT NOW(),
    updated_at TIMESTAMP,
    deleted_at TIMESTAMP
);

create table pedido(
	id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    id_cliente INT UNSIGNED,
    created_at TIMESTAMP DEFAULT NOW(),
    updated_at TIMESTAMP,
    deleted_at TIMESTAMP,
    
    CONSTRAINT fk_id_cliente FOREIGN KEY(id_cliente) REFERENCES cliente(id)
);

create table item_pedido(
	id_pedido INT UNSIGNED NOT NULL,
    id_item INT UNSIGNED NOT NULL,
    quantidade INT NOT NULL,
	created_at TIMESTAMP DEFAULT NOW(),
    updated_at TIMESTAMP,
    deleted_at TIMESTAMP,
    
	CONSTRAINT fk_id_pedido FOREIGN KEY(id_pedido) REFERENCES pedido(id),
    CONSTRAINT fk_id_item FOREIGN KEY(id_item) REFERENCES item(id)
);

/* Insira 3 clientes */
INSERT INTO cliente 
	(nome, email)
VALUES 
	('Gabriel', 'gabriel@gmail.com'),
    ('Fulano', 'fulano@gmail.com'),
    ('Beltrano', 'beltrano@gmail.com');
    
/* Insira 3 itens na tabela de item */
INSERT INTO item
	(nome, descricao, preco)
VALUES
	('x-infarto', 'hamburguer com 10 carnes, queijo, presunto, bacon, ovo e 4 molhos especiais', 60),
    ('pizza de mussarela', 'Classica pizza de queijo mussarela tamanho medio', 39),
    ('Prato Feito', 'Almoço perfeito para aqueles que querem comida rapida, gostosa e barata', 19.90);
    
/* Crie 2 pedidos para um mesmo cliente */
INSERT INTO pedido
	(id_cliente)
VALUES
	(1),
    (1);
    
INSERT INTO item_pedido
	(id_pedido, id_item, quantidade)
VALUES
	(1, 1, 2),
    (2, 2, 1);
    
/* Crie 2 pedidos com mais de um item dentro dele */
INSERT INTO pedido
	(id_cliente)
VALUES
	(2),
    (3);
    
INSERT INTO item_pedido
	(id_pedido, id_item, quantidade)
VALUES
	(3, 1, 5),
    (3, 2, 3);
    
INSERT INTO item_pedido
	(id_pedido, id_item, quantidade)
VALUES
	(4, 1, 10),
    (4, 3, 5);
    
/*  Atualize a quantidade de um item em um pedido */

CREATE TRIGGER 
	before_item_pedido_update
BEFORE UPDATE ON 
	item_pedido
FOR EACH ROW SET 
	NEW.updated_at = NOW();

UPDATE item_pedido
SET 
	quantidade = 4
WHERE
	(id_pedido = 4 AND id_item = 1);


/* Delete um item do sistema que tenha sido utilizado no pedido anterior (soft) */

UPDATE item_pedido
SET
	deleted_at = NOW()
WHERE
	(id_pedido = 4 AND id_item = 1);
    
/* Liste os clientes que fizeram pelo menos um pedido */

SELECT 
	*
FROM 
	cliente
WHERE
	id in (SELECT DISTINCT id_cliente FROM pedido WHERE deleted_at IS NULL) && deleted_at IS NULL;
    
SELECT DISTINCT 
    c.*
FROM 
    cliente c
JOIN 
    pedido p ON c.id = p.id_cliente
WHERE 
    c.deleted_at IS NULL
    AND p.deleted_at IS NULL;
	
    
