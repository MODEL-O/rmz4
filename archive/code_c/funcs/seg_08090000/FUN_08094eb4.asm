; undefined FUN_08094eb4(void)
; entry 0x8094eb4  size 70 bytes

08094EB4: 70b5         push {r4,r5,r6,lr}
08094EB6: 0c4b         ldr r3,[0x08094ee8]
08094EB8: 1940         and r1,r3
08094EBA: 8020         mov r0,#0x80
08094EBC: 0001         lsl r0,r0,#0x4
08094EBE: 0c1c         add r4,r1,#0x0
08094EC0: 0443         orr r4,r0
08094EC2: 1a40         and r2,r3
08094EC4: 551e         sub r5,r2,#0x1
08094EC6: 0026         mov r6,#0x0
08094EC8: 201c         add r0,r4,#0x0
08094ECA: 291c         add r1,r5,#0x0
08094ECC: 72f7a8f8     bl 0x08007020
08094ED0: 0004         lsl r0,r0,#0x10
08094ED2: 000c         lsr r0,r0,#0x10
08094ED4: 0f21         mov r1,#0xf
08094ED6: 0840         and r0,r1
08094ED8: 0238         sub r0,#0x2
08094EDA: 0004         lsl r0,r0,#0x10
08094EDC: 000c         lsr r0,r0,#0x10
08094EDE: 0b28         cmp r0,#0xb
08094EE0: 04d8         bhi 0x08094eec
08094EE2: 0120         mov r0,#0x1
08094EE4: 09e0         b 0x08094efa
08094EEC: 0136         add r6,#0x1
08094EEE: 8020         mov r0,#0x80
08094EF0: 4001         lsl r0,r0,#0x5
08094EF2: 2d18         add r5,r5,r0
08094EF4: 022e         cmp r6,#0x2
08094EF6: e7dd         ble 0x08094ec8
08094EF8: 0020         mov r0,#0x0
08094EFA: 70bc         pop {r4,r5,r6}
08094EFC: 02bc         pop {r1}
08094EFE: 0847         bx r1
