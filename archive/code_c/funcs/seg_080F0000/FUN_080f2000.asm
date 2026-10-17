; undefined FUN_080f2000(void)
; entry 0x80f2000  size 26 bytes

080F2000: 30b5         push {r4,r5,lr}
080F2002: 051c         add r5,r0,#0x0
080F2004: 687c         ldrb r0,[r5,#0x11]
080F2006: 0428         cmp r0,#0x4
080F2008: 58d8         bhi 0x080f20bc
080F200A: 8000         lsl r0,r0,#0x2
080F200C: 0149         ldr r1,[0x080f2014]
080F200E: 4018         add r0,r0,r1
080F2010: 0068         ldr r0,[r0,#0x0]
080F2012: 8746         mov pc,r0
080F20BC: 30bc         pop {r4,r5}
080F20BE: 01bc         pop {r0}
080F20C0: 0047         bx r0
