; undefined FUN_080f13f0(void)
; entry 0x80f13f0  size 34 bytes

080F13F0: 10b5         push {r4,lr}
080F13F2: 041c         add r4,r0,#0x0
080F13F4: 607c         ldrb r0,[r4,#0x11]
080F13F6: 0628         cmp r0,#0x6
080F13F8: 00d9         bls 0x080f13fc
080F13FA: 97e0         b 0x080f152c
080F13FC: 8000         lsl r0,r0,#0x2
080F13FE: 0249         ldr r1,[0x080f1408]
080F1400: 4018         add r0,r0,r1
080F1402: 0068         ldr r0,[r0,#0x0]
080F1404: 8746         mov pc,r0
080F152C: 201c         add r0,r4,#0x0
080F152E: 2bf75ffd     bl 0x0801cff0
080F1532: 10bc         pop {r4}
080F1534: 01bc         pop {r0}
080F1536: 0047         bx r0
