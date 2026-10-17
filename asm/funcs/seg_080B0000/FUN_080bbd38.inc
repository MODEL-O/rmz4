@ FUN_080bbd38  entry 0x080bbd38  size 52
.thumb
.org 0xbbd38
FUN_080bbd38:
	push {r4, lr}	@ 000bbd38 10b5
.org 0xbbd3a
	adds r4, r0, #0	@ 000bbd3a 041c
.org 0xbbd3c
	ldr r2, [r4, #40]	@ 000bbd3c a26a
.org 0xbbd3e
	ldr r1, [pc, #44]	@ 000bbd3e 0b49
.org 0xbbd40
	movs r0, #0	@ 000bbd40 0020
.org 0xbbd42
	strh r0, [r1, #0]	@ 000bbd42 0880
.org 0xbbd44
	adds r3, r4, #0	@ 000bbd44 231c
.org 0xbbd46
	adds r3, #69	@ 000bbd46 4533
.org 0xbbd48
	ldrb r1, [r3, #0]	@ 000bbd48 1978
.org 0xbbd4a
	subs r0, #13	@ 000bbd4a 0d38
.org 0xbbd4c
	ands r0, r1	@ 000bbd4c 0840
.org 0xbbd4e
	strb r0, [r3, #0]	@ 000bbd4e 1870
.org 0xbbd50
	adds r2, #204	@ 000bbd50 cc32
.org 0xbbd52
	ldrh r1, [r2, #0]	@ 000bbd52 1188
.org 0xbbd54
	movs r3, #0	@ 000bbd54 0023
.org 0xbbd56
	ldrsh r0, [r2, r3]	@ 000bbd56 d05e
.org 0xbbd58
	cmp r0, #0	@ 000bbd58 0028
.org 0xbbd5a
	beq.n 0xbbd60	@ 000bbd5a 01d0
.org 0xbbd5c
	subs r0, r1, #1	@ 000bbd5c 481e
.org 0xbbd5e
	strh r0, [r2, #0]	@ 000bbd5e 1080
.org 0xbbd60
	adds r0, r4, #0	@ 000bbd60 201c
.org 0xbbd62
	bl 0x7f8ec	@ 000bbd62 c3f7c3fd
.org 0xbbd66
	pop {r4}	@ 000bbd66 10bc
.org 0xbbd68
	pop {r0}	@ 000bbd68 01bc
.org 0xbbd6a
	bx r0	@ 000bbd6a 0047
