; undefined FUN_080c089c(void)
; entry 0x80c089c  size 64 bytes

080C089C: 10b5         push {r4,lr}
080C089E: 81b0         sub sp,#0x4
080C08A0: 041c         add r4,r0,#0x0
080C08A2: 0e49         ldr r1,[0x080c08dc]
080C08A4: 6846         mov r0,sp
080C08A6: 0222         mov r2,#0x2
080C08A8: 68f0d6fc     bl 0x08129258
080C08AC: a26a         ldr r2,[r4,#0x28]
080C08AE: 617c         ldrb r1,[r4,#0x11]
080C08B0: e07b         ldrb r0,[r4,#0xf]
080C08B2: 0028         cmp r0,#0x0
080C08B4: 0ed1         bne 0x080c08d4
080C08B6: b432         add r2,#0xb4
080C08B8: 6944         add r1,sp
080C08BA: 0120         mov r0,#0x1
080C08BC: 0978         ldrb r1,[r1,#0x0]
080C08BE: 8840         lsl r0,r1
080C08C0: 1188         ldrh r1,[r2,#0x0]
080C08C2: 0843         orr r0,r1
080C08C4: 1080         strh r0,[r2,#0x0]
080C08C6: a17a         ldrb r1,[r4,#0xa]
080C08C8: fe20         mov r0,#0xfe
080C08CA: 0840         and r0,r1
080C08CC: a072         strb r0,[r4,#0xa]
080C08CE: e07b         ldrb r0,[r4,#0xf]
080C08D0: 0130         add r0,#0x1
080C08D2: e073         strb r0,[r4,#0xf]
080C08D4: 01b0         add sp,#0x4
080C08D6: 10bc         pop {r4}
080C08D8: 01bc         pop {r0}
080C08DA: 0047         bx r0
