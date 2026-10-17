; undefined FUN_080b4e18(void)
; entry 0x80b4e18  size 56 bytes

080B4E18: 00b5         push {lr}
080B4E1A: 031c         add r3,r0,#0x0
080B4E1C: da6a         ldr r2,[r3,#0x2c]
080B4E1E: 002a         cmp r2,#0x0
080B4E20: 11d0         beq 0x080b4e46
080B4E22: 107b         ldrb r0,[r2,#0xc]
080B4E24: 0128         cmp r0,#0x1
080B4E26: 0ed8         bhi 0x080b4e46
080B4E28: 917a         ldrb r1,[r2,#0xa]
080B4E2A: fe20         mov r0,#0xfe
080B4E2C: 0840         and r0,r1
080B4E2E: fd21         mov r1,#0xfd
080B4E30: 0840         and r0,r1
080B4E32: 9072         strb r0,[r2,#0xa]
080B4E34: 0649         ldr r1,[0x080b4e50]
080B4E36: 507a         ldrb r0,[r2,#0x9]
080B4E38: 8000         lsl r0,r0,#0x2
080B4E3A: 4018         add r0,r0,r1
080B4E3C: 0321         mov r1,#0x3
080B4E3E: d160         str r1,[r2,#0xc]
080B4E40: 0068         ldr r0,[r0,#0x0]
080B4E42: c068         ldr r0,[r0,#0xc]
080B4E44: 5061         str r0,[r2,#0x14]
080B4E46: 181c         add r0,r3,#0x0
080B4E48: caf750fd     bl 0x0807f8ec
080B4E4C: 01bc         pop {r0}
080B4E4E: 0047         bx r0
