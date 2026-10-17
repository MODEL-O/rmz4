; undefined FUN_080f0e90(void)
; entry 0x80f0e90  size 34 bytes

080F0E90: 10b5         push {r4,lr}
080F0E92: 041c         add r4,r0,#0x0
080F0E94: 607c         ldrb r0,[r4,#0x11]
080F0E96: 0a28         cmp r0,#0xa
080F0E98: 00d9         bls 0x080f0e9c
080F0E9A: cce0         b 0x080f1036
080F0E9C: 8000         lsl r0,r0,#0x2
080F0E9E: 0249         ldr r1,[0x080f0ea8]
080F0EA0: 4018         add r0,r0,r1
080F0EA2: 0068         ldr r0,[r0,#0x0]
080F0EA4: 8746         mov pc,r0
080F1036: 201c         add r0,r4,#0x0
080F1038: 2bf7daff     bl 0x0801cff0
080F103C: 10bc         pop {r4}
080F103E: 01bc         pop {r0}
080F1040: 0047         bx r0
