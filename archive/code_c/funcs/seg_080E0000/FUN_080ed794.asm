; undefined FUN_080ed794(void)
; entry 0x80ed794  size 26 bytes

080ED794: 00b5         push {lr}
080ED796: 0904         lsl r1,r1,#0x10
080ED798: 090c         lsr r1,r1,#0x10
080ED79A: c27a         ldrb r2,[r0,#0xb]
080ED79C: 9208         lsr r2,r2,#0x2
080ED79E: 0123         mov r3,#0x1
080ED7A0: 1a40         and r2,r3
080ED7A2: 00f029f8     bl 0x080ed7f8
080ED7A6: 0004         lsl r0,r0,#0x10
080ED7A8: 000c         lsr r0,r0,#0x10
080ED7AA: 02bc         pop {r1}
080ED7AC: 0847         bx r1
