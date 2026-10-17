; undefined FUN_08092cdc(void)
; entry 0x8092cdc  size 20 bytes

08092CDC: 00b5         push {lr}
08092CDE: 044a         ldr r2,[0x08092cf0]
08092CE0: 017c         ldrb r1,[r0,#0x10]
08092CE2: 8900         lsl r1,r1,#0x2
08092CE4: 8918         add r1,r1,r2
08092CE6: 0968         ldr r1,[r1,#0x0]
08092CE8: 96f04af9     bl 0x08128f80
08092CEC: 01bc         pop {r0}
08092CEE: 0047         bx r0
