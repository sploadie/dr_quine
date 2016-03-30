i=5
path='Sully_'+i.to_s+'.rb';s="\ni-=1;path='Sully_'+i.to_s+'.rb';s=%p;IO.write(path, 'i='+i.to_s+s%%s);system('ruby '+path) if i > 0";IO.write(path, 'i='+i.to_s+s%s);system('ruby '+path) if i > 0