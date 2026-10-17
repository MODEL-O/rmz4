; undefined FUN_08082940(void)
; entry 0x8082940  size 32 bytes

08082940: f0b5         push {r4,r5,r6,r7,lr}
08082942: 82b0         sub sp,#0x8
08082944: 051c         add r5,r0,#0x0
08082946: a87b         ldrb r0,[r5,#0xe]
08082948: 0428         cmp r0,#0x4
0808294A: 00d9         bls 0x0808294e
0808294C: 08e1         b 0x08082b60
0808294E: 8000         lsl r0,r0,#0x2
08082950: 0149         ldr r1,[0x08082958]
08082952: 4018         add r0,r0,r1
08082954: 0068         ldr r0,[r0,#0x0]
08082956: 8746         mov pc,r0
08082B60: 02b0         add sp,#0x8
08082B62: f0bc         pop {r4,r5,r6,r7}
08082B64: 01bc         pop {r0}
08082B66: 0047         bx r0
