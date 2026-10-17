; undefined FUN_08019ee4(void)
; entry 0x8019ee4  size 28 bytes

08019EE4: 10b5         push {r4,lr}
08019EE6: 0648         ldr r0,[0x08019f00]
08019EE8: 0649         ldr r1,[0x08019f04]
08019EEA: 4418         add r4,r0,r1
08019EEC: 2068         ldr r0,[r4,#0x0]
08019EEE: 0028         cmp r0,#0x0
08019EF0: 03d1         bne 0x08019efa
08019EF2: 0020         mov r0,#0x0
08019EF4: e9f09cfc     bl 0x08103830
08019EF8: 2060         str r0,[r4,#0x0]
08019EFA: 10bc         pop {r4}
08019EFC: 01bc         pop {r0}
08019EFE: 0047         bx r0
