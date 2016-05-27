maisons([
    maison(_,_,_,_,_) ,
    maison(_,_,_,_,_) ,
    maison(_,_,_,_,_) ,
    maison(_,_,_,_,_) ,
    maison(_,_,_,_,_)
]).


afficher_liste([X|L]) :- writenl(X), afficher_liste(L).
afficher_liste([]).

appartient_a(X,[X|_]).
appartient_a(X,[_|L]) :- appartient_a(X,L).

est_a_gauche_de(A,B,[A,B|_]).
est_a_gauche_de(A,B,[_|Y]) :- est_a_gauche_de(A,B,Y).

est_a_cote_de(A,B,[A,B|_]).
est_a_cote_de(A,B,[B,A|_]).
est_a_cote_de(A,B,[_|Y]) :- est_a_cote_de(A,B,Y).

resoudre :-

maisons(MAISONS),


appartient_a(maison(rouge,anglais,_,_,_),MAISONS),

appartient_a(maison(_,suedois,chien,_,_),MAISONS),

appartient_a(maison(_,danois,_,the,_),MAISONS),

est_a_gauche_de(maison(verte,_,_,_,_),maison(blanche,_,_,_,_),MAISONS),

appartient_a(maison(verte,_,_,cafe,_),MAISONS),

appartient_a(maison(_,_,oiseaux,_,pall_mall),MAISONS),

appartient_a(maison(jaune,_,_,_,dunhill),MAISONS),

MAISONS = [_,_,maison(_,_,_,lait,_),_,_],

MAISONS = [maison(_,norvegien,_,_,_)|_],

est_a_cote_de(maison(_,_,_,_,blend),maison(_,_,chats,_,_),MAISONS),

est_a_cote_de(maison(_,_,cheval,_,_),maison(_,_,_,_,dunhill),MAISONS),

appartient_a(maison(_,_,_,biere,blue_master),MAISONS),

appartient_a(maison(_,allemand,_,_,prince),MAISONS),

est_a_cote_de(maison(_,norvegien,_,_,_),maison(bleue,_,_,_,_),MAISONS),

est_a_cote_de(maison(_,_,_,_,blend),maison(_,_,_,eau,_),MAISONS),

appartient_a(maison(_,_,poisson,_,_),MAISONS),
    
afficher_liste(MAISONS).