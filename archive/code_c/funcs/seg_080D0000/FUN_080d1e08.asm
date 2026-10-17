; undefined FUN_080d1e08(void)
; entry 0x80d1e08  size 72 bytes

080D1E08: 10b5         push {r4,lr}
080D1E0A: 041c         add r4,r0,#0x0
080D1E0C: 4af7d6ff     bl 0x0801cdbc
080D1E10: a17a         ldrb r1,[r4,#0xa]
080D1E12: 0120         mov r0,#0x1
080D1E14: 0843         orr r0,r1
080D1E16: 0221         mov r1,#0x2
080D1E18: 0843         orr r0,r1
080D1E1A: a072         strb r0,[r4,#0xa]
080D1E1C: 201c         add r0,r4,#0x0
080D1E1E: 0b21         mov r1,#0xb
080D1E20: 4bf76ef8     bl 0x0801cf00
080D1E24: 201c         add r0,r4,#0x0
080D1E26: 5030         add r0,#0x50
080D1E28: 8021         mov r1,#0x80
080D1E2A: 8900         lsl r1,r1,#0x2
080D1E2C: 0180         strh r1,[r0,#0x0]
080D1E2E: 0230         add r0,#0x2
080D1E30: 0180         strh r1,[r0,#0x0]
080D1E32: 0749         ldr r1,[0x080d1e50]
080D1E34: 607a         ldrb r0,[r4,#0x9]
080D1E36: 8000         lsl r0,r0,#0x2
080D1E38: 4018         add r0,r0,r1
080D1E3A: 0121         mov r1,#0x1
080D1E3C: e160         str r1,[r4,#0xc]
080D1E3E: 0068         ldr r0,[r0,#0x0]
080D1E40: 4068         ldr r0,[r0,#0x4]
080D1E42: 6061         str r0,[r4,#0x14]
080D1E44: 201c         add r0,r4,#0x0
080D1E46: fff7c3ff     bl 0x080d1dd0
080D1E4A: 10bc         pop {r4}
080D1E4C: 01bc         pop {r0}
080D1E4E: 0047         bx r0
