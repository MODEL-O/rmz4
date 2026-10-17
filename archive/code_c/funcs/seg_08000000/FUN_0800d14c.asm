; undefined FUN_0800d14c(void)
; entry 0x800d14c  size 44 bytes

0800D14C: 00b5         push {lr}
0800D14E: 031c         add r3,r0,#0x0
0800D150: d86d         ldr r0,[r3,#0x5c]
0800D152: 0204         lsl r2,r0,#0x10
0800D154: 987b         ldrb r0,[r3,#0xe]
0800D156: 0028         cmp r0,#0x0
0800D158: 0cd1         bne 0x0800d174
0800D15A: 120d         lsr r2,r2,#0x14
0800D15C: 5200         lsl r2,r2,#0x1
0800D15E: 0648         ldr r0,[0x0800d178]
0800D160: 1218         add r2,r2,r0
0800D162: 1188         ldrh r1,[r2,#0x0]
0800D164: 0548         ldr r0,[0x0800d17c]
0800D166: 0840         and r0,r1
0800D168: 0221         mov r1,#0x2
0800D16A: 0843         orr r0,r1
0800D16C: 1080         strh r0,[r2,#0x0]
0800D16E: 987b         ldrb r0,[r3,#0xe]
0800D170: 0130         add r0,#0x1
0800D172: 9873         strb r0,[r3,#0xe]
0800D174: 01bc         pop {r0}
0800D176: 0047         bx r0
