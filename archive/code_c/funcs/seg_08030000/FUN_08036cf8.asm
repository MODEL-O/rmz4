; undefined FUN_08036cf8(void)
; entry 0x8036cf8  size 58 bytes

08036CF8: 30b5         push {r4,r5,lr}
08036CFA: 051c         add r5,r0,#0x0
08036CFC: 0d4c         ldr r4,[0x08036d34]
08036CFE: 211c         add r1,r4,#0x0
08036D00: 03f056fb     bl 0x0803a3b0
08036D04: 281c         add r0,r5,#0x0
08036D06: 211c         add r1,r4,#0x0
08036D08: 03f072fb     bl 0x0803a3f0
08036D0C: 0a49         ldr r1,[0x08036d38]
08036D0E: 6818         add r0,r5,r1
08036D10: 0278         ldrb r2,[r0,#0x0]
08036D12: 022a         cmp r2,#0x2
08036D14: 0ad1         bne 0x08036d2c
08036D16: 0948         ldr r0,[0x08036d3c]
08036D18: 2918         add r1,r5,r0
08036D1A: 0020         mov r0,#0x0
08036D1C: 0a70         strb r2,[r1,#0x0]
08036D1E: 8122         mov r2,#0x81
08036D20: 5200         lsl r2,r2,#0x1
08036D22: a918         add r1,r5,r2
08036D24: 0870         strb r0,[r1,#0x0]
08036D26: 281c         add r0,r5,#0x0
08036D28: 00f00af8     bl 0x08036d40
08036D2C: 30bc         pop {r4,r5}
08036D2E: 01bc         pop {r0}
08036D30: 0047         bx r0
