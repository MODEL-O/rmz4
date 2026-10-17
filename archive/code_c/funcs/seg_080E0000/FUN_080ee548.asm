; undefined FUN_080ee548(void)
; entry 0x80ee548  size 32 bytes

080EE548: f0b5         push {r4,r5,r6,r7,lr}
080EE54A: 4f46         mov r7,r9
080EE54C: 4646         mov r6,r8
080EE54E: c0b4         push {r6,r7}
080EE550: 8eb0         sub sp,#0x38
080EE552: 071c         add r7,r0,#0x0
080EE554: 787b         ldrb r0,[r7,#0xd]
080EE556: d328         cmp r0,#0xd3
080EE558: 01d9         bls 0x080ee55e
080EE55A: 00f0a7fd     bl 0x080ef0ac
080EE55E: 8000         lsl r0,r0,#0x2
080EE560: 0149         ldr r1,[0x080ee568]
080EE562: 4018         add r0,r0,r1
080EE564: 0068         ldr r0,[r0,#0x0]
080EE566: 8746         mov pc,r0
