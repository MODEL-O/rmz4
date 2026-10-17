; undefined FUN_08047930(void)
; entry 0x8047930  size 76 bytes

08047930: 70b5         push {r4,r5,r6,lr}
08047932: 041c         add r4,r0,#0x0
08047934: d5f7b2f9     bl 0x0801cc9c
08047938: 201c         add r0,r4,#0x0
0804793A: d5f7d7fa     bl 0x0801ceec
0804793E: a17a         ldrb r1,[r4,#0xa]
08047940: 0120         mov r0,#0x1
08047942: 0026         mov r6,#0x0
08047944: 0843         orr r0,r1
08047946: 0221         mov r1,#0x2
08047948: 0843         orr r0,r1
0804794A: a072         strb r0,[r4,#0xa]
0804794C: 0b49         ldr r1,[0x0804797c]
0804794E: 201c         add r0,r4,#0x0
08047950: d5f7d6fa     bl 0x0801cf00
08047954: a17a         ldrb r1,[r4,#0xa]
08047956: 0420         mov r0,#0x4
08047958: 0843         orr r0,r1
0804795A: a072         strb r0,[r4,#0xa]
0804795C: 251c         add r5,r4,#0x0
0804795E: 7435         add r5,#0x74
08047960: 0749         ldr r1,[0x08047980]
08047962: 221c         add r2,r4,#0x0
08047964: 5432         add r2,#0x54
08047966: 281c         add r0,r5,#0x0
08047968: 0823         mov r3,#0x8
0804796A: bdf7f9fe     bl 0x08005760
0804796E: ec62         str r4,[r5,#0x2c]
08047970: 6e62         str r6,[r5,#0x24]
08047972: 4020         mov r0,#0x40
08047974: a074         strb r0,[r4,#0x12]
08047976: 70bc         pop {r4,r5,r6}
08047978: 01bc         pop {r0}
0804797A: 0047         bx r0
