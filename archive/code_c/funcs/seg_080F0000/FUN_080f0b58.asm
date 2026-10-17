; undefined FUN_080f0b58(void)
; entry 0x80f0b58  size 32 bytes

080F0B58: f0b5         push {r4,r5,r6,r7,lr}
080F0B5A: 84b0         sub sp,#0x10
080F0B5C: 051c         add r5,r0,#0x0
080F0B5E: 687b         ldrb r0,[r5,#0xd]
080F0B60: 0528         cmp r0,#0x5
080F0B62: 00d9         bls 0x080f0b66
080F0B64: 29e1         b 0x080f0dba
080F0B66: 8000         lsl r0,r0,#0x2
080F0B68: 0149         ldr r1,[0x080f0b70]
080F0B6A: 4018         add r0,r0,r1
080F0B6C: 0068         ldr r0,[r0,#0x0]
080F0B6E: 8746         mov pc,r0
080F0DBA: 04b0         add sp,#0x10
080F0DBC: f0bc         pop {r4,r5,r6,r7}
080F0DBE: 01bc         pop {r0}
080F0DC0: 0047         bx r0
