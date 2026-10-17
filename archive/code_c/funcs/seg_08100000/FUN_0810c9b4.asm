; undefined FUN_0810c9b4(void)
; entry 0x810c9b4  size 70 bytes

0810C9B4: 30b5         push {r4,r5,lr}
0810C9B6: 041c         add r4,r0,#0x0
0810C9B8: a56a         ldr r5,[r4,#0x28]
0810C9BA: a07a         ldrb r0,[r4,#0xa]
0810C9BC: 0121         mov r1,#0x1
0810C9BE: 0143         orr r1,r0
0810C9C0: a172         strb r1,[r4,#0xa]
0810C9C2: 201c         add r0,r4,#0x0
0810C9C4: 10f714fb     bl 0x0801cff0
0810C9C8: 6878         ldrb r0,[r5,#0x1]
0810C9CA: 0128         cmp r0,#0x1
0810C9CC: 11d9         bls 0x0810c9f2
0810C9CE: e878         ldrb r0,[r5,#0x3]
0810C9D0: 0128         cmp r0,#0x1
0810C9D2: 0ed9         bls 0x0810c9f2
0810C9D4: 607c         ldrb r0,[r4,#0x11]
0810C9D6: 0028         cmp r0,#0x0
0810C9D8: 06d1         bne 0x0810c9e8
0810C9DA: 0249         ldr r1,[0x0810c9e4]
0810C9DC: 6818         add r0,r5,r1
0810C9DE: 807b         ldrb r0,[r0,#0xe]
0810C9E0: 05e0         b 0x0810c9ee
0810C9E8: 0549         ldr r1,[0x0810ca00]
0810C9EA: 6818         add r0,r5,r1
0810C9EC: c07b         ldrb r0,[r0,#0xf]
0810C9EE: 0028         cmp r0,#0x0
0810C9F0: 03d1         bne 0x0810c9fa
0810C9F2: a17a         ldrb r1,[r4,#0xa]
0810C9F4: fe20         mov r0,#0xfe
0810C9F6: 0840         and r0,r1
0810C9F8: a072         strb r0,[r4,#0xa]
0810C9FA: 30bc         pop {r4,r5}
0810C9FC: 01bc         pop {r0}
0810C9FE: 0047         bx r0
