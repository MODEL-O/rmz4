; undefined FUN_080780cc(void)
; entry 0x80780cc  size 20 bytes

080780CC: 00b5         push {lr}
080780CE: 044a         ldr r2,[0x080780e0]
080780D0: 817b         ldrb r1,[r0,#0xe]
080780D2: 8900         lsl r1,r1,#0x2
080780D4: 8918         add r1,r1,r2
080780D6: 0968         ldr r1,[r1,#0x0]
080780D8: b0f052ff     bl 0x08128f80
080780DC: 01bc         pop {r0}
080780DE: 0047         bx r0
