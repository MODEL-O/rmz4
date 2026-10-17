; undefined FUN_080bef88(void)
; entry 0x80bef88  size 48 bytes

080BEF88: 10b5         push {r4,lr}
080BEF8A: 041c         add r4,r0,#0x0
080BEF8C: 0a49         ldr r1,[0x080befb8]
080BEF8E: 207c         ldrb r0,[r4,#0x10]
080BEF90: 8000         lsl r0,r0,#0x2
080BEF92: 4018         add r0,r0,r1
080BEF94: 0168         ldr r1,[r0,#0x0]
080BEF96: 201c         add r0,r4,#0x0
080BEF98: 69f0f2ff     bl 0x08128f80
080BEF9C: 0006         lsl r0,r0,#0x18
080BEF9E: 0028         cmp r0,#0x0
080BEFA0: 07d1         bne 0x080befb2
080BEFA2: 0648         ldr r0,[0x080befbc]
080BEFA4: 217c         ldrb r1,[r4,#0x10]
080BEFA6: 8900         lsl r1,r1,#0x2
080BEFA8: 0918         add r1,r1,r0
080BEFAA: 0968         ldr r1,[r1,#0x0]
080BEFAC: 201c         add r0,r4,#0x0
080BEFAE: 69f0e7ff     bl 0x08128f80
080BEFB2: 10bc         pop {r4}
080BEFB4: 01bc         pop {r0}
080BEFB6: 0047         bx r0
