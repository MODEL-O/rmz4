; undefined FUN_08062da8(void)
; entry 0x8062da8  size 20 bytes

08062DA8: 00b5         push {lr}
08062DAA: 044a         ldr r2,[0x08062dbc]
08062DAC: 817b         ldrb r1,[r0,#0xe]
08062DAE: 8900         lsl r1,r1,#0x2
08062DB0: 8918         add r1,r1,r2
08062DB2: 0968         ldr r1,[r1,#0x0]
08062DB4: c6f0e4f8     bl 0x08128f80
08062DB8: 01bc         pop {r0}
08062DBA: 0047         bx r0
