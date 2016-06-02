# com1
def uselessFunc()
   return
end
# com2
str = "# com1%cdef uselessFunc()%c   return%cend%c# com2%cstr = %c%s%c%cprintf(str,10,10,10,10,10,34,str,34,10,10)%c"
printf(str,10,10,10,10,10,34,str,34,10,10)
