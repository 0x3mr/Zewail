CREATE TABLE Students(
    id serial primary key,
    name varchar(100) not null,
    email varchar(100) unique not null,
    grade int
);

INSERT INTO Students(name, email, grade)
VALUES
('joe', 'doe@gmail.com', 18)
('bro', 'boo@gmail.com', 19);

---

do $$
declare
    mark int := 80;
begin
    if mark >= 50 then
        raise notice 'more than or equal to 50';
    else
        raise notice 'less than';
    end if;
end $$;


do $$
begin
    if exists (select 1 from Students where grade < 50) then
        raise notice 'you are failing';
    else
        raise notice 'youre good';
    end if;
end $$;

---

do $$
begin
    for i in 1..5 loop
        insert into students(name, email, grade)
        values (
            'name' || i,
            'email' || i || '@gmail.com',
            grade + i
        );
    end loop;
end $$;

---

create or replace prodecure helloProtocol()
language plpgsql
as $$
begin
    raise notice 'hello';
end $$;

call helloProtocol();


create or replace procedure passParams(
    _name varchar,
    _mail varchar,
    _grade int
)
language plpgsql
as $$
begin
    insert into Students(name, email, grade)
    values(_name, _mail, _grade)

    raise notice 'name is %, mail is %, grade is %', _name, _mail, _grade;
end $$;

call passParams('amr', 'amr@gmail.com', 1);


create or replace procedure passParams(
    _name varchar,
    _mail varchar,
    _grade int
)
language plpgsql
as $$
begin
    if _grade < 0
        raise notice 'failure';
        return;
    end if;

    raise notice 'success!';
exception
    when unique_violation then
        raise notice 'violation!';
end $$;

