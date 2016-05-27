femme(X) :- X=anne;X=betty; X=lisa; X=sylvie; X=eve; X=julie; X=virginie.
 
homme(X) :- X=marc;X=luc;X=jean;X=jules;X=leon;X=loic;X=gerard;X=jacques;X=herve;X=paul.
 
mari_de(marc, anne).
mari_de(luc, betty).
mari_de(jules, lisa).
mari_de(leon, sylvie).
mari_de(loic, eve).
mari_de(paul, julie).
 
femme_de(X, Y) :- mari_de(Y, X).
 
enfant_de(jean, marc).
enfant_de(jean, anne).
enfant_de(jules, marc).
enfant_de(jules, anne).
enfant_de(lisa, luc).
enfant_de(lisa, betty).
enfant_de(leon, marc).
enfant_de(leon, anne).
enfant_de(loic, luc).
enfant_de(loic, betty).
enfant_de(gerard, luc).
enfant_de(gerard, betty).
enfant_de(jacques, jules).
enfant_de(jacques, lisa).
enfant_de(julie, leon).
enfant_de(julie, sylvie).
enfant_de(paul, loic).
enfant_de(paul, eve).
enfant_de(valerie, loic).
enfant_de(valerie, eve).
enfant_de(herve, leon).
enfant_de(herve, sylvie).
 
beaupere_de(X, Y) :-
        homme(X), enfant_de(Z, X), mari_de(Z, Y) ; femme_de(Z, Y).
 
bellemere_de(X, Y) :-
        femme(X), enfant_de(Z, X), mari_de(Z, Y) ; femme_de(Z, Y).

ancetre_de(X, Y) :- enfant_de(Y, X).
ancetre_de(X, Z) :- enfant_de(Z, Y), ancetre_de(X, Y).
