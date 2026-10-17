; undefined FUN_080383a4(void)
; entry 0x80383a4  size 38 bytes

080383A4: 00b5         push {lr}
080383A6: 021c         add r2,r0,#0x0
080383A8: 107b         ldrb r0,[r2,#0xc]
080383AA: 0228         cmp r0,#0x2
080383AC: 01d9         bls 0x080383b2
080383AE: 0220         mov r0,#0x2
080383B0: 1073         strb r0,[r2,#0xc]
080383B2: 507b         ldrb r0,[r2,#0xd]
080383B4: 0228         cmp r0,#0x2
080383B6: 01d9         bls 0x080383bc
080383B8: 0220         mov r0,#0x2
080383BA: 5073         strb r0,[r2,#0xd]
080383BC: 0021         mov r1,#0x0
080383BE: d173         strb r1,[r2,#0xf]
080383C0: 101c         add r0,r2,#0x0
080383C2: 3230         add r0,#0x32
080383C4: 0170         strb r1,[r0,#0x0]
080383C6: 01bc         pop {r0}
080383C8: 0047         bx r0
