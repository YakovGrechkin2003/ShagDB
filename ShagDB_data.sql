INSERT INTO tab_education (id, group_id, subject_id, teacher_id) VALUES (1, 1, 1, 1);
INSERT INTO tab_education (id, group_id, subject_id, teacher_id) VALUES (2, 1, 2, 1);
INSERT INTO tab_education (id, group_id, subject_id, teacher_id) VALUES (3, 1, 3, 2);
INSERT INTO tab_education (id, group_id, subject_id, teacher_id) VALUES (4, 2, 4, 1);
INSERT INTO tab_education (id, group_id, subject_id, teacher_id) VALUES (5, 2, 5, 1);
INSERT INTO tab_education (id, group_id, subject_id, teacher_id) VALUES (6, 2, 6, 2);

INSERT INTO tab_group (id, groups_id, student_id) VALUES (1, 1, 1);
INSERT INTO tab_group (id, groups_id, student_id) VALUES (2, 1, 2);
INSERT INTO tab_group (id, groups_id, student_id) VALUES (3, 1, 4);
INSERT INTO tab_group (id, groups_id, student_id) VALUES (4, 2, 3);
INSERT INTO tab_group (id, groups_id, student_id) VALUES (5, 2, 5);
INSERT INTO tab_group (id, groups_id, student_id) VALUES (6, 2, 6);
INSERT INTO tab_group (id, groups_id, student_id) VALUES (7, 2, 7);

INSERT INTO tab_manager (id, human_id, status, salary) VALUES (1, 1, 'on vacation', 35.6);
INSERT INTO tab_manager (id, human_id, status, salary) VALUES (2, 2, 'at works', 45);

INSERT INTO tab_student (id, human_id, status) VALUES (1, 3, 'on learning');
INSERT INTO tab_student (id, human_id, status) VALUES (2, 4, 'academic leave');
INSERT INTO tab_student (id, human_id, status) VALUES (3, 5, 'expelled');
INSERT INTO tab_student (id, human_id, status) VALUES (4, 6, 'on learning');
INSERT INTO tab_student (id, human_id, status) VALUES (5, 7, 'on learning');
INSERT INTO tab_student (id, human_id, status) VALUES (6, 8, 'on learning');
INSERT INTO tab_student (id, human_id, status) VALUES (7, 9, 'on learning');

INSERT INTO tab_teacher (id, human_id, status, salary) VALUES (1, 9, 'at works', 25);
INSERT INTO tab_teacher (id, human_id, status, salary) VALUES (2, 10, 'at works', 55);

INSERT INTO tab_course (id, name, shortname) VALUES (1, 'Software development', 'RPO');
INSERT INTO tab_course (id, name, shortname) VALUES (2, 'Design', 'D');
INSERT INTO tab_groups (id, name, course_id, education_form, start_date, finish_date, status) VALUES (1, 'ST-6891', 1, 'Stationary', '18.02.2020', '18.02.2030', 'Active');
INSERT INTO tab_groups (id, name, course_id, education_form, start_date, finish_date, status) VALUES (2, 'ST-5231', 2, 'Stationary', '2.01.2019', '23.06.2023', 'Active');
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (1, 'Aleksey', 'Ivanov', 'Olegovich', 'M', 78);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (2, 'Anfisa', 'Padalkina', 'Igorevna', 'F', 26);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (3, 'Olga', 'Kobzeva', 'Vladimirovna', 'F', 103);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (4, 'Sergey', 'Abramov', 'Nikolaevich', 'M', 55);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (5, 'Dmitry', 'Silaev', 'Aleksandrovich', 'M', 39);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (6, 'Vladimir', 'Lenin', 'Ilich', 'S', 150);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (7, 'Adolf', 'Hitler', 'Ivanobich', 'M', 114);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (8, 'Hillary', 'Clinton', 'Artemovna', 'F', 16);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (9, 'Elena', 'Sheps', 'Alekseevna', 'F', 23);
INSERT INTO tab_human (id, firstname, surname, patronymic, sex, age) VALUES (10, 'Kim', 'Kardashian', null, 'S', 48);
INSERT INTO tab_subject (id, name, course_id) VALUES (1, 'Java', 1);
INSERT INTO tab_subject (id, name, course_id) VALUES (2, 'C++', 1);
INSERT INTO tab_subject (id, name, course_id) VALUES (3, 'SQL', 1);
INSERT INTO tab_subject (id, name, course_id) VALUES (4, 'Painting', 2);
INSERT INTO tab_subject (id, name, course_id) VALUES (5, 'Modeling', 2);
INSERT INTO tab_subject (id, name, course_id) VALUES (6, 'Shadows', 2);