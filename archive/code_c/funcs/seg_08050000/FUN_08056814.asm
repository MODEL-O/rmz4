; undefined FUN_08056814(void)
; entry 0x8056814  size 20 bytes

08056814: 00b5         push {lr}
08056816: 044a         ldr r2,[0x08056828]
08056818: 817b         ldrb r1,[r0,#0xe]
0805681A: 8900         lsl r1,r1,#0x2
0805681C: 8918         add r1,r1,r2
0805681E: 0968         ldr r1,[r1,#0x0]
08056820: d2f0aefb     bl 0x08128f80
08056824: 01bc         pop {r0}
08056826: 0047         bx r0
