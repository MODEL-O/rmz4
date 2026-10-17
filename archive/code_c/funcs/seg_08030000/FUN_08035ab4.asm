; undefined FUN_08035ab4(void)
; entry 0x8035ab4  size 20 bytes

08035AB4: 00b5         push {lr}
08035AB6: 8021         mov r1,#0x80
08035AB8: 4900         lsl r1,r1,#0x1
08035ABA: 4218         add r2,r0,r1
08035ABC: 0121         mov r1,#0x1
08035ABE: 1170         strb r1,[r2,#0x0]
08035AC0: 00f002f8     bl 0x08035ac8
08035AC4: 01bc         pop {r0}
08035AC6: 0047         bx r0
