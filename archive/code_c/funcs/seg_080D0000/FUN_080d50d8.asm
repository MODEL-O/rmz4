; undefined FUN_080d50d8(void)
; entry 0x80d50d8  size 70 bytes

080D50D8: 10b5         push {r4,lr}
080D50DA: 041c         add r4,r0,#0x0
080D50DC: 3430         add r0,#0x34
080D50DE: 1049         ldr r1,[0x080d5120]
080D50E0: 2df7d8fd     bl 0x08002c94
080D50E4: e463         str r4,[r4,#0x3c]
080D50E6: a17a         ldrb r1,[r4,#0xa]
080D50E8: f720         mov r0,#0xf7
080D50EA: 0840         and r0,r1
080D50EC: 0022         mov r2,#0x0
080D50EE: 0121         mov r1,#0x1
080D50F0: 0843         orr r0,r1
080D50F2: 0221         mov r1,#0x2
080D50F4: 0843         orr r0,r1
080D50F6: a072         strb r0,[r4,#0xa]
080D50F8: 201c         add r0,r4,#0x0
080D50FA: 7730         add r0,#0x77
080D50FC: 0270         strb r2,[r0,#0x0]
080D50FE: 2266         str r2,[r4,#0x60]
080D5100: 0849         ldr r1,[0x080d5124]
080D5102: 607a         ldrb r0,[r4,#0x9]
080D5104: 8000         lsl r0,r0,#0x2
080D5106: 4018         add r0,r0,r1
080D5108: 0121         mov r1,#0x1
080D510A: e160         str r1,[r4,#0xc]
080D510C: 0068         ldr r0,[r0,#0x0]
080D510E: 4068         ldr r0,[r0,#0x4]
080D5110: 6061         str r0,[r4,#0x14]
080D5112: 201c         add r0,r4,#0x0
080D5114: 00f008f8     bl 0x080d5128
080D5118: 10bc         pop {r4}
080D511A: 01bc         pop {r0}
080D511C: 0047         bx r0
