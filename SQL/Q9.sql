-- create users :
CREATE USER 'user1'@'localhost' IDENTIFIED BY 'password1';
CREATE USER 'user2'@'localhost' IDENTIFIED BY 'password2';

-- grant permission
GRANT SELECT ON school_db.courses TO 'user1'@'localhost';

-- insert permission from user 1
REVOKE INSERT ON school_db.courses FROM 'user1'@'localhost';

-- grant permission to user 2
GRANT INSERT ON school_db.courses TO 'user2'@'localhost';
