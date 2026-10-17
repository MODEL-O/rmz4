; undefined FUN_0806fa3c(void)
; entry 0x806fa3c  size 48 bytes

0806FA3C: 10b5         push {r4,lr}
0806FA3E: 041c         add r4,r0,#0x0
0806FA40: b430         add r0,#0xb4
0806FA42: 407e         ldrb r0,[r0,#0x19]
0806FA44: 0028         cmp r0,#0x0
0806FA46: 0bd0         beq 0x0806fa60
0806FA48: 7220         mov r0,#0x72
0806FA4A: 92f7ebfd     bl 0x08002624
0806FA4E: 9420         mov r0,#0x94
0806FA50: 92f7e8fd     bl 0x08002624
0806FA54: 7320         mov r0,#0x73
0806FA56: 92f7e5fd     bl 0x08002624
0806FA5A: db20         mov r0,#0xdb
0806FA5C: 92f7e2fd     bl 0x08002624
0806FA60: 201c         add r0,r4,#0x0
0806FA62: e0f783fc     bl 0x0805036c
0806FA66: 10bc         pop {r4}
0806FA68: 01bc         pop {r0}
0806FA6A: 0047         bx r0
