; undefined FUN_080ac300(void)
; entry 0x80ac300  size 60 bytes

080AC300: 00b5         push {lr}
080AC302: 021c         add r2,r0,#0x0
080AC304: 0d48         ldr r0,[0x080ac33c]
080AC306: 0368         ldr r3,[r0,#0x0]
080AC308: 002b         cmp r3,#0x0
080AC30A: 15d0         beq 0x080ac338
080AC30C: 101c         add r0,r2,#0x0
080AC30E: 8c30         add r0,#0x8c
080AC310: 0068         ldr r0,[r0,#0x0]
080AC312: 8021         mov r1,#0x80
080AC314: 0901         lsl r1,r1,#0x4
080AC316: 0840         and r0,r1
080AC318: 0028         cmp r0,#0x0
080AC31A: 0dd0         beq 0x080ac338
080AC31C: 0020         mov r0,#0x0
080AC31E: 1866         str r0,[r3,#0x60]
080AC320: 111c         add r1,r2,#0x0
080AC322: b431         add r1,#0xb4
080AC324: 506d         ldr r0,[r2,#0x54]
080AC326: 0968         ldr r1,[r1,#0x0]
080AC328: 4018         add r0,r0,r1
080AC32A: 5865         str r0,[r3,#0x54]
080AC32C: 111c         add r1,r2,#0x0
080AC32E: b831         add r1,#0xb8
080AC330: 906d         ldr r0,[r2,#0x58]
080AC332: 0968         ldr r1,[r1,#0x0]
080AC334: 4018         add r0,r0,r1
080AC336: 9865         str r0,[r3,#0x58]
080AC338: 01bc         pop {r0}
080AC33A: 0047         bx r0
