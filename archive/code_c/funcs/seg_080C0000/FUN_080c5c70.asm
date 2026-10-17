; undefined FUN_080c5c70(void)
; entry 0x80c5c70  size 60 bytes

080C5C70: 00b5         push {lr}
080C5C72: 021c         add r2,r0,#0x0
080C5C74: 906a         ldr r0,[r2,#0x28]
080C5C76: 806a         ldr r0,[r0,#0x28]
080C5C78: 007b         ldrb r0,[r0,#0xc]
080C5C7A: 0128         cmp r0,#0x1
080C5C7C: 0ed9         bls 0x080c5c9c
080C5C7E: 0649         ldr r1,[0x080c5c98]
080C5C80: 507a         ldrb r0,[r2,#0x9]
080C5C82: 8000         lsl r0,r0,#0x2
080C5C84: 4018         add r0,r0,r1
080C5C86: 0221         mov r1,#0x2
080C5C88: d160         str r1,[r2,#0xc]
080C5C8A: 0068         ldr r0,[r0,#0x0]
080C5C8C: 8068         ldr r0,[r0,#0x8]
080C5C8E: 5061         str r0,[r2,#0x14]
080C5C90: 101c         add r0,r2,#0x0
080C5C92: 00f0ddf8     bl 0x080c5e50
080C5C96: 09e0         b 0x080c5cac
080C5C9C: 0448         ldr r0,[0x080c5cb0]
080C5C9E: 517b         ldrb r1,[r2,#0xd]
080C5CA0: 8900         lsl r1,r1,#0x2
080C5CA2: 0918         add r1,r1,r0
080C5CA4: 0968         ldr r1,[r1,#0x0]
080C5CA6: 101c         add r0,r2,#0x0
080C5CA8: 63f06af9     bl 0x08128f80
080C5CAC: 01bc         pop {r0}
080C5CAE: 0047         bx r0
