; undefined FUN_0807db78(void)
; entry 0x807db78  size 20 bytes

0807DB78: 00b5         push {lr}
0807DB7A: 044a         ldr r2,[0x0807db8c]
0807DB7C: 817b         ldrb r1,[r0,#0xe]
0807DB7E: 8900         lsl r1,r1,#0x2
0807DB80: 8918         add r1,r1,r2
0807DB82: 0968         ldr r1,[r1,#0x0]
0807DB84: abf0fcf9     bl 0x08128f80
0807DB88: 01bc         pop {r0}
0807DB8A: 0047         bx r0
