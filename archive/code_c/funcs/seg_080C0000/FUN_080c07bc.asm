; undefined FUN_080c07bc(void)
; entry 0x80c07bc  size 20 bytes

080C07BC: 00b5         push {lr}
080C07BE: 044a         ldr r2,[0x080c07d0]
080C07C0: 817b         ldrb r1,[r0,#0xe]
080C07C2: 8900         lsl r1,r1,#0x2
080C07C4: 8918         add r1,r1,r2
080C07C6: 0968         ldr r1,[r1,#0x0]
080C07C8: 68f0dafb     bl 0x08128f80
080C07CC: 01bc         pop {r0}
080C07CE: 0047         bx r0
