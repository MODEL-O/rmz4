; undefined FUN_08096d3c(void)
; entry 0x8096d3c  size 70 bytes

08096D3C: 10b5         push {r4,lr}
08096D3E: 011c         add r1,r0,#0x0
08096D40: cc6a         ldr r4,[r1,#0x2c]
08096D42: 607b         ldrb r0,[r4,#0xd]
08096D44: 0028         cmp r0,#0x0
08096D46: 19d1         bne 0x08096d7c
08096D48: 4869         ldr r0,[r1,#0x14]
08096D4A: 8021         mov r1,#0x80
08096D4C: 8902         lsl r1,r1,#0xa
08096D4E: 0840         and r0,r1
08096D50: 0028         cmp r0,#0x0
08096D52: 13d0         beq 0x08096d7c
08096D54: 0b48         ldr r0,[0x08096d84]
08096D56: 0068         ldr r0,[r0,#0x0]
08096D58: 0521         mov r1,#0x5
08096D5A: 0122         mov r2,#0x1
08096D5C: a3f70cfc     bl 0x0803a578
08096D60: 0006         lsl r0,r0,#0x18
08096D62: 0028         cmp r0,#0x0
08096D64: 0ad0         beq 0x08096d7c
08096D66: 0120         mov r0,#0x1
08096D68: e074         strb r0,[r4,#0x13]
08096D6A: 0749         ldr r1,[0x08096d88]
08096D6C: 607a         ldrb r0,[r4,#0x9]
08096D6E: 8000         lsl r0,r0,#0x2
08096D70: 4018         add r0,r0,r1
08096D72: 0221         mov r1,#0x2
08096D74: e160         str r1,[r4,#0xc]
08096D76: 0068         ldr r0,[r0,#0x0]
08096D78: 8068         ldr r0,[r0,#0x8]
08096D7A: 6061         str r0,[r4,#0x14]
08096D7C: 10bc         pop {r4}
08096D7E: 01bc         pop {r0}
08096D80: 0047         bx r0
