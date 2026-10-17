; undefined FUN_080b5858(void)
; entry 0x80b5858  size 70 bytes

080B5858: 00b5         push {lr}
080B585A: 021c         add r2,r0,#0x0
080B585C: 8c30         add r0,#0x8c
080B585E: 0068         ldr r0,[r0,#0x0]
080B5860: 0123         mov r3,#0x1
080B5862: 1840         and r0,r3
080B5864: 0028         cmp r0,#0x0
080B5866: 10d0         beq 0x080b588a
080B5868: 101c         add r0,r2,#0x0
080B586A: 9730         add r0,#0x97
080B586C: 0178         ldrb r1,[r0,#0x0]
080B586E: f020         mov r0,#0xf0
080B5870: 0840         and r0,r1
080B5872: 3028         cmp r0,#0x30
080B5874: 09d1         bne 0x080b588a
080B5876: 101c         add r0,r2,#0x0
080B5878: b430         add r0,#0xb4
080B587A: 0178         ldrb r1,[r0,#0x0]
080B587C: 0029         cmp r1,#0x0
080B587E: 04d1         bne 0x080b588a
080B5880: 0370         strb r3,[r0,#0x0]
080B5882: 0320         mov r0,#0x3
080B5884: 5073         strb r0,[r2,#0xd]
080B5886: 9173         strb r1,[r2,#0xe]
080B5888: d173         strb r1,[r2,#0xf]
080B588A: 0548         ldr r0,[0x080b58a0]
080B588C: 517b         ldrb r1,[r2,#0xd]
080B588E: 8900         lsl r1,r1,#0x2
080B5890: 0918         add r1,r1,r0
080B5892: 0968         ldr r1,[r1,#0x0]
080B5894: 101c         add r0,r2,#0x0
080B5896: 73f073fb     bl 0x08128f80
080B589A: 01bc         pop {r0}
080B589C: 0047         bx r0
