; undefined FUN_080ff134(void)
; entry 0x80ff134  size 40 bytes

080FF134: 00b5         push {lr}
080FF136: 021c         add r2,r0,#0x0
080FF138: 0848         ldr r0,[0x080ff15c]
080FF13A: 094b         ldr r3,[0x080ff160]
080FF13C: c118         add r1,r0,r3
080FF13E: 0888         ldrh r0,[r1,#0x0]
080FF140: 4728         cmp r0,#0x47
080FF142: 01d9         bls 0x080ff148
080FF144: 4820         mov r0,#0x48
080FF146: 0880         strh r0,[r1,#0x0]
080FF148: 0648         ldr r0,[0x080ff164]
080FF14A: 117c         ldrb r1,[r2,#0x10]
080FF14C: 8900         lsl r1,r1,#0x2
080FF14E: 0918         add r1,r1,r0
080FF150: 0968         ldr r1,[r1,#0x0]
080FF152: 101c         add r0,r2,#0x0
080FF154: 29f014ff     bl 0x08128f80
080FF158: 01bc         pop {r0}
080FF15A: 0047         bx r0
