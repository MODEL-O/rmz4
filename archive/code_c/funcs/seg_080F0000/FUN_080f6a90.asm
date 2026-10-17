; undefined FUN_080f6a90(void)
; entry 0x80f6a90  size 40 bytes

080F6A90: 10b5         push {r4,lr}
080F6A92: 031c         add r3,r0,#0x0
080F6A94: 0120         mov r0,#0x1
080F6A96: 0022         mov r2,#0x0
080F6A98: 0021         mov r1,#0x0
080F6A9A: c024         mov r4,#0xc0
080F6A9C: a400         lsl r4,r4,#0x2
080F6A9E: 00e0         b 0x080f6aa2
080F6AA0: 0130         add r0,#0x1
080F6AA2: 1031         add r1,#0x10
080F6AA4: a142         cmp r1,r4
080F6AA6: 01dd         ble 0x080f6aac
080F6AA8: c021         mov r1,#0xc0
080F6AAA: 8900         lsl r1,r1,#0x2
080F6AAC: 5218         add r2,r2,r1
080F6AAE: 9a42         cmp r2,r3
080F6AB0: f6db         blt 0x080f6aa0
080F6AB2: 10bc         pop {r4}
080F6AB4: 02bc         pop {r1}
080F6AB6: 0847         bx r1
