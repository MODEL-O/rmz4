; undefined FUN_080824bc(void)
; entry 0x80824bc  size 20 bytes

080824BC: 00b5         push {lr}
080824BE: 044a         ldr r2,[0x080824d0]
080824C0: 417b         ldrb r1,[r0,#0xd]
080824C2: 8900         lsl r1,r1,#0x2
080824C4: 8918         add r1,r1,r2
080824C6: 0968         ldr r1,[r1,#0x0]
080824C8: a6f05afd     bl 0x08128f80
080824CC: 01bc         pop {r0}
080824CE: 0047         bx r0
