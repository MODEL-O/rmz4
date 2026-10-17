; undefined FUN_080292a8(void)
; entry 0x80292a8  size 60 bytes

080292A8: 00b5         push {lr}
080292AA: 021c         add r2,r0,#0x0
080292AC: d168         ldr r1,[r2,#0xc]
080292AE: 4878         ldrb r0,[r1,#0x1]
080292B0: 0028         cmp r0,#0x0
080292B2: 02d0         beq 0x080292ba
080292B4: 0128         cmp r0,#0x1
080292B6: 11d0         beq 0x080292dc
080292B8: 15e0         b 0x080292e6
080292BA: 4888         ldrh r0,[r1,#0x2]
080292BC: d070         strb r0,[r2,#0x3]
080292BE: 0548         ldr r0,[0x080292d4]
080292C0: 0179         ldrb r1,[r0,#0x4]
080292C2: 4020         mov r0,#0x40
080292C4: 0840         and r0,r1
080292C6: 0028         cmp r0,#0x0
080292C8: 0dd1         bne 0x080292e6
080292CA: 034a         ldr r2,[0x080292d8]
080292CC: 1189         ldrh r1,[r2,#0x8]
080292CE: 8020         mov r0,#0x80
080292D0: 0843         orr r0,r1
080292D2: 07e0         b 0x080292e4
080292DC: 034a         ldr r2,[0x080292ec]
080292DE: 1189         ldrh r1,[r2,#0x8]
080292E0: 0348         ldr r0,[0x080292f0]
080292E2: 0840         and r0,r1
080292E4: 1081         strh r0,[r2,#0x8]
080292E6: 0020         mov r0,#0x0
080292E8: 02bc         pop {r1}
080292EA: 0847         bx r1
