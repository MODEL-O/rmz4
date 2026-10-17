; undefined FUN_08002b7c(void)
; entry 0x8002b7c  size 48 bytes

08002B7C: 10b5         push {r4,lr}
08002B7E: 0c04         lsl r4,r1,#0x10
08002B80: 0a4b         ldr r3,[0x08002bac]
08002B82: 0b49         ldr r1,[0x08002bb0]
08002B84: 0004         lsl r0,r0,#0x10
08002B86: 4013         asr r0,r0,#0xd
08002B88: 4018         add r0,r0,r1
08002B8A: 8288         ldrh r2,[r0,#0x4]
08002B8C: 5100         lsl r1,r2,#0x1
08002B8E: 8918         add r1,r1,r2
08002B90: 8900         lsl r1,r1,#0x2
08002B92: c918         add r1,r1,r3
08002B94: 0a68         ldr r2,[r1,#0x0]
08002B96: 1168         ldr r1,[r2,#0x0]
08002B98: 0068         ldr r0,[r0,#0x0]
08002B9A: 8142         cmp r1,r0
08002B9C: 03d1         bne 0x08002ba6
08002B9E: 210d         lsr r1,r4,#0x14
08002BA0: 101c         add r0,r2,#0x0
08002BA2: 24f1d3fe     bl 0x0812794c
08002BA6: 10bc         pop {r4}
08002BA8: 01bc         pop {r0}
08002BAA: 0047         bx r0
