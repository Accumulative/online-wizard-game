create table main.users (id integer primary key autoincrement, username CHAR(50) not null, password CHAR(50) not null, x_position int default 250, y_position int default 250, map_id int default 0);
create table main.npcs (id integer primary key autoincrement, name CHAR(50), image_name CHAR(50), map_id int not null, x int not null, y int not null, can_fight boolean);