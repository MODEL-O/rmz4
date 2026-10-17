; undefined FUN_081278b4(void)
; entry 0x81278b4  size 42 bytes

081278B4: 00b5         push {lr}
081278B6: 0004         lsl r0,r0,#0x10
081278B8: 094a         ldr r2,[0x081278e0]
081278BA: 0a49         ldr r1,[0x081278e4]
081278BC: 400b         lsr r0,r0,#0xd
081278BE: 4018         add r0,r0,r1
081278C0: 8388         ldrh r3,[r0,#0x4]
081278C2: 5900         lsl r1,r3,#0x1
081278C4: c918         add r1,r1,r3
081278C6: 8900         lsl r1,r1,#0x2
081278C8: 8918         add r1,r1,r2
081278CA: 0a68         ldr r2,[r1,#0x0]
081278CC: 1168         ldr r1,[r2,#0x0]
081278CE: 0068         ldr r0,[r0,#0x0]
081278D0: 8142         cmp r1,r0
081278D2: 02d1         bne 0x081278da
081278D4: 101c         add r0,r2,#0x0
081278D6: fff70dff     bl 0x081276f4
081278DA: 01bc         pop {r0}
081278DC: 0047         bx r0
