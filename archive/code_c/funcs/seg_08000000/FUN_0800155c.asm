; undefined FUN_0800155c(void)
; entry 0x800155c  size 20 bytes

0800155C: 00b5         push {lr}
0800155E: 4020         mov r0,#0x40
08001560: 27f14afb     bl 0x08128bf8
08001564: 0249         ldr r1,[0x08001570]
08001566: 0020         mov r0,#0x0
08001568: 0870         strb r0,[r1,#0x0]
0800156A: 4880         strh r0,[r1,#0x2]
0800156C: 01bc         pop {r0}
0800156E: 0047         bx r0
