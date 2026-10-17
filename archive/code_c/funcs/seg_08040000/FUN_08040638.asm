; undefined FUN_08040638(void)
; entry 0x8040638  size 42 bytes

08040638: 00b5         push {lr}
0804063A: 021c         add r2,r0,#0x0
0804063C: 5069         ldr r0,[r2,#0x14]
0804063E: 0121         mov r1,#0x1
08040640: 0840         and r0,r1
08040642: 0028         cmp r0,#0x0
08040644: 0bd0         beq 0x0804065e
08040646: d068         ldr r0,[r2,#0xc]
08040648: c06a         ldr r0,[r0,#0x2c]
0804064A: d26a         ldr r2,[r2,#0x2c]
0804064C: 0023         mov r3,#0x0
0804064E: 416d         ldr r1,[r0,#0x54]
08040650: 506d         ldr r0,[r2,#0x54]
08040652: 8142         cmp r1,r0
08040654: 00dd         ble 0x08040658
08040656: 0123         mov r3,#0x1
08040658: 101c         add r0,r2,#0x0
0804065A: bc30         add r0,#0xbc
0804065C: 0370         strb r3,[r0,#0x0]
0804065E: 01bc         pop {r0}
08040660: 0047         bx r0
