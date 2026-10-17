; undefined FUN_080ddd0c(void)
; entry 0x80ddd0c  size 56 bytes

080DDD0C: 10b5         push {r4,lr}
080DDD0E: 041c         add r4,r0,#0x0
080DDD10: 3ff76ef9     bl 0x0801cff0
080DDD14: 606d         ldr r0,[r4,#0x54]
080DDD16: e16d         ldr r1,[r4,#0x5c]
080DDD18: 4018         add r0,r0,r1
080DDD1A: 6065         str r0,[r4,#0x54]
080DDD1C: 606e         ldr r0,[r4,#0x64]
080DDD1E: 0918         add r1,r1,r0
080DDD20: e165         str r1,[r4,#0x5c]
080DDD22: 0029         cmp r1,#0x0
080DDD24: 0bd1         bne 0x080ddd3e
080DDD26: 0749         ldr r1,[0x080ddd44]
080DDD28: 607a         ldrb r0,[r4,#0x9]
080DDD2A: 8000         lsl r0,r0,#0x2
080DDD2C: 4018         add r0,r0,r1
080DDD2E: 0221         mov r1,#0x2
080DDD30: e160         str r1,[r4,#0xc]
080DDD32: 0068         ldr r0,[r0,#0x0]
080DDD34: 8068         ldr r0,[r0,#0x8]
080DDD36: 6061         str r0,[r4,#0x14]
080DDD38: 201c         add r0,r4,#0x0
080DDD3A: fff7d1fc     bl 0x080dd6e0
080DDD3E: 10bc         pop {r4}
080DDD40: 01bc         pop {r0}
080DDD42: 0047         bx r0
