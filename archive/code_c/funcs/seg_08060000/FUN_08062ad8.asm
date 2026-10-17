; undefined FUN_08062ad8(void)
; entry 0x8062ad8  size 20 bytes

08062AD8: 00b5         push {lr}
08062ADA: 044a         ldr r2,[0x08062aec]
08062ADC: 817b         ldrb r1,[r0,#0xe]
08062ADE: 8900         lsl r1,r1,#0x2
08062AE0: 8918         add r1,r1,r2
08062AE2: 0968         ldr r1,[r1,#0x0]
08062AE4: c6f04cfa     bl 0x08128f80
08062AE8: 01bc         pop {r0}
08062AEA: 0047         bx r0
