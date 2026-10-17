; undefined FUN_080ba5a0(void)
; entry 0x80ba5a0  size 52 bytes

080BA5A0: 10b5         push {r4,lr}
080BA5A2: 041c         add r4,r0,#0x0
080BA5A4: a26a         ldr r2,[r4,#0x28]
080BA5A6: 0b49         ldr r1,[0x080ba5d4]
080BA5A8: 0020         mov r0,#0x0
080BA5AA: 0880         strh r0,[r1,#0x0]
080BA5AC: 231c         add r3,r4,#0x0
080BA5AE: 4533         add r3,#0x45
080BA5B0: 1978         ldrb r1,[r3,#0x0]
080BA5B2: 0d38         sub r0,#0xd
080BA5B4: 0840         and r0,r1
080BA5B6: 1870         strb r0,[r3,#0x0]
080BA5B8: cc32         add r2,#0xcc
080BA5BA: 1188         ldrh r1,[r2,#0x0]
080BA5BC: 0023         mov r3,#0x0
080BA5BE: d05e         ldrsh r0,[r2,r3]
080BA5C0: 0028         cmp r0,#0x0
080BA5C2: 01d0         beq 0x080ba5c8
080BA5C4: 481e         sub r0,r1,#0x1
080BA5C6: 1080         strh r0,[r2,#0x0]
080BA5C8: 201c         add r0,r4,#0x0
080BA5CA: c5f78ff9     bl 0x0807f8ec
080BA5CE: 10bc         pop {r4}
080BA5D0: 01bc         pop {r0}
080BA5D2: 0047         bx r0
