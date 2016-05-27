ldapsearch -Q '(objectClass=apple-user)' | grep uid: | sed 's/uid: //g' | sort -fr
