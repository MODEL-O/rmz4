; undefined FUN_080b6518(void)
; entry 0x80b6518  size 54 bytes

080B6518: 10b5         push {r4,lr}
080B651A: c46a         ldr r4,[r0,#0x2c]
080B651C: 4169         ldr r1,[r0,#0x14]
080B651E: 0120         mov r0,#0x1
080B6520: 0840         and r0,r1
080B6522: 0028         cmp r0,#0x0
080B6524: 10d0         beq 0x080b6548
080B6526: 0a48         ldr r0,[0x080b6550]
080B6528: 0268         ldr r2,[r0,#0x0]
080B652A: 8020         mov r0,#0x80
080B652C: 8002         lsl r0,r0,#0xa
080B652E: 0140         and r1,r0
080B6530: 0029         cmp r1,#0x0
080B6532: 09d0         beq 0x080b6548
080B6534: 002a         cmp r2,#0x0
080B6536: 07d0         beq 0x080b6548
080B6538: 101c         add r0,r2,#0x0
080B653A: 0721         mov r1,#0x7
080B653C: 0322         mov r2,#0x3
080B653E: 84f71bf8     bl 0x0803a578
080B6542: 211c         add r1,r4,#0x0
080B6544: b431         add r1,#0xb4
080B6546: 0870         strb r0,[r1,#0x0]
080B6548: 10bc         pop {r4}
080B654A: 01bc         pop {r0}
080B654C: 0047         bx r0
