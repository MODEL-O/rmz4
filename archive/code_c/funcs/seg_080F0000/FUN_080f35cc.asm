; undefined FUN_080f35cc(void)
; entry 0x80f35cc  size 40 bytes

080F35CC: f0b5         push {r4,r5,r6,r7,lr}
080F35CE: 4f46         mov r7,r9
080F35D0: 4646         mov r6,r8
080F35D2: c0b4         push {r6,r7}
080F35D4: 061c         add r6,r0,#0x0
080F35D6: 707b         ldrb r0,[r6,#0xd]
080F35D8: 2228         cmp r0,#0x22
080F35DA: 00d9         bls 0x080f35de
080F35DC: dae2         b 0x080f3b94
080F35DE: 8000         lsl r0,r0,#0x2
080F35E0: 0149         ldr r1,[0x080f35e8]
080F35E2: 4018         add r0,r0,r1
080F35E4: 0068         ldr r0,[r0,#0x0]
080F35E6: 8746         mov pc,r0
080F3B94: 18bc         pop {r3,r4}
080F3B96: 9846         mov r8,r3
080F3B98: a146         mov r9,r4
080F3B9A: f0bc         pop {r4,r5,r6,r7}
080F3B9C: 01bc         pop {r0}
080F3B9E: 0047         bx r0
