; undefined FUN_080bfc18(void)
; entry 0x80bfc18  size 38 bytes

080BFC18: 00b5         push {lr}
080BFC1A: 021c         add r2,r0,#0x0
080BFC1C: 111c         add r1,r2,#0x0
080BFC1E: bc31         add r1,#0xbc
080BFC20: 0868         ldr r0,[r1,#0x0]
080BFC22: 0028         cmp r0,#0x0
080BFC24: 01d0         beq 0x080bfc2a
080BFC26: 0138         sub r0,#0x1
080BFC28: 0860         str r0,[r1,#0x0]
080BFC2A: 0548         ldr r0,[0x080bfc40]
080BFC2C: 517b         ldrb r1,[r2,#0xd]
080BFC2E: 8900         lsl r1,r1,#0x2
080BFC30: 0918         add r1,r1,r0
080BFC32: 0968         ldr r1,[r1,#0x0]
080BFC34: 101c         add r0,r2,#0x0
080BFC36: 69f0a3f9     bl 0x08128f80
080BFC3A: 01bc         pop {r0}
080BFC3C: 0047         bx r0
