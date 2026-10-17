; undefined FUN_08019f7c(void)
; entry 0x8019f7c  size 70 bytes

08019F7C: f0b5         push {r4,r5,r6,r7,lr}
08019F7E: 4746         mov r7,r8
08019F80: 80b4         push {r7}
08019F82: 061c         add r6,r0,#0x0
08019F84: 0023         mov r3,#0x0
08019F86: b16b         ldr r1,[r6,#0x38]
08019F88: 0448         ldr r0,[0x08019f9c]
08019F8A: 8142         cmp r1,r0
08019F8C: 0edd         ble 0x08019fac
08019F8E: a020         mov r0,#0xa0
08019F90: 0001         lsl r0,r0,#0x4
08019F92: 8142         cmp r1,r0
08019F94: 04dd         ble 0x08019fa0
08019F96: 0123         mov r3,#0x1
08019F98: 08e0         b 0x08019fac
08019FA0: 716b         ldr r1,[r6,#0x34]
08019FA2: 0748         ldr r0,[0x08019fc0]
08019FA4: 0323         mov r3,#0x3
08019FA6: 8142         cmp r1,r0
08019FA8: 00dc         bgt 0x08019fac
08019FAA: 0223         mov r3,#0x2
08019FAC: b07b         ldrb r0,[r6,#0xe]
08019FAE: 1128         cmp r0,#0x11
08019FB0: 00d9         bls 0x08019fb4
08019FB2: 39e3         b 0x0801a628
08019FB4: 8000         lsl r0,r0,#0x2
08019FB6: 0349         ldr r1,[0x08019fc4]
08019FB8: 4018         add r0,r0,r1
08019FBA: 0068         ldr r0,[r0,#0x0]
08019FBC: 8746         mov pc,r0
0801A628: 08bc         pop {r3}
0801A62A: 9846         mov r8,r3
0801A62C: f0bc         pop {r4,r5,r6,r7}
0801A62E: 01bc         pop {r0}
0801A630: 0047         bx r0
