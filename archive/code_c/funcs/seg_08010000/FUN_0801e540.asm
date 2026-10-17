; undefined FUN_0801e540(void)
; entry 0x801e540  size 22 bytes

0801E540: 00b5         push {lr}
0801E542: 4168         ldr r1,[r0,#0x4]
0801E544: c820         mov r0,#0xc8
0801E546: 0003         lsl r0,r0,#0xc
0801E548: 8142         cmp r1,r0
0801E54A: 01dc         bgt 0x0801e550
0801E54C: 0020         mov r0,#0x0
0801E54E: 00e0         b 0x0801e552
0801E550: 0120         mov r0,#0x1
0801E552: 02bc         pop {r1}
0801E554: 0847         bx r1
