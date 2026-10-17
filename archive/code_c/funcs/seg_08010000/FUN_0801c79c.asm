; undefined FUN_0801c79c(void)
; entry 0x801c79c  size 46 bytes

0801C79C: 30b5         push {r4,r5,lr}
0801C79E: 041c         add r4,r0,#0x0
0801C7A0: e8f788fe     bl 0x080054b4
0801C7A4: e068         ldr r0,[r4,#0xc]
0801C7A6: 4068         ldr r0,[r0,#0x4]
0801C7A8: e060         str r0,[r4,#0xc]
0801C7AA: 211c         add r1,r4,#0x0
0801C7AC: 1431         add r1,#0x14
0801C7AE: 8842         cmp r0,r1
0801C7B0: 08d0         beq 0x0801c7c4
0801C7B2: 0d1c         add r5,r1,#0x0
0801C7B4: 4169         ldr r1,[r0,#0x14]
0801C7B6: 0cf1e3fb     bl 0x08128f80
0801C7BA: e068         ldr r0,[r4,#0xc]
0801C7BC: 4068         ldr r0,[r0,#0x4]
0801C7BE: e060         str r0,[r4,#0xc]
0801C7C0: a842         cmp r0,r5
0801C7C2: f7d1         bne 0x0801c7b4
0801C7C4: 30bc         pop {r4,r5}
0801C7C6: 01bc         pop {r0}
0801C7C8: 0047         bx r0
