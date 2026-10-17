; undefined FUN_080ddd48(void)
; entry 0x80ddd48  size 68 bytes

080DDD48: 10b5         push {r4,lr}
080DDD4A: 041c         add r4,r0,#0x0
080DDD4C: 3ff750f9     bl 0x0801cff0
080DDD50: 606d         ldr r0,[r4,#0x54]
080DDD52: e16d         ldr r1,[r4,#0x5c]
080DDD54: 4018         add r0,r0,r1
080DDD56: 6065         str r0,[r4,#0x54]
080DDD58: a16d         ldr r1,[r4,#0x58]
080DDD5A: 226e         ldr r2,[r4,#0x60]
080DDD5C: 8918         add r1,r1,r2
080DDD5E: a165         str r1,[r4,#0x58]
080DDD60: 4032         add r2,#0x40
080DDD62: 2266         str r2,[r4,#0x60]
080DDD64: 29f78aff     bl 0x08007c7c
080DDD68: 0004         lsl r0,r0,#0x10
080DDD6A: 0028         cmp r0,#0x0
080DDD6C: 0bd0         beq 0x080ddd86
080DDD6E: 0749         ldr r1,[0x080ddd8c]
080DDD70: 607a         ldrb r0,[r4,#0x9]
080DDD72: 8000         lsl r0,r0,#0x2
080DDD74: 4018         add r0,r0,r1
080DDD76: 0221         mov r1,#0x2
080DDD78: e160         str r1,[r4,#0xc]
080DDD7A: 0068         ldr r0,[r0,#0x0]
080DDD7C: 8068         ldr r0,[r0,#0x8]
080DDD7E: 6061         str r0,[r4,#0x14]
080DDD80: 201c         add r0,r4,#0x0
080DDD82: fff7adfc     bl 0x080dd6e0
080DDD86: 10bc         pop {r4}
080DDD88: 01bc         pop {r0}
080DDD8A: 0047         bx r0
