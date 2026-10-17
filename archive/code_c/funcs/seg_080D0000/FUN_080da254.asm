; undefined FUN_080da254(void)
; entry 0x80da254  size 60 bytes

080DA254: 00b5         push {lr}
080DA256: 031c         add r3,r0,#0x0
080DA258: 997a         ldrb r1,[r3,#0xa]
080DA25A: 1020         mov r0,#0x10
080DA25C: 0840         and r0,r1
080DA25E: 0028         cmp r0,#0x0
080DA260: 02d0         beq 0x080da268
080DA262: c020         mov r0,#0xc0
080DA264: 4042         rsb r0,r0
080DA266: 00e0         b 0x080da26a
080DA268: c020         mov r0,#0xc0
080DA26A: d865         str r0,[r3,#0x5c]
080DA26C: 0020         mov r0,#0x0
080DA26E: 1866         str r0,[r3,#0x60]
080DA270: 074a         ldr r2,[0x080da290]
080DA272: 1168         ldr r1,[r2,#0x0]
080DA274: 0748         ldr r0,[0x080da294]
080DA276: 4843         mul r0,r1
080DA278: 0749         ldr r1,[0x080da298]
080DA27A: 4018         add r0,r0,r1
080DA27C: 4000         lsl r0,r0,#0x1
080DA27E: 4108         lsr r1,r0,#0x1
080DA280: 1160         str r1,[r2,#0x0]
080DA282: 400c         lsr r0,r0,#0x11
080DA284: 0721         mov r1,#0x7
080DA286: 0840         and r0,r1
080DA288: 4c30         add r0,#0x4c
080DA28A: 9874         strb r0,[r3,#0x12]
080DA28C: 01bc         pop {r0}
080DA28E: 0047         bx r0
