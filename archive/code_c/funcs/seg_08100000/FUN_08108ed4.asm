; undefined FUN_08108ed4(void)
; entry 0x8108ed4  size 52 bytes

08108ED4: 10b5         push {r4,lr}
08108ED6: 0006         lsl r0,r0,#0x18
08108ED8: 020e         lsr r2,r0,#0x18
08108EDA: 0b49         ldr r1,[0x08108f08]
08108EDC: 0968         ldr r1,[r1,#0x0]
08108EDE: 400e         lsr r0,r0,#0x19
08108EE0: 0c18         add r4,r1,r0
08108EE2: 2378         ldrb r3,[r4,#0x0]
08108EE4: 0120         mov r0,#0x1
08108EE6: 0240         and r2,r0
08108EE8: 9200         lsl r2,r2,#0x2
08108EEA: 191c         add r1,r3,#0x0
08108EEC: 1141         asr r1,r2
08108EEE: 0f20         mov r0,#0xf
08108EF0: 0140         and r1,r0
08108EF2: 0829         cmp r1,#0x8
08108EF4: 05dc         bgt 0x08108f02
08108EF6: 0131         add r1,#0x1
08108EF8: 9140         lsl r1,r2
08108EFA: 9040         lsl r0,r2
08108EFC: 8343         bic r3,r0
08108EFE: 1943         orr r1,r3
08108F00: 2170         strb r1,[r4,#0x0]
08108F02: 10bc         pop {r4}
08108F04: 01bc         pop {r0}
08108F06: 0047         bx r0
