; undefined FUN_0810c424(void)
; entry 0x810c424  size 38 bytes

0810C424: 70b5         push {r4,r5,r6,lr}
0810C426: 061c         add r6,r0,#0x0
0810C428: 707b         ldrb r0,[r6,#0xd]
0810C42A: 0428         cmp r0,#0x4
0810C42C: 00d9         bls 0x0810c430
0810C42E: c4e0         b 0x0810c5ba
0810C430: 8000         lsl r0,r0,#0x2
0810C432: 0349         ldr r1,[0x0810c440]
0810C434: 4018         add r0,r0,r1
0810C436: 0068         ldr r0,[r0,#0x0]
0810C438: 341c         add r4,r6,#0x0
0810C43A: 7434         add r4,#0x74
0810C43C: 8746         mov pc,r0
0810C5BA: 301c         add r0,r6,#0x0
0810C5BC: 10f718fd     bl 0x0801cff0
0810C5C0: 70bc         pop {r4,r5,r6}
0810C5C2: 01bc         pop {r0}
0810C5C4: 0047         bx r0
