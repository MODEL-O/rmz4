; undefined FUN_080bb6c0(void)
; entry 0x80bb6c0  size 52 bytes

080BB6C0: 10b5         push {r4,lr}
080BB6C2: 041c         add r4,r0,#0x0
080BB6C4: a26a         ldr r2,[r4,#0x28]
080BB6C6: 0b49         ldr r1,[0x080bb6f4]
080BB6C8: 0020         mov r0,#0x0
080BB6CA: 0880         strh r0,[r1,#0x0]
080BB6CC: 231c         add r3,r4,#0x0
080BB6CE: 4533         add r3,#0x45
080BB6D0: 1978         ldrb r1,[r3,#0x0]
080BB6D2: 0d38         sub r0,#0xd
080BB6D4: 0840         and r0,r1
080BB6D6: 1870         strb r0,[r3,#0x0]
080BB6D8: cc32         add r2,#0xcc
080BB6DA: 1188         ldrh r1,[r2,#0x0]
080BB6DC: 0023         mov r3,#0x0
080BB6DE: d05e         ldrsh r0,[r2,r3]
080BB6E0: 0028         cmp r0,#0x0
080BB6E2: 01d0         beq 0x080bb6e8
080BB6E4: 481e         sub r0,r1,#0x1
080BB6E6: 1080         strh r0,[r2,#0x0]
080BB6E8: 201c         add r0,r4,#0x0
080BB6EA: c4f7fff8     bl 0x0807f8ec
080BB6EE: 10bc         pop {r4}
080BB6F0: 01bc         pop {r0}
080BB6F2: 0047         bx r0
