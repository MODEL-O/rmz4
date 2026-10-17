; undefined FUN_080c50ac(void)
; entry 0x80c50ac  size 20 bytes

080C50AC: 00b5         push {lr}
080C50AE: 044a         ldr r2,[0x080c50c0]
080C50B0: 417b         ldrb r1,[r0,#0xd]
080C50B2: 8900         lsl r1,r1,#0x2
080C50B4: 8918         add r1,r1,r2
080C50B6: 0968         ldr r1,[r1,#0x0]
080C50B8: 63f062ff     bl 0x08128f80
080C50BC: 01bc         pop {r0}
080C50BE: 0047         bx r0
