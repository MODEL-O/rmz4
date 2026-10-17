; undefined FUN_0810c214(void)
; entry 0x810c214  size 38 bytes

0810C214: 70b5         push {r4,r5,r6,lr}
0810C216: 061c         add r6,r0,#0x0
0810C218: 707b         ldrb r0,[r6,#0xd]
0810C21A: 0428         cmp r0,#0x4
0810C21C: 00d9         bls 0x0810c220
0810C21E: c4e0         b 0x0810c3aa
0810C220: 8000         lsl r0,r0,#0x2
0810C222: 0349         ldr r1,[0x0810c230]
0810C224: 4018         add r0,r0,r1
0810C226: 0068         ldr r0,[r0,#0x0]
0810C228: 341c         add r4,r6,#0x0
0810C22A: 7434         add r4,#0x74
0810C22C: 8746         mov pc,r0
0810C3AA: 301c         add r0,r6,#0x0
0810C3AC: 10f720fe     bl 0x0801cff0
0810C3B0: 70bc         pop {r4,r5,r6}
0810C3B2: 01bc         pop {r0}
0810C3B4: 0047         bx r0
