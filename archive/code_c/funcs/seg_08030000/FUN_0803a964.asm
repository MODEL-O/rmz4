; undefined FUN_0803a964(void)
; entry 0x803a964  size 50 bytes

0803A964: 70b5         push {r4,r5,r6,lr}
0803A966: 061c         add r6,r0,#0x0
0803A968: 0b48         ldr r0,[0x0803a998]
0803A96A: 0468         ldr r4,[r0,#0x0]
0803A96C: 201c         add r0,r4,#0x0
0803A96E: caf7a9fd     bl 0x080054c4
0803A972: e068         ldr r0,[r4,#0xc]
0803A974: 4068         ldr r0,[r0,#0x4]
0803A976: e060         str r0,[r4,#0xc]
0803A978: 211c         add r1,r4,#0x0
0803A97A: 1431         add r1,#0x14
0803A97C: 8842         cmp r0,r1
0803A97E: 07d0         beq 0x0803a990
0803A980: 0d1c         add r5,r1,#0x0
0803A982: eef007fb     bl 0x08128f94
0803A986: e068         ldr r0,[r4,#0xc]
0803A988: 4068         ldr r0,[r0,#0x4]
0803A98A: e060         str r0,[r4,#0xc]
0803A98C: a842         cmp r0,r5
0803A98E: f8d1         bne 0x0803a982
0803A990: 70bc         pop {r4,r5,r6}
0803A992: 01bc         pop {r0}
0803A994: 0047         bx r0
