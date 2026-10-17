; undefined FUN_0810e760(void)
; entry 0x810e760  size 48 bytes

0810E760: 30b5         push {r4,r5,lr}
0810E762: 041c         add r4,r0,#0x0
0810E764: 236a         ldr r3,[r4,#0x20]
0810E766: 0025         mov r5,#0x0
0810E768: 0be0         b 0x0810e782
0810E76A: f328         cmp r0,#0xf3
0810E76C: 08d1         bne 0x0810e780
0810E76E: 0133         add r3,#0x1
0810E770: 1878         ldrb r0,[r3,#0x0]
0810E772: 2179         ldrb r1,[r4,#0x4]
0810E774: 4900         lsl r1,r1,#0x1
0810E776: a279         ldrb r2,[r4,#0x6]
0810E778: 1143         orr r1,r2
0810E77A: 8842         cmp r0,r1
0810E77C: 00d0         beq 0x0810e780
0810E77E: 0125         mov r5,#0x1
0810E780: 0133         add r3,#0x1
0810E782: 1878         ldrb r0,[r3,#0x0]
0810E784: fc28         cmp r0,#0xfc
0810E786: f0d9         bls 0x0810e76a
0810E788: 281c         add r0,r5,#0x0
0810E78A: 30bc         pop {r4,r5}
0810E78C: 02bc         pop {r1}
0810E78E: 0847         bx r1
