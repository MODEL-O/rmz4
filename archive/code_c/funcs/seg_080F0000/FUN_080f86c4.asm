; undefined FUN_080f86c4(void)
; entry 0x80f86c4  size 48 bytes

080F86C4: 30b5         push {r4,r5,lr}
080F86C6: 051c         add r5,r0,#0x0
080F86C8: 0c1c         add r4,r1,#0x0
080F86CA: 00f02ff8     bl 0x080f872c
080F86CE: 0006         lsl r0,r0,#0x18
080F86D0: 000e         lsr r0,r0,#0x18
080F86D2: 0c28         cmp r0,#0xc
080F86D4: 03d0         beq 0x080f86de
080F86D6: 2078         ldrb r0,[r4,#0x0]
080F86D8: 0121         mov r1,#0x1
080F86DA: 4840         eor r0,r1
080F86DC: 2070         strb r0,[r4,#0x0]
080F86DE: 6968         ldr r1,[r5,#0x4]
080F86E0: 0448         ldr r0,[0x080f86f4]
080F86E2: 0918         add r1,r1,r0
080F86E4: 0020         mov r0,#0x0
080F86E6: 2056         ldrsb r0,[r4,r0]
080F86E8: 4002         lsl r0,r0,#0x9
080F86EA: 0918         add r1,r1,r0
080F86EC: 6960         str r1,[r5,#0x4]
080F86EE: 30bc         pop {r4,r5}
080F86F0: 01bc         pop {r0}
080F86F2: 0047         bx r0
