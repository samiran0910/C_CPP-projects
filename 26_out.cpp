//Copythecontentsofonetextfiletoanotherfile,afterremovingallwhitespaces
#include<bits/stdc++.h>
usingnamespacestd;
intmain()
{
ifstreaminFile;
ofstreamoutFile;
stringline;
inFile.open("26.cpp");
outFile.open("26_out.cpp");
if(!inFile)
{
cout<<"Erroropeningfile"<<endl;
return1;
}
if(!outFile)
{
cout<<"Erroropeningfile"<<endl;
return1;
}
while(getline(inFile,line))
{
for(inti=0;i<line.length();i++)
{
if(isspace(line[i]))
{
line.erase(i,1);
i--;
}
}
outFile<<line<<endl;
}
inFile.close();
outFile.close();
return0;
}
