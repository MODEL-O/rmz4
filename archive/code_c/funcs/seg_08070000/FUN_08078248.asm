; undefined FUN_08078248(void)
; entry 0x8078248  size 32 bytes

08078248: f0b5         push {r4,r5,r6,r7,lr}
0807824A: 041c         add r4,r0,#0x0
0807824C: e07b         ldrb r0,[r4,#0xf]
0807824E: 0528         cmp r0,#0x5
08078250: 00d9         bls 0x08078254
08078252: 10e1         b 0x08078476
08078254: 8000         lsl r0,r0,#0x2
08078256: 0349         ldr r1,[0x08078264]
08078258: 4018         add r0,r0,r1
0807825A: 0068         ldr r0,[r0,#0x0]
0807825C: 261c         add r6,r4,#0x0
0807825E: d036         add r6,#0xd0
08078260: 8746         mov pc,r0
08078476: f0bc         pop {r4,r5,r6,r7}
08078478: 01bc         pop {r0}
0807847A: 0047         bx r0
