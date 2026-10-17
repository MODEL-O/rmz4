; undefined FUN_080c7d40(void)
; entry 0x80c7d40  size 66 bytes

080C7D40: 10b5         push {r4,lr}
080C7D42: 041c         add r4,r0,#0x0
080C7D44: 211c         add r1,r4,#0x0
080C7D46: 5431         add r1,#0x54
080C7D48: 0220         mov r0,#0x2
080C7D4A: 08f09dff     bl 0x080d0c88
080C7D4E: 201c         add r0,r4,#0x0
080C7D50: 8c30         add r0,#0x8c
080C7D52: 0021         mov r1,#0x0
080C7D54: 0160         str r1,[r0,#0x0]
080C7D56: 0430         add r0,#0x4
080C7D58: 0160         str r1,[r0,#0x0]
080C7D5A: 0430         add r0,#0x4
080C7D5C: 0170         strb r1,[r0,#0x0]
080C7D5E: a17a         ldrb r1,[r4,#0xa]
080C7D60: fb20         mov r0,#0xfb
080C7D62: 0840         and r0,r1
080C7D64: fe21         mov r1,#0xfe
080C7D66: 0840         and r0,r1
080C7D68: a072         strb r0,[r4,#0xa]
080C7D6A: 0649         ldr r1,[0x080c7d84]
080C7D6C: 607a         ldrb r0,[r4,#0x9]
080C7D6E: 8000         lsl r0,r0,#0x2
080C7D70: 4018         add r0,r0,r1
080C7D72: 0421         mov r1,#0x4
080C7D74: e160         str r1,[r4,#0xc]
080C7D76: 0068         ldr r0,[r0,#0x0]
080C7D78: 0069         ldr r0,[r0,#0x10]
080C7D7A: 6061         str r0,[r4,#0x14]
080C7D7C: 10bc         pop {r4}
080C7D7E: 01bc         pop {r0}
080C7D80: 0047         bx r0
