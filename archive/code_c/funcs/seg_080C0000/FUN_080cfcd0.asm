; undefined FUN_080cfcd0(void)
; entry 0x80cfcd0  size 40 bytes

080CFCD0: 30b5         push {r4,r5,lr}
080CFCD2: 051c         add r5,r0,#0x0
080CFCD4: ac6a         ldr r4,[r5,#0x28]
080CFCD6: c520         mov r0,#0xc5
080CFCD8: 32f7a4fc     bl 0x08002624
080CFCDC: cc34         add r4,#0xcc
080CFCDE: 2188         ldrh r1,[r4,#0x0]
080CFCE0: 0022         mov r2,#0x0
080CFCE2: a05e         ldrsh r0,[r4,r2]
080CFCE4: 0028         cmp r0,#0x0
080CFCE6: 01d0         beq 0x080cfcec
080CFCE8: 481e         sub r0,r1,#0x1
080CFCEA: 2080         strh r0,[r4,#0x0]
080CFCEC: 281c         add r0,r5,#0x0
080CFCEE: edf783fb     bl 0x080bd3f8
080CFCF2: 30bc         pop {r4,r5}
080CFCF4: 01bc         pop {r0}
080CFCF6: 0047         bx r0
