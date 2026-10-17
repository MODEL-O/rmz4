; undefined FUN_080353e0(void)
; entry 0x80353e0  size 44 bytes

080353E0: 10b5         push {r4,lr}
080353E2: 041c         add r4,r0,#0x0
080353E4: 04f0dafe     bl 0x0803a19c
080353E8: 011c         add r1,r0,#0x0
080353EA: 0029         cmp r1,#0x0
080353EC: 04d1         bne 0x080353f8
080353EE: 8022         mov r2,#0x80
080353F0: 5200         lsl r2,r2,#0x1
080353F2: a018         add r0,r4,r2
080353F4: 0170         strb r1,[r0,#0x0]
080353F6: 06e0         b 0x08035406
080353F8: 0448         ldr r0,[0x0803540c]
080353FA: 2118         add r1,r4,r0
080353FC: 0120         mov r0,#0x1
080353FE: 0870         strb r0,[r1,#0x0]
08035400: 201c         add r0,r4,#0x0
08035402: 00f005f8     bl 0x08035410
08035406: 10bc         pop {r4}
08035408: 01bc         pop {r0}
0803540A: 0047         bx r0
