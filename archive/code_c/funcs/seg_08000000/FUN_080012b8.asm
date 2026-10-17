; undefined FUN_080012b8(void)
; entry 0x80012b8  size 40 bytes

080012B8: 4300         lsl r3,r0,#0x1
080012BA: 1818         add r0,r3,r0
080012BC: c000         lsl r0,r0,#0x3
080012BE: 084a         ldr r2,[0x080012e0]
080012C0: 8018         add r0,r0,r2
080012C2: 4160         str r1,[r0,#0x4]
080012C4: 0749         ldr r1,[0x080012e4]
080012C6: 5b18         add r3,r3,r1
080012C8: 0749         ldr r1,[0x080012e8]
080012CA: 5218         add r2,r2,r1
080012CC: 1b88         ldrh r3,[r3,#0x0]
080012CE: d218         add r2,r2,r3
080012D0: 8260         str r2,[r0,#0x8]
080012D2: 0022         mov r2,#0x0
080012D4: 0021         mov r1,#0x0
080012D6: 4180         strh r1,[r0,#0x2]
080012D8: 4270         strb r2,[r0,#0x1]
080012DA: 0221         mov r1,#0x2
080012DC: 0170         strb r1,[r0,#0x0]
080012DE: 7047         bx lr
