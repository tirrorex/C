start :- action(state(left, left, left, left),
                state(right, right, right, right)).

action(Start, Goal) :-
    plan(Start, Goal, [Start], Path),
    nl, write('Solution:'), nl,
    write_path(Path).

plan(Start, Goal, Visited, Path) :-
    go(Start, Next),
    safe(Next),
    \+ member(Next, Visited),
    plan(Next, Goal, [Next|Visited], Path).
plan(Goal, Goal, Path, Path).

go(state(X, X, Z, K), state(Y, Y, Z, K)) :- across(X, Y).
go(state(X, W, X, K), state(Y, W, Y, K)) :- across(X, Y).
go(state(X, W, Z, X), state(Y, W, Z, Y)) :- across(X, Y).
go(state(X, W, Z, K), state(Y, W, Z, K)) :- across(X, Y).

across(left, right).
across(right, left).

safe(state(left, left, left, left)).
safe(state(right, left, right, left)).
safe(state(left, left, right, left)).
safe(state(right, left, right, right)).
safe(state(left, left, left, right)).
safe(state(right, right, left, right)).
safe(state(left, right, left, right)).
safe(state(right, right, right, right)).

write_path( [H1, H2|T] ) :- write_path([H2|T]), write_move(H2, H1).
write_path( [_X] ).
write_move( state(X, W, Z, K), state(Y, W, Z, K) ) :-
    write('Farmer from '), write(X), write(' to '), write(Y), nl.
write_move( state(X, X, Z, K), state(Y, Y, Z, K) ) :-
    write('Farmer and wolf from '), write(X), write(' to '), write(Y), nl.
write_move( state(X, W, X, K), state(Y, W, Y, K) ) :-
    write('Farmer and goat from '), write(X), write(' to '), write(Y), nl.
write_move( state(X, W, Z, X), state(Y, W, Z, Y) ) :-
    write('Farmer and cabbage from '), write(X), write(' to '), write(Y), nl.