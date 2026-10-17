; undefined FUN_08032c18(void)
; entry 0x8032c18  size 68 bytes

08032C18: 10b5         push {r4,lr}
08032C1A: 041c         add r4,r0,#0x0
08032C1C: 05f014ff     bl 0x08038a48
08032C20: 0006         lsl r0,r0,#0x18
08032C22: 010e         lsr r1,r0,#0x18
08032C24: 0029         cmp r1,#0x0
08032C26: 0bd0         beq 0x08032c40
08032C28: 0448         ldr r0,[0x08032c3c]
08032C2A: a17b         ldrb r1,[r4,#0xe]
08032C2C: 8900         lsl r1,r1,#0x2
08032C2E: 0918         add r1,r1,r0
08032C30: 0968         ldr r1,[r1,#0x0]
08032C32: 201c         add r0,r4,#0x0
08032C34: f6f0a4f9     bl 0x08128f80
08032C38: 08e0         b 0x08032c4c
08032C40: 0120         mov r0,#0x1
08032C42: 6073         strb r0,[r4,#0xd]
08032C44: 0220         mov r0,#0x2
08032C46: a073         strb r0,[r4,#0xe]
08032C48: e173         strb r1,[r4,#0xf]
08032C4A: 2166         str r1,[r4,#0x60]
08032C4C: a120         mov r0,#0xa1
08032C4E: 4000         lsl r0,r0,#0x1
08032C50: 2218         add r2,r4,r0
08032C52: 1178         ldrb r1,[r2,#0x0]
08032C54: 4120         mov r0,#0x41
08032C56: 4042         rsb r0,r0
08032C58: 0840         and r0,r1
08032C5A: 1070         strb r0,[r2,#0x0]
08032C5C: 10bc         pop {r4}
08032C5E: 01bc         pop {r0}
08032C60: 0047         bx r0
