; undefined FUN_080cfa0c(void)
; entry 0x80cfa0c  size 46 bytes

080CFA0C: 10b5         push {r4,lr}
080CFA0E: 041c         add r4,r0,#0x0
080CFA10: 5430         add r0,#0x54
080CFA12: 8021         mov r1,#0x80
080CFA14: 4900         lsl r1,r1,#0x1
080CFA16: a27a         ldrb r2,[r4,#0xa]
080CFA18: 1209         lsr r2,r2,#0x4
080CFA1A: 0123         mov r3,#0x1
080CFA1C: 1a40         and r2,r3
080CFA1E: 18f015f8     bl 0x080e7a4c
080CFA22: 0649         ldr r1,[0x080cfa3c]
080CFA24: 607a         ldrb r0,[r4,#0x9]
080CFA26: 8000         lsl r0,r0,#0x2
080CFA28: 4018         add r0,r0,r1
080CFA2A: 0421         mov r1,#0x4
080CFA2C: e160         str r1,[r4,#0xc]
080CFA2E: 0068         ldr r0,[r0,#0x0]
080CFA30: 0069         ldr r0,[r0,#0x10]
080CFA32: 6061         str r0,[r4,#0x14]
080CFA34: 10bc         pop {r4}
080CFA36: 01bc         pop {r0}
080CFA38: 0047         bx r0
