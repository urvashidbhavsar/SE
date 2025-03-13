INSERT INTO courses (course_id, course_name, teacher_id)  VALUES 
(1, 'Mathematics', 101),
(2, 'Science', 102),
(3, 'English', 103);

UPDATE courses SET course_duration = '6 months' WHERE course_id = 1;

DELETE FROM courses WHERE course_id = 1;

