; undefined FUN_0807f954(void)
; entry 0x807f954  size 64 bytes

0807F954: 30b5         push {r4,r5,lr}
0807F956: 0006         lsl r0,r0,#0x18
0807F958: 050e         lsr r5,r0,#0x18
0807F95A: 0948         ldr r0,[0x0807f980]
0807F95C: 0468         ldr r4,[r0,#0x0]
0807F95E: 201c         add r0,r4,#0x0
0807F960: 85f7b0fd     bl 0x080054c4
0807F964: e068         ldr r0,[r4,#0xc]
0807F966: 4068         ldr r0,[r0,#0x4]
0807F968: e060         str r0,[r4,#0xc]
0807F96A: 011c         add r1,r0,#0x0
0807F96C: 201c         add r0,r4,#0x0
0807F96E: 1430         add r0,#0x14
0807F970: 8142         cmp r1,r0
0807F972: 0dd0         beq 0x0807f990
0807F974: 021c         add r2,r0,#0x0
0807F976: 087c         ldrb r0,[r1,#0x10]
0807F978: a842         cmp r0,r5
0807F97A: 03d1         bne 0x0807f984
0807F97C: 081c         add r0,r1,#0x0
0807F97E: 08e0         b 0x0807f992
0807F984: e068         ldr r0,[r4,#0xc]
0807F986: 4068         ldr r0,[r0,#0x4]
0807F988: e060         str r0,[r4,#0xc]
0807F98A: 011c         add r1,r0,#0x0
0807F98C: 9142         cmp r1,r2
0807F98E: f2d1         bne 0x0807f976
0807F990: 0020         mov r0,#0x0
0807F992: 30bc         pop {r4,r5}
0807F994: 02bc         pop {r1}
0807F996: 0847         bx r1
