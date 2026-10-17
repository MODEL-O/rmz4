; undefined FUN_080c1f48(void)
; entry 0x80c1f48  size 68 bytes

080C1F48: 70b5         push {r4,r5,r6,lr}
080C1F4A: 041c         add r4,r0,#0x0
080C1F4C: 0f49         ldr r1,[0x080c1f8c]
080C1F4E: 607a         ldrb r0,[r4,#0x9]
080C1F50: 8000         lsl r0,r0,#0x2
080C1F52: 4018         add r0,r0,r1
080C1F54: 0121         mov r1,#0x1
080C1F56: e160         str r1,[r4,#0xc]
080C1F58: 0068         ldr r0,[r0,#0x0]
080C1F5A: 4068         ldr r0,[r0,#0x4]
080C1F5C: 6061         str r0,[r4,#0x14]
080C1F5E: a17a         ldrb r1,[r4,#0xa]
080C1F60: 0420         mov r0,#0x4
080C1F62: 0026         mov r6,#0x0
080C1F64: 0843         orr r0,r1
080C1F66: a072         strb r0,[r4,#0xa]
080C1F68: 251c         add r5,r4,#0x0
080C1F6A: 7435         add r5,#0x74
080C1F6C: 0849         ldr r1,[0x080c1f90]
080C1F6E: 221c         add r2,r4,#0x0
080C1F70: 5432         add r2,#0x54
080C1F72: 281c         add r0,r5,#0x0
080C1F74: 4023         mov r3,#0x40
080C1F76: 43f7f3fb     bl 0x08005760
080C1F7A: ec62         str r4,[r5,#0x2c]
080C1F7C: 6e62         str r6,[r5,#0x24]
080C1F7E: a674         strb r6,[r4,#0x12]
080C1F80: 201c         add r0,r4,#0x0
080C1F82: fff705fe     bl 0x080c1b90
080C1F86: 70bc         pop {r4,r5,r6}
080C1F88: 01bc         pop {r0}
080C1F8A: 0047         bx r0
