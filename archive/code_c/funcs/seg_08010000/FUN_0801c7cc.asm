; undefined FUN_0801c7cc(void)
; entry 0x801c7cc  size 64 bytes

0801C7CC: 30b5         push {r4,r5,lr}
0801C7CE: 051c         add r5,r0,#0x0
0801C7D0: e8f770fe     bl 0x080054b4
0801C7D4: 0fe0         b 0x0801c7f6
0801C7D6: 6169         ldr r1,[r4,#0x14]
0801C7D8: 201c         add r0,r4,#0x0
0801C7DA: 0cf1d1fb     bl 0x08128f80
0801C7DE: e17a         ldrb r1,[r4,#0xb]
0801C7E0: 0820         mov r0,#0x8
0801C7E2: 0840         and r0,r1
0801C7E4: 0028         cmp r0,#0x0
0801C7E6: 06d0         beq 0x0801c7f6
0801C7E8: 207f         ldrb r0,[r4,#0x1c]
0801C7EA: e18c         ldrh r1,[r4,#0x26]
0801C7EC: 221c         add r2,r4,#0x0
0801C7EE: 5432         add r2,#0x54
0801C7F0: 236b         ldr r3,[r4,#0x30]
0801C7F2: ecf787fa     bl 0x08008d04
0801C7F6: e868         ldr r0,[r5,#0xc]
0801C7F8: 4068         ldr r0,[r0,#0x4]
0801C7FA: e860         str r0,[r5,#0xc]
0801C7FC: 041c         add r4,r0,#0x0
0801C7FE: 281c         add r0,r5,#0x0
0801C800: 1430         add r0,#0x14
0801C802: 8442         cmp r4,r0
0801C804: e7d1         bne 0x0801c7d6
0801C806: 30bc         pop {r4,r5}
0801C808: 01bc         pop {r0}
0801C80A: 0047         bx r0
