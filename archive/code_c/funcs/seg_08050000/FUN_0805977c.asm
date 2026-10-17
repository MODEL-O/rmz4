; undefined FUN_0805977c(void)
; entry 0x805977c  size 42 bytes

0805977C: 10b5         push {r4,lr}
0805977E: 82b0         sub sp,#0x8
08059780: 041c         add r4,r0,#0x0
08059782: 0949         ldr r1,[0x080597a8]
08059784: 6846         mov r0,sp
08059786: 0522         mov r2,#0x5
08059788: cff066fd     bl 0x08129258
0805978C: a434         add r4,#0xa4
0805978E: 0021         mov r1,#0x0
08059790: 605e         ldrsh r0,[r4,r1]
08059792: 0028         cmp r0,#0x0
08059794: 00da         bge 0x08059798
08059796: 0f30         add r0,#0xf
08059798: 0011         asr r0,r0,#0x4
0805979A: 6844         add r0,sp
0805979C: 0078         ldrb r0,[r0,#0x0]
0805979E: 02b0         add sp,#0x8
080597A0: 10bc         pop {r4}
080597A2: 02bc         pop {r1}
080597A4: 0847         bx r1
