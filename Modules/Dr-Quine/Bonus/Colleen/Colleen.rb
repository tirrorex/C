# com1
def uselessFunc()
   return
end
def main()
# com2
   uselessFunc()
   str = "# com1%cdef uselessFunc()%c   return%cend%cdef main()%c# com2%c   uselessFunc()%c   str = %c%s%c%c   printf(str,10,10,10,10,10,10,10,34,str,34,10,10,10,10,10)%c   return%cend%cmain()%c"
   printf(str,10,10,10,10,10,10,10,34,str,34,10,10,10,10,10)
   return
end
main()
