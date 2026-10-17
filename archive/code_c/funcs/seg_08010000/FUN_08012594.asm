; undefined FUN_08012594(void)
; entry 0x8012594  size 46 bytes

08012594: 00b5         push {lr}
08012596: 021c         add r2,r0,#0x0
08012598: 907b         ldrb r0,[r2,#0xe]
0801259A: 0028         cmp r0,#0x0
0801259C: 12d1         bne 0x080125c4
0801259E: 516b         ldr r1,[r2,#0x34]
080125A0: 0248         ldr r0,[0x080125ac]
080125A2: 8142         cmp r1,r0
080125A4: 04dc         bgt 0x080125b0
080125A6: 7820         mov r0,#0x78
080125A8: 03e0         b 0x080125b2
080125B0: f020         mov r0,#0xf0
080125B2: 1065         str r0,[r2,#0x50]
080125B4: 8020         mov r0,#0x80
080125B6: 4000         lsl r0,r0,#0x1
080125B8: 5064         str r0,[r2,#0x44]
080125BA: c020         mov r0,#0xc0
080125BC: 9064         str r0,[r2,#0x48]
080125BE: 907b         ldrb r0,[r2,#0xe]
080125C0: 0130         add r0,#0x1
080125C2: 9073         strb r0,[r2,#0xe]
080125C4: 01bc         pop {r0}
080125C6: 0047         bx r0
