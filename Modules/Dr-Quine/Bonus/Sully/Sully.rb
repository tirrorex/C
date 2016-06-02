i=5
path='Sully_'+i.to_s+'.rb';str=";%cpath='Sully_'+i.to_s+'.rb';str=%c%s%c;i-=1;stuff = sprintf(str,10.to_c,34.to_c,str,34.to_c,10.to_c);File.open(path, 'w+') {|f| f.write('i='+i.to_s+stuff) };system('ruby '+path) if i > 0;%c";i-=1;stuff = sprintf(str,10.to_c,34.to_c,str,34.to_c,10.to_c);File.open(path, 'w+') {|f| f.write('i='+i.to_s+stuff) };system('ruby '+path) if i > 0;
