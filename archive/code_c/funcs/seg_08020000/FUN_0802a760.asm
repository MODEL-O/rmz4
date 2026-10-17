; undefined FUN_0802a760(void)
; entry 0x802a760  size 56 bytes

0802A760: 10b5         push {r4,lr}
0802A762: 0006         lsl r0,r0,#0x18
0802A764: 040e         lsr r4,r0,#0x18
0802A766: 0220         mov r0,#0x2
0802A768: d6f782f9     bl 0x08000a70
0802A76C: 021c         add r2,r0,#0x0
0802A76E: 002a         cmp r2,#0x0
0802A770: 0fd0         beq 0x0802a792
0802A772: 0949         ldr r1,[0x0802a798]
0802A774: 081c         add r0,r1,#0x0
0802A776: 001b         sub r0,r0,r4
0802A778: 1080         strh r0,[r2,#0x0]
0802A77A: 0848         ldr r0,[0x0802a79c]
0802A77C: 0088         ldrh r0,[r0,#0x0]
0802A77E: f821         mov r1,#0xf8
0802A780: 4901         lsl r1,r1,#0x5
0802A782: 0140         and r1,r0
0802A784: c900         lsl r1,r1,#0x3
0802A786: 0648         ldr r0,[0x0802a7a0]
0802A788: 0918         add r1,r1,r0
0802A78A: 101c         add r0,r2,#0x0
0802A78C: 0222         mov r2,#0x2
0802A78E: d7f7c5fb     bl 0x08001f1c
0802A792: 10bc         pop {r4}
0802A794: 01bc         pop {r0}
0802A796: 0047         bx r0
