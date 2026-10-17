; undefined FUN_08095fc4(void)
; entry 0x8095fc4  size 20 bytes

08095FC4: 00b5         push {lr}
08095FC6: 044a         ldr r2,[0x08095fd8]
08095FC8: 017c         ldrb r1,[r0,#0x10]
08095FCA: 8900         lsl r1,r1,#0x2
08095FCC: 8918         add r1,r1,r2
08095FCE: 0968         ldr r1,[r1,#0x0]
08095FD0: 92f0d6ff     bl 0x08128f80
08095FD4: 01bc         pop {r0}
08095FD6: 0047         bx r0
