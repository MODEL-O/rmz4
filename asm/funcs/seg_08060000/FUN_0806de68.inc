@ FUN_0806de68  entry 0x0806de68  size 54
.thumb
.org 0x6de68
FUN_0806de68:
	push {r4, lr}	@ 0006de68 10b5
.org 0x6de6a
	adds r4, r0, #0	@ 0006de6a 041c
.org 0x6de6c
	ldrb r0, [r4, #15]	@ 0006de6c e07b
.org 0x6de6e
	cmp r0, #0	@ 0006de6e 0028
.org 0x6de70
	bne.n 0x6de8c	@ 0006de70 0cd1
.org 0x6de72
	adds r0, r4, #0	@ 0006de72 201c
.org 0x6de74
	adds r0, #116	@ 0006de74 7430
.org 0x6de76
	ldr r1, [pc, #40]	@ 0006de76 0a49
.org 0x6de78
	bl 0x5784	@ 0006de78 97f784fc
.org 0x6de7c
	movs r1, #173	@ 0006de7c ad21
.org 0x6de7e
	lsls r1, r1, #8	@ 0006de7e 0902
.org 0x6de80
	adds r0, r4, #0	@ 0006de80 201c
.org 0x6de82
	bl 0x1cf00	@ 0006de82 aff73df8
.org 0x6de86
	ldrb r0, [r4, #15]	@ 0006de86 e07b
.org 0x6de88
	adds r0, #1	@ 0006de88 0130
.org 0x6de8a
	strb r0, [r4, #15]	@ 0006de8a e073
.org 0x6de8c
	adds r0, r4, #0	@ 0006de8c 201c
.org 0x6de8e
	bl 0x1cff0	@ 0006de8e aff7aff8
.org 0x6de92
	adds r0, r4, #0	@ 0006de92 201c
.org 0x6de94
	bl 0x6f124	@ 0006de94 01f046f9
.org 0x6de98
	pop {r4}	@ 0006de98 10bc
.org 0x6de9a
	pop {r0}	@ 0006de9a 01bc
.org 0x6de9c
	bx r0	@ 0006de9c 0047
