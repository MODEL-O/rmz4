; undefined FUN_08028e84(void)
; entry 0x8028e84  size 50 bytes

08028E84: f0b5         push {r4,r5,r6,r7,lr}
08028E86: 4746         mov r7,r8
08028E88: 80b4         push {r7}
08028E8A: 051c         add r5,r0,#0x0
08028E8C: 2c69         ldr r4,[r5,#0x10]
08028E8E: 002c         cmp r4,#0x0
08028E90: 00d1         bne 0x08028e94
08028E92: 32e1         b 0x080290fa
08028E94: e868         ldr r0,[r5,#0xc]
08028E96: 4178         ldrb r1,[r0,#0x1]
08028E98: 061c         add r6,r0,#0x0
08028E9A: 1229         cmp r1,#0x12
08028E9C: 00d9         bls 0x08028ea0
08028E9E: 2ce1         b 0x080290fa
08028EA0: 8800         lsl r0,r1,#0x2
08028EA2: 0249         ldr r1,[0x08028eac]
08028EA4: 4018         add r0,r0,r1
08028EA6: 0068         ldr r0,[r0,#0x0]
08028EA8: 8746         mov pc,r0
080290FA: 0020         mov r0,#0x0
080290FC: 08bc         pop {r3}
080290FE: 9846         mov r8,r3
08029100: f0bc         pop {r4,r5,r6,r7}
08029102: 02bc         pop {r1}
08029104: 0847         bx r1
