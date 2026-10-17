; undefined FUN_080bb8ac(void)
; entry 0x80bb8ac  size 20 bytes

080BB8AC: 00b5         push {lr}
080BB8AE: 044a         ldr r2,[0x080bb8c0]
080BB8B0: 417b         ldrb r1,[r0,#0xd]
080BB8B2: 8900         lsl r1,r1,#0x2
080BB8B4: 8918         add r1,r1,r2
080BB8B6: 0968         ldr r1,[r1,#0x0]
080BB8B8: 6df062fb     bl 0x08128f80
080BB8BC: 01bc         pop {r0}
080BB8BE: 0047         bx r0
