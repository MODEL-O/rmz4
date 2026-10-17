; undefined FUN_08070df0(void)
; entry 0x8070df0  size 42 bytes

08070DF0: 00b5         push {lr}
08070DF2: 011c         add r1,r0,#0x0
08070DF4: b431         add r1,#0xb4
08070DF6: 0968         ldr r1,[r1,#0x0]
08070DF8: b431         add r1,#0xb4
08070DFA: 0023         mov r3,#0x0
08070DFC: 0122         mov r2,#0x1
08070DFE: 0a70         strb r2,[r1,#0x0]
08070E00: 817b         ldrb r1,[r0,#0xe]
08070E02: 0131         add r1,#0x1
08070E04: 8173         strb r1,[r0,#0xe]
08070E06: c373         strb r3,[r0,#0xf]
08070E08: 044a         ldr r2,[0x08070e1c]
08070E0A: 817b         ldrb r1,[r0,#0xe]
08070E0C: 8900         lsl r1,r1,#0x2
08070E0E: 8918         add r1,r1,r2
08070E10: 0968         ldr r1,[r1,#0x0]
08070E12: b8f0b5f8     bl 0x08128f80
08070E16: 01bc         pop {r0}
08070E18: 0047         bx r0
