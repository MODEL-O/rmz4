; undefined FUN_080330ec(void)
; entry 0x80330ec  size 20 bytes

080330EC: 00b5         push {lr}
080330EE: 044a         ldr r2,[0x08033100]
080330F0: 817b         ldrb r1,[r0,#0xe]
080330F2: 8900         lsl r1,r1,#0x2
080330F4: 8918         add r1,r1,r2
080330F6: 0968         ldr r1,[r1,#0x0]
080330F8: f5f042ff     bl 0x08128f80
080330FC: 01bc         pop {r0}
080330FE: 0047         bx r0
