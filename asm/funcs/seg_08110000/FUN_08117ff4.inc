@ FUN_08117ff4  entry 0x08117ff4  size 64
.thumb
.org 0x117ff4
FUN_08117ff4:
	push {r4, r5, lr}	@ 00117ff4 30b5
.org 0x117ff6
	adds r5, r0, #0	@ 00117ff6 051c
.org 0x117ff8
	ldr r0, [pc, #56]	@ 00117ff8 0e48
.org 0x117ffa
	adds r2, r5, r0	@ 00117ffa 2a18
.org 0x117ffc
	ldr r0, [pc, #56]	@ 00117ffc 0e48
.org 0x117ffe
	ldrh r1, [r0, #0]	@ 00117ffe 0188
.org 0x118000
	ldr r0, [pc, #56]	@ 00118000 0e48
.org 0x118002
	ands r0, r1	@ 00118002 0840
.org 0x118004
	lsls r0, r0, #8	@ 00118004 0002
.org 0x118006
	movs r1, #240	@ 00118006 f021
.org 0x118008
	lsls r1, r1, #7	@ 00118008 c901
.org 0x11800a
	adds r0, r0, r1	@ 0011800a 4018
.org 0x11800c
	str r0, [r2, #0]	@ 0011800c 1060
.org 0x11800e
	ldr r0, [pc, #48]	@ 0011800e 0c48
.org 0x118010
	adds r5, r5, r0	@ 00118010 2d18
.org 0x118012
	adds r0, r5, #0	@ 00118012 281c
.org 0x118014
	bl 0x3470	@ 00118014 ebf62cfa
.org 0x118018
	ldr r4, [pc, #40]	@ 00118018 0a4c
.org 0x11801a
	ldr r0, [r4, #0]	@ 0011801a 2068
.org 0x11801c
	bl 0x1c79c	@ 0011801c 04f7befb
.org 0x118020
	ldr r0, [r4, #0]	@ 00118020 2068
.org 0x118022
	adds r1, r5, #0	@ 00118022 291c
.org 0x118024
	bl 0x1c924	@ 00118024 04f77efc
.org 0x118028
	adds r0, r5, #0	@ 00118028 281c
.org 0x11802a
	bl 0x3420	@ 0011802a ebf6f9f9
.org 0x11802e
	pop {r4, r5}	@ 0011802e 30bc
.org 0x118030
	pop {r0}	@ 00118030 01bc
.org 0x118032
	bx r0	@ 00118032 0047
