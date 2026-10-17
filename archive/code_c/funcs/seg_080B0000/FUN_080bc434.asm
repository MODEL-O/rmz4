; undefined FUN_080bc434(void)
; entry 0x80bc434  size 52 bytes

080BC434: 10b5         push {r4,lr}
080BC436: 041c         add r4,r0,#0x0
080BC438: a26a         ldr r2,[r4,#0x28]
080BC43A: 0b49         ldr r1,[0x080bc468]
080BC43C: 0020         mov r0,#0x0
080BC43E: 0880         strh r0,[r1,#0x0]
080BC440: 231c         add r3,r4,#0x0
080BC442: 4533         add r3,#0x45
080BC444: 1978         ldrb r1,[r3,#0x0]
080BC446: 0d38         sub r0,#0xd
080BC448: 0840         and r0,r1
080BC44A: 1870         strb r0,[r3,#0x0]
080BC44C: cc32         add r2,#0xcc
080BC44E: 1188         ldrh r1,[r2,#0x0]
080BC450: 0023         mov r3,#0x0
080BC452: d05e         ldrsh r0,[r2,r3]
080BC454: 0028         cmp r0,#0x0
080BC456: 01d0         beq 0x080bc45c
080BC458: 481e         sub r0,r1,#0x1
080BC45A: 1080         strh r0,[r2,#0x0]
080BC45C: 201c         add r0,r4,#0x0
080BC45E: c3f745fa     bl 0x0807f8ec
080BC462: 10bc         pop {r4}
080BC464: 01bc         pop {r0}
080BC466: 0047         bx r0
