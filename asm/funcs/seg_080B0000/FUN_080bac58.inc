@ FUN_080bac58  entry 0x080bac58  size 52
.thumb
.org 0xbac58
FUN_080bac58:
	push {r4, lr}	@ 000bac58 10b5
.org 0xbac5a
	adds r4, r0, #0	@ 000bac5a 041c
.org 0xbac5c
	ldr r2, [r4, #40]	@ 000bac5c a26a
.org 0xbac5e
	ldr r1, [pc, #44]	@ 000bac5e 0b49
.org 0xbac60
	movs r0, #0	@ 000bac60 0020
.org 0xbac62
	strh r0, [r1, #0]	@ 000bac62 0880
.org 0xbac64
	adds r3, r4, #0	@ 000bac64 231c
.org 0xbac66
	adds r3, #69	@ 000bac66 4533
.org 0xbac68
	ldrb r1, [r3, #0]	@ 000bac68 1978
.org 0xbac6a
	subs r0, #13	@ 000bac6a 0d38
.org 0xbac6c
	ands r0, r1	@ 000bac6c 0840
.org 0xbac6e
	strb r0, [r3, #0]	@ 000bac6e 1870
.org 0xbac70
	adds r2, #204	@ 000bac70 cc32
.org 0xbac72
	ldrh r1, [r2, #0]	@ 000bac72 1188
.org 0xbac74
	movs r3, #0	@ 000bac74 0023
.org 0xbac76
	ldrsh r0, [r2, r3]	@ 000bac76 d05e
.org 0xbac78
	cmp r0, #0	@ 000bac78 0028
.org 0xbac7a
	beq.n 0xbac80	@ 000bac7a 01d0
.org 0xbac7c
	subs r0, r1, #1	@ 000bac7c 481e
.org 0xbac7e
	strh r0, [r2, #0]	@ 000bac7e 1080
.org 0xbac80
	adds r0, r4, #0	@ 000bac80 201c
.org 0xbac82
	bl 0x7f8ec	@ 000bac82 c4f733fe
.org 0xbac86
	pop {r4}	@ 000bac86 10bc
.org 0xbac88
	pop {r0}	@ 000bac88 01bc
.org 0xbac8a
	bx r0	@ 000bac8a 0047
