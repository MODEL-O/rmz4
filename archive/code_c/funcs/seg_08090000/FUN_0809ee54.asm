; undefined FUN_0809ee54(void)
; entry 0x809ee54  size 20 bytes

0809EE54: 00b5         push {lr}
0809EE56: 044a         ldr r2,[0x0809ee68]
0809EE58: 417b         ldrb r1,[r0,#0xd]
0809EE5A: 8900         lsl r1,r1,#0x2
0809EE5C: 8918         add r1,r1,r2
0809EE5E: 0968         ldr r1,[r1,#0x0]
0809EE60: 8af08ef8     bl 0x08128f80
0809EE64: 01bc         pop {r0}
0809EE66: 0047         bx r0
