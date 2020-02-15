create table tab_human
(
	id integer not null
		constraint tab_human_pk
			primary key autoincrement,
	firstname text not null,
	surname text not null,
	patronymic text,
	sex text not null,
	age integer not null
);

create unique index tab_human_id_uindex
	on tab_human (id);

create table tab_student
(
	id integer not null
		constraint tab_student_pk
			primary key autoincrement,
	human_id integer not null,
	status text not null
);

create unique index tab_student_id_uindex
	on tab_student (id);
