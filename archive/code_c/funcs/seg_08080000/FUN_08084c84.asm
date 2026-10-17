; undefined FUN_08084c84(void)
; entry 0x8084c84  size 38 bytes

08084C84: 30b5         push {r4,r5,lr}
08084C86: 041c         add r4,r0,#0x0
08084C88: 251c         add r5,r4,#0x0
08084C8A: b435         add r5,#0xb4
08084C8C: 2868         ldr r0,[r5,#0x0]
08084C8E: 0028         cmp r0,#0x0
08084C90: 03d0         beq 0x08084c9a
08084C92: a6f7a7fb     bl 0x0802b3e4
08084C96: 0028         cmp r0,#0x0
08084C98: 04d0         beq 0x08084ca4
08084C9A: 0021         mov r1,#0x0
08084C9C: 2960         str r1,[r5,#0x0]
08084C9E: 0220         mov r0,#0x2
08084CA0: 6073         strb r0,[r4,#0xd]
08084CA2: a173         strb r1,[r4,#0xe]
08084CA4: 30bc         pop {r4,r5}
08084CA6: 01bc         pop {r0}
08084CA8: 0047         bx r0
