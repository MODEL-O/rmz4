; undefined FUN_08063664(void)
; entry 0x8063664  size 20 bytes

08063664: 00b5         push {lr}
08063666: 044a         ldr r2,[0x08063678]
08063668: 817b         ldrb r1,[r0,#0xe]
0806366A: 8900         lsl r1,r1,#0x2
0806366C: 8918         add r1,r1,r2
0806366E: 0968         ldr r1,[r1,#0x0]
08063670: c5f086fc     bl 0x08128f80
08063674: 01bc         pop {r0}
08063676: 0047         bx r0
