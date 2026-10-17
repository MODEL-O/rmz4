; undefined FUN_08095ee4(void)
; entry 0x8095ee4  size 40 bytes

08095EE4: 00b5         push {lr}
08095EE6: 094a         ldr r2,[0x08095f0c]
08095EE8: 417a         ldrb r1,[r0,#0x9]
08095EEA: 8900         lsl r1,r1,#0x2
08095EEC: 8918         add r1,r1,r2
08095EEE: 0122         mov r2,#0x1
08095EF0: c260         str r2,[r0,#0xc]
08095EF2: 0968         ldr r1,[r1,#0x0]
08095EF4: 4968         ldr r1,[r1,#0x4]
08095EF6: 4161         str r1,[r0,#0x14]
08095EF8: 827a         ldrb r2,[r0,#0xa]
08095EFA: fe21         mov r1,#0xfe
08095EFC: 1140         and r1,r2
08095EFE: 0222         mov r2,#0x2
08095F00: 1143         orr r1,r2
08095F02: 8172         strb r1,[r0,#0xa]
08095F04: 00f05ef8     bl 0x08095fc4
08095F08: 01bc         pop {r0}
08095F0A: 0047         bx r0
