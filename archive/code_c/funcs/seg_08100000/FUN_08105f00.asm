; undefined FUN_08105f00(void)
; entry 0x8105f00  size 26 bytes

08105F00: 10b5         push {r4,lr}
08105F02: 041c         add r4,r0,#0x0
08105F04: 607b         ldrb r0,[r4,#0xd]
08105F06: 0428         cmp r0,#0x4
08105F08: 72d8         bhi 0x08105ff0
08105F0A: 8000         lsl r0,r0,#0x2
08105F0C: 0149         ldr r1,[0x08105f14]
08105F0E: 4018         add r0,r0,r1
08105F10: 0068         ldr r0,[r0,#0x0]
08105F12: 8746         mov pc,r0
08105FF0: 10bc         pop {r4}
08105FF2: 01bc         pop {r0}
08105FF4: 0047         bx r0
