INSERT INTO courses (course_id, course_name, course_credits) VALUES
(201, 'Advanced Java Programming', 4),
(202, 'Machine Learning Basics', 3),
(203, 'Cloud Computing Essentials', 3),
(204, 'Mobile App Development', 4),
(205, 'Data Visualization', 3);

COMMIT;

-- ----------------------------------------------
INSERT INTO courses (course_id, course_name, course_credits) VALUES
(301, 'Network Security', 4),
(302, 'Artificial Intelligence', 3),
(303, 'Software Engineering Principles', 3);

-- ----------------------------------------------
INSERT INTO courses (course_id, course_name, course_credits) VALUES
(304, 'Operating Systems', 4),
(305, 'Compiler Design', 3);

-- ROLLBACK to undo the last INSERT
ROLLBACK;

-- --------------------------------------------------------
BEGIN;

INSERT INTO courses (course_id, course_name, course_credits) VALUES (401, 'Advanced Algorithms', 4);

SAVEPOINT before_update;

UPDATE courses SET course_credits = 5 WHERE course_id = 401;

INSERT INTO courses (course_id, course_name, course_credits) VALUES (402, 'Data Science', 3);

ROLLBACK TO before_update;

COMMIT;