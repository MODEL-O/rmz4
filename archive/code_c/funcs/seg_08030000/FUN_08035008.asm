; undefined FUN_08035008(void)
; entry 0x8035008  size 18 bytes

08035008: 00b5         push {lr}
0803500A: 0021         mov r1,#0x0
0803500C: 4173         strb r1,[r0,#0xd]
0803500E: 8173         strb r1,[r0,#0xe]
08035010: c173         strb r1,[r0,#0xf]
08035012: fef7fbfe     bl 0x08033e0c
08035016: 01bc         pop {r0}
08035018: 0047         bx r0
