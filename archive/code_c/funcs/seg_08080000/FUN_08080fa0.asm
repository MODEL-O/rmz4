; undefined FUN_08080fa0(void)
; entry 0x8080fa0  size 20 bytes

08080FA0: 00b5         push {lr}
08080FA2: 044a         ldr r2,[0x08080fb4]
08080FA4: 417b         ldrb r1,[r0,#0xd]
08080FA6: 8900         lsl r1,r1,#0x2
08080FA8: 8918         add r1,r1,r2
08080FAA: 0968         ldr r1,[r1,#0x0]
08080FAC: a7f0e8ff     bl 0x08128f80
08080FB0: 01bc         pop {r0}
08080FB2: 0047         bx r0
