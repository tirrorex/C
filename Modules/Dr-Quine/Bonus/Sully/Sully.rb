i=5;
i-=1 if File.exist?("Sully_5.rb");
path='Sully_'+i.to_s+'.rb';str=";%ci-=1 if File.exist?(%cSully_5.rb%c);%cpath='Sully_'+i.to_s+'.rb';str=%c%s%c;stuff = sprintf(str,10.to_c,34.to_c,34.to_c,10.to_c,34.to_c,str,34.to_c,10.to_c);File.open(path, 'w+') {|f| f.write('i='+i.to_s+stuff) };system('ruby '+path) if i > 0;%c";stuff = sprintf(str,10.to_c,34.to_c,34.to_c,10.to_c,34.to_c,str,34.to_c,10.to_c);File.open(path, 'w+') {|f| f.write('i='+i.to_s+stuff) };system('ruby '+path) if i > 0;
