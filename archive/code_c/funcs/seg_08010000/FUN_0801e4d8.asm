; undefined FUN_0801e4d8(void)
; entry 0x801e4d8  size 22 bytes

0801E4D8: 00b5         push {lr}
0801E4DA: 0168         ldr r1,[r0,#0x0]
0801E4DC: c320         mov r0,#0xc3
0801E4DE: 4003         lsl r0,r0,#0xd
0801E4E0: 8142         cmp r1,r0
0801E4E2: 01dc         bgt 0x0801e4e8
0801E4E4: 0020         mov r0,#0x0
0801E4E6: 00e0         b 0x0801e4ea
0801E4E8: 0120         mov r0,#0x1
0801E4EA: 02bc         pop {r1}
0801E4EC: 0847         bx r1
