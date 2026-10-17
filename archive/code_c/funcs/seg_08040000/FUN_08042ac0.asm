; undefined FUN_08042ac0(void)
; entry 0x8042ac0  size 20 bytes

08042AC0: 00b5         push {lr}
08042AC2: 044a         ldr r2,[0x08042ad4]
08042AC4: 017c         ldrb r1,[r0,#0x10]
08042AC6: 8900         lsl r1,r1,#0x2
08042AC8: 8918         add r1,r1,r2
08042ACA: 0968         ldr r1,[r1,#0x0]
08042ACC: e6f058fa     bl 0x08128f80
08042AD0: 01bc         pop {r0}
08042AD2: 0047         bx r0
