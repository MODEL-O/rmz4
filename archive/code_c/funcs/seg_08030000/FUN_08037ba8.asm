; undefined FUN_08037ba8(void)
; entry 0x8037ba8  size 26 bytes

08037BA8: 00b5         push {lr}
08037BAA: 064a         ldr r2,[0x08037bc4]
08037BAC: 8023         mov r3,#0x80
08037BAE: 5b00         lsl r3,r3,#0x1
08037BB0: c118         add r1,r0,r3
08037BB2: 0978         ldrb r1,[r1,#0x0]
08037BB4: 8900         lsl r1,r1,#0x2
08037BB6: 8918         add r1,r1,r2
08037BB8: 0968         ldr r1,[r1,#0x0]
08037BBA: f1f0e1f9     bl 0x08128f80
08037BBE: 01bc         pop {r0}
08037BC0: 0047         bx r0
