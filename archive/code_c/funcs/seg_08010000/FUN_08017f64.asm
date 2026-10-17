; undefined FUN_08017f64(void)
; entry 0x8017f64  size 42 bytes

08017F64: 00b5         push {lr}
08017F66: 031c         add r3,r0,#0x0
08017F68: 987b         ldrb r0,[r3,#0xe]
08017F6A: 0028         cmp r0,#0x0
08017F6C: 0dd1         bne 0x08017f8a
08017F6E: d96d         ldr r1,[r3,#0x5c]
08017F70: 0909         lsr r1,r1,#0x4
08017F72: 4900         lsl r1,r1,#0x1
08017F74: 0648         ldr r0,[0x08017f90]
08017F76: 0918         add r1,r1,r0
08017F78: 0a88         ldrh r2,[r1,#0x0]
08017F7A: 0648         ldr r0,[0x08017f94]
08017F7C: 1040         and r0,r2
08017F7E: 0122         mov r2,#0x1
08017F80: 1043         orr r0,r2
08017F82: 0880         strh r0,[r1,#0x0]
08017F84: 987b         ldrb r0,[r3,#0xe]
08017F86: 0130         add r0,#0x1
08017F88: 9873         strb r0,[r3,#0xe]
08017F8A: 01bc         pop {r0}
08017F8C: 0047         bx r0
