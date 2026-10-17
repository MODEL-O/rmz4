; undefined FUN_080c87b0(void)
; entry 0x80c87b0  size 30 bytes

080C87B0: 00b5         push {lr}
080C87B2: 021c         add r2,r0,#0x0
080C87B4: 0648         ldr r0,[0x080c87d0]
080C87B6: 011c         add r1,r0,#0x0
080C87B8: 2631         add r1,#0x26
080C87BA: 0878         ldrb r0,[r1,#0x0]
080C87BC: 0028         cmp r0,#0x0
080C87BE: 01d0         beq 0x080c87c4
080C87C0: ff30         add r0,#0xff
080C87C2: 0870         strb r0,[r1,#0x0]
080C87C4: 101c         add r0,r2,#0x0
080C87C6: f4f717fe     bl 0x080bd3f8
080C87CA: 01bc         pop {r0}
080C87CC: 0047         bx r0
