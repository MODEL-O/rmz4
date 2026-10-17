; undefined FUN_08072a6c(void)
; entry 0x8072a6c  size 30 bytes

08072A6C: 10b5         push {r4,lr}
08072A6E: 041c         add r4,r0,#0x0
08072A70: 01f0acf8     bl 0x08073bcc
08072A74: 0549         ldr r1,[0x08072a8c]
08072A76: 607b         ldrb r0,[r4,#0xd]
08072A78: 8000         lsl r0,r0,#0x2
08072A7A: 4018         add r0,r0,r1
08072A7C: 0168         ldr r1,[r0,#0x0]
08072A7E: 201c         add r0,r4,#0x0
08072A80: b6f07efa     bl 0x08128f80
08072A84: 10bc         pop {r4}
08072A86: 01bc         pop {r0}
08072A88: 0047         bx r0
