; undefined FUN_080c800c(void)
; entry 0x80c800c  size 70 bytes

080C800C: 00b5         push {lr}
080C800E: 021c         add r2,r0,#0x0
080C8010: 916a         ldr r1,[r2,#0x28]
080C8012: 0029         cmp r1,#0x0
080C8014: 06d0         beq 0x080c8024
080C8016: 087b         ldrb r0,[r1,#0xc]
080C8018: 0128         cmp r0,#0x1
080C801A: 01d9         bls 0x080c8020
080C801C: 0021         mov r1,#0x0
080C801E: 9162         str r1,[r2,#0x28]
080C8020: 0029         cmp r1,#0x0
080C8022: 0fd1         bne 0x080c8044
080C8024: 0649         ldr r1,[0x080c8040]
080C8026: 507a         ldrb r0,[r2,#0x9]
080C8028: 8000         lsl r0,r0,#0x2
080C802A: 4018         add r0,r0,r1
080C802C: 0221         mov r1,#0x2
080C802E: d160         str r1,[r2,#0xc]
080C8030: 0068         ldr r0,[r0,#0x0]
080C8032: 8068         ldr r0,[r0,#0x8]
080C8034: 5061         str r0,[r2,#0x14]
080C8036: 101c         add r0,r2,#0x0
080C8038: 00f036f9     bl 0x080c82a8
080C803C: 0ae0         b 0x080c8054
080C8044: 0448         ldr r0,[0x080c8058]
080C8046: 517b         ldrb r1,[r2,#0xd]
080C8048: 8900         lsl r1,r1,#0x2
080C804A: 0918         add r1,r1,r0
080C804C: 0968         ldr r1,[r1,#0x0]
080C804E: 101c         add r0,r2,#0x0
080C8050: 60f096ff     bl 0x08128f80
080C8054: 01bc         pop {r0}
080C8056: 0047         bx r0
