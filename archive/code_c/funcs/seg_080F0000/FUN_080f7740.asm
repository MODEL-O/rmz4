; undefined FUN_080f7740(void)
; entry 0x80f7740  size 48 bytes

080F7740: f0b5         push {r4,r5,r6,r7,lr}
080F7742: 4746         mov r7,r8
080F7744: 80b4         push {r7}
080F7746: 071c         add r7,r0,#0x0
080F7748: 074a         ldr r2,[0x080f7768]
080F774A: 1068         ldr r0,[r2,#0x0]
080F774C: 816d         ldr r1,[r0,#0x58]
080F774E: 406d         ldr r0,[r0,#0x54]
080F7750: 7865         str r0,[r7,#0x54]
080F7752: b965         str r1,[r7,#0x58]
080F7754: b87b         ldrb r0,[r7,#0xe]
080F7756: 0428         cmp r0,#0x4
080F7758: 00d9         bls 0x080f775c
080F775A: 35e1         b 0x080f79c8
080F775C: 8000         lsl r0,r0,#0x2
080F775E: 0349         ldr r1,[0x080f776c]
080F7760: 4018         add r0,r0,r1
080F7762: 0068         ldr r0,[r0,#0x0]
080F7764: 8746         mov pc,r0
080F79C8: 08bc         pop {r3}
080F79CA: 9846         mov r8,r3
080F79CC: f0bc         pop {r4,r5,r6,r7}
080F79CE: 01bc         pop {r0}
080F79D0: 0047         bx r0
