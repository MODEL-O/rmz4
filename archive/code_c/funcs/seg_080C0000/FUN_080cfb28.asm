; undefined FUN_080cfb28(void)
; entry 0x80cfb28  size 68 bytes

080CFB28: 10b5         push {r4,lr}
080CFB2A: 041c         add r4,r0,#0x0
080CFB2C: c520         mov r0,#0xc5
080CFB2E: 32f753fd     bl 0x080025d8
080CFB32: 201c         add r0,r4,#0x0
080CFB34: b430         add r0,#0xb4
080CFB36: 0078         ldrb r0,[r0,#0x0]
080CFB38: 0028         cmp r0,#0x0
080CFB3A: 0fd0         beq 0x080cfb5c
080CFB3C: 0649         ldr r1,[0x080cfb58]
080CFB3E: 607a         ldrb r0,[r4,#0x9]
080CFB40: 8000         lsl r0,r0,#0x2
080CFB42: 4018         add r0,r0,r1
080CFB44: 0221         mov r1,#0x2
080CFB46: e160         str r1,[r4,#0xc]
080CFB48: 0068         ldr r0,[r0,#0x0]
080CFB4A: 8068         ldr r0,[r0,#0x8]
080CFB4C: 6061         str r0,[r4,#0x14]
080CFB4E: 201c         add r0,r4,#0x0
080CFB50: 00f07ef8     bl 0x080cfc50
080CFB54: 0ae0         b 0x080cfb6c
080CFB5C: 0548         ldr r0,[0x080cfb74]
080CFB5E: 617b         ldrb r1,[r4,#0xd]
080CFB60: 8900         lsl r1,r1,#0x2
080CFB62: 0918         add r1,r1,r0
080CFB64: 0968         ldr r1,[r1,#0x0]
080CFB66: 201c         add r0,r4,#0x0
080CFB68: 59f00afa     bl 0x08128f80
080CFB6C: 10bc         pop {r4}
080CFB6E: 01bc         pop {r0}
080CFB70: 0047         bx r0
