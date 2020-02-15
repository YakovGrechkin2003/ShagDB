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

create table tab_manager
(
	id integer not null
		constraint tab_manager_pk
			primary key autoincrement,
	human_id integer not null,
	status text not null,
	salary real not null
);

create unique index tab_manager_id_uindex
	on tab_manager (id);

create table tab_teacher
(
	id integer not null
		constraint tab_teacher_pk
			primary key autoincrement,
	human_id integer not null,
	status text not null,
	salary real not null
);

create unique index tab_teacher_id_uindex
	on tab_teacher (id);

create table tab_course
(
	id integer not null
		constraint tab_course_pk
			primary key autoincrement,
	name text not null,
	shortname text not null
);

create unique index tab_course_id_uindex
	on tab_course (id);

create table tab_groups
(
	id integer not null
		constraint tab_groups_pk
			primary key autoincrement,
	name text not null,
	course_id integer not null,
	education_form text not null,
	start_date text not null,
	finish_date text not null,
	status text not null
);

create unique index tab_groups_id_uindex
	on tab_groups (id);

create table tab_group
(
	id integer not null
		constraint tab_group_pk
			primary key autoincrement,
	groups_id integer not null,
	student_id integer not null
);

create unique index tab_group_id_uindex
	on tab_group (id);

create table tab_subject
(
	id integer not null
		constraint tab_subject_pk
			primary key autoincrement,
	name text not null,
	course_id integer not null
);

create unique index tab_subject_id_uindex
	on tab_subject (id);

create table tab_education
(
	id integer not null
		constraint tab_education_pk
			primary key autoincrement,
	group_id integer not null,
	subject_id integer not null,
	teacher_id integer not null
);

create unique index tab_education_id_uindex
	on tab_education (id);