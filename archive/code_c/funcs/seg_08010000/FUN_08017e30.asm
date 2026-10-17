; undefined FUN_08017e30(void)
; entry 0x8017e30  size 42 bytes

08017E30: 00b5         push {lr}
08017E32: 031c         add r3,r0,#0x0
08017E34: 987b         ldrb r0,[r3,#0xe]
08017E36: 0028         cmp r0,#0x0
08017E38: 0dd1         bne 0x08017e56
08017E3A: d96d         ldr r1,[r3,#0x5c]
08017E3C: 0909         lsr r1,r1,#0x4
08017E3E: 4900         lsl r1,r1,#0x1
08017E40: 0648         ldr r0,[0x08017e5c]
08017E42: 0918         add r1,r1,r0
08017E44: 0a88         ldrh r2,[r1,#0x0]
08017E46: 0648         ldr r0,[0x08017e60]
08017E48: 1040         and r0,r2
08017E4A: 0322         mov r2,#0x3
08017E4C: 1043         orr r0,r2
08017E4E: 0880         strh r0,[r1,#0x0]
08017E50: 987b         ldrb r0,[r3,#0xe]
08017E52: 0130         add r0,#0x1
08017E54: 9873         strb r0,[r3,#0xe]
08017E56: 01bc         pop {r0}
08017E58: 0047         bx r0
