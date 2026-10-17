; undefined FUN_08093ff0(void)
; entry 0x8093ff0  size 20 bytes

08093FF0: 00b5         push {lr}
08093FF2: 044a         ldr r2,[0x08094004]
08093FF4: 417b         ldrb r1,[r0,#0xd]
08093FF6: 8900         lsl r1,r1,#0x2
08093FF8: 8918         add r1,r1,r2
08093FFA: 0968         ldr r1,[r1,#0x0]
08093FFC: 94f0c0ff     bl 0x08128f80
08094000: 01bc         pop {r0}
08094002: 0047         bx r0
