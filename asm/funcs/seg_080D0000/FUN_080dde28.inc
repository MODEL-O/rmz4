@ FUN_080dde28  entry 0x080dde28  size 84
.thumb
.org 0xdde28
FUN_080dde28:
	push {r4, lr}	@ 000dde28 10b5
.org 0xdde2a
	adds r4, r0, #0	@ 000dde2a 041c
.org 0xdde2c
	bl 0x1cff0	@ 000dde2c 3ff7e0f8
.org 0xdde30
	ldr r1, [r4, #84]	@ 000dde30 616d
.org 0xdde32
	ldr r0, [r4, #92]	@ 000dde32 e06d
.org 0xdde34
	adds r2, r1, r0	@ 000dde34 0a18
.org 0xdde36
	str r2, [r4, #84]	@ 000dde36 6265
.org 0xdde38
	ldr r1, [r4, #88]	@ 000dde38 a16d
.org 0xdde3a
	ldr r0, [r4, #96]	@ 000dde3a 206e
.org 0xdde3c
	adds r1, r1, r0	@ 000dde3c 0918
.org 0xdde3e
	str r1, [r4, #88]	@ 000dde3e a165
.org 0xdde40
	adds r0, #64	@ 000dde40 4030
.org 0xdde42
	str r0, [r4, #96]	@ 000dde42 2066
.org 0xdde44
	ldrb r0, [r4, #18]	@ 000dde44 a07c
.org 0xdde46
	subs r0, #1	@ 000dde46 0138
.org 0xdde48
	strb r0, [r4, #18]	@ 000dde48 a074
.org 0xdde4a
	lsls r0, r0, #24	@ 000dde4a 0006
.org 0xdde4c
	lsrs r0, r0, #24	@ 000dde4c 000e
.org 0xdde4e
	cmp r0, #255	@ 000dde4e ff28
.org 0xdde50
	beq.n 0xdde5e	@ 000dde50 05d0
.org 0xdde52
	adds r0, r2, #0	@ 000dde52 101c
.org 0xdde54
	bl 0x7c7c	@ 000dde54 29f712ff
.org 0xdde58
	lsls r0, r0, #16	@ 000dde58 0004
.org 0xdde5a
	cmp r0, #0	@ 000dde5a 0028
.org 0xdde5c
	beq.n 0xdde76	@ 000dde5c 0bd0
.org 0xdde5e
	ldr r1, [pc, #28]	@ 000dde5e 0749
.org 0xdde60
	ldrb r0, [r4, #9]	@ 000dde60 607a
.org 0xdde62
	lsls r0, r0, #2	@ 000dde62 8000
.org 0xdde64
	adds r0, r0, r1	@ 000dde64 4018
.org 0xdde66
	movs r1, #2	@ 000dde66 0221
.org 0xdde68
	str r1, [r4, #12]	@ 000dde68 e160
.org 0xdde6a
	ldr r0, [r0, #0]	@ 000dde6a 0068
.org 0xdde6c
	ldr r0, [r0, #8]	@ 000dde6c 8068
.org 0xdde6e
	str r0, [r4, #20]	@ 000dde6e 6061
.org 0xdde70
	adds r0, r4, #0	@ 000dde70 201c
.org 0xdde72
	bl 0xdd6e0	@ 000dde72 fff735fc
.org 0xdde76
	pop {r4}	@ 000dde76 10bc
.org 0xdde78
	pop {r0}	@ 000dde78 01bc
.org 0xdde7a
	bx r0	@ 000dde7a 0047
