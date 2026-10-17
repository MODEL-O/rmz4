; undefined FUN_08081aac(void)
; entry 0x8081aac  size 20 bytes

08081AAC: 00b5         push {lr}
08081AAE: 044a         ldr r2,[0x08081ac0]
08081AB0: 417b         ldrb r1,[r0,#0xd]
08081AB2: 8900         lsl r1,r1,#0x2
08081AB4: 8918         add r1,r1,r2
08081AB6: 0968         ldr r1,[r1,#0x0]
08081AB8: a7f062fa     bl 0x08128f80
08081ABC: 01bc         pop {r0}
08081ABE: 0047         bx r0
