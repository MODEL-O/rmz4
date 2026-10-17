; undefined FUN_080f8588(void)
; entry 0x80f8588  size 38 bytes

080F8588: 30b5         push {r4,r5,lr}
080F858A: 041c         add r4,r0,#0x0
080F858C: 1206         lsl r2,r2,#0x18
080F858E: 150e         lsr r5,r2,#0x18
080F8590: 00f0ccf8     bl 0x080f872c
080F8594: 0006         lsl r0,r0,#0x18
080F8596: 000e         lsr r0,r0,#0x18
080F8598: 0b28         cmp r0,#0xb
080F859A: 00d9         bls 0x080f859e
080F859C: 8ce0         b 0x080f86b8
080F859E: 8000         lsl r0,r0,#0x2
080F85A0: 0149         ldr r1,[0x080f85a8]
080F85A2: 4018         add r0,r0,r1
080F85A4: 0068         ldr r0,[r0,#0x0]
080F85A6: 8746         mov pc,r0
080F86B8: 30bc         pop {r4,r5}
080F86BA: 01bc         pop {r0}
080F86BC: 0047         bx r0
