; undefined FUN_0802ad78(void)
; entry 0x802ad78  size 30 bytes

0802AD78: 00b5         push {lr}
0802AD7A: 0349         ldr r1,[0x0802ad88]
0802AD7C: 8878         ldrb r0,[r1,#0x2]
0802AD7E: 0028         cmp r0,#0x0
0802AD80: 04d0         beq 0x0802ad8c
0802AD82: 0138         sub r0,#0x1
0802AD84: 8870         strb r0,[r1,#0x2]
0802AD86: 06e0         b 0x0802ad96
0802AD8C: 4878         ldrb r0,[r1,#0x1]
0802AD8E: 0a78         ldrb r2,[r1,#0x0]
0802AD90: 9042         cmp r0,r2
0802AD92: 00d0         beq 0x0802ad96
0802AD94: 0870         strb r0,[r1,#0x0]
0802AD96: 01bc         pop {r0}
0802AD98: 0047         bx r0
