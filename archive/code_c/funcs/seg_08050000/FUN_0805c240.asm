; undefined FUN_0805c240(void)
; entry 0x805c240  size 42 bytes

0805C240: 10b5         push {r4,lr}
0805C242: 81b0         sub sp,#0x4
0805C244: 041c         add r4,r0,#0x0
0805C246: 0949         ldr r1,[0x0805c26c]
0805C248: 6846         mov r0,sp
0805C24A: 0322         mov r2,#0x3
0805C24C: cdf004f8     bl 0x08129258
0805C250: a434         add r4,#0xa4
0805C252: 0021         mov r1,#0x0
0805C254: 605e         ldrsh r0,[r4,r1]
0805C256: 0028         cmp r0,#0x0
0805C258: 00da         bge 0x0805c25c
0805C25A: 1f30         add r0,#0x1f
0805C25C: 4011         asr r0,r0,#0x5
0805C25E: 6844         add r0,sp
0805C260: 0078         ldrb r0,[r0,#0x0]
0805C262: 01b0         add sp,#0x4
0805C264: 10bc         pop {r4}
0805C266: 02bc         pop {r1}
0805C268: 0847         bx r1
