; undefined FUN_080f86f8(void)
; entry 0x80f86f8  size 48 bytes

080F86F8: 30b5         push {r4,r5,lr}
080F86FA: 051c         add r5,r0,#0x0
080F86FC: 0c1c         add r4,r1,#0x0
080F86FE: 00f015f8     bl 0x080f872c
080F8702: 0006         lsl r0,r0,#0x18
080F8704: 000e         lsr r0,r0,#0x18
080F8706: 0d28         cmp r0,#0xd
080F8708: 03d0         beq 0x080f8712
080F870A: 2078         ldrb r0,[r4,#0x0]
080F870C: 0121         mov r1,#0x1
080F870E: 4840         eor r0,r1
080F8710: 2070         strb r0,[r4,#0x0]
080F8712: 2968         ldr r1,[r5,#0x0]
080F8714: 0448         ldr r0,[0x080f8728]
080F8716: 0918         add r1,r1,r0
080F8718: 0020         mov r0,#0x0
080F871A: 2056         ldrsb r0,[r4,r0]
080F871C: 4002         lsl r0,r0,#0x9
080F871E: 0918         add r1,r1,r0
080F8720: 2960         str r1,[r5,#0x0]
080F8722: 30bc         pop {r4,r5}
080F8724: 01bc         pop {r0}
080F8726: 0047         bx r0
