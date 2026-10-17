; undefined FUN_08004f50(void)
; entry 0x8004f50  size 48 bytes

08004F50: 70b5         push {r4,r5,r6,lr}
08004F52: 061c         add r6,r0,#0x0
08004F54: 1204         lsl r2,r2,#0x10
08004F56: 0023         mov r3,#0x0
08004F58: 520b         lsr r2,r2,#0xd
08004F5A: 5218         add r2,r2,r1
08004F5C: 1568         ldr r5,[r2,#0x0]
08004F5E: 5468         ldr r4,[r2,#0x4]
08004F60: d801         lsl r0,r3,#0x7
08004F62: 5a1c         add r2,r3,#0x1
08004F64: 8019         add r0,r0,r6
08004F66: 0f21         mov r1,#0xf
08004F68: 0560         str r5,[r0,#0x0]
08004F6A: 0464         str r4,[r0,#0x40]
08004F6C: 0430         add r0,#0x4
08004F6E: 0139         sub r1,#0x1
08004F70: 0029         cmp r1,#0x0
08004F72: f9da         bge 0x08004f68
08004F74: 131c         add r3,r2,#0x0
08004F76: 0f2b         cmp r3,#0xf
08004F78: f2dd         ble 0x08004f60
08004F7A: 70bc         pop {r4,r5,r6}
08004F7C: 01bc         pop {r0}
08004F7E: 0047         bx r0
