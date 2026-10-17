@ FUN_080e1ee4  entry 0x080e1ee4  size 64
.thumb
.org 0xe1ee4
FUN_080e1ee4:
	push {r4, lr}	@ 000e1ee4 10b5
.org 0xe1ee6
	adds r4, r0, #0	@ 000e1ee6 041c
.org 0xe1ee8
	bl 0x1cff0	@ 000e1ee8 3bf782f8
.org 0xe1eec
	ldr r0, [r4, #84]	@ 000e1eec 606d
.org 0xe1eee
	ldr r1, [r4, #92]	@ 000e1eee e16d
.org 0xe1ef0
	adds r0, r0, r1	@ 000e1ef0 4018
.org 0xe1ef2
	str r0, [r4, #84]	@ 000e1ef2 6065
.org 0xe1ef4
	ldr r0, [r4, #88]	@ 000e1ef4 a06d
.org 0xe1ef6
	ldr r1, [r4, #96]	@ 000e1ef6 216e
.org 0xe1ef8
	adds r0, r0, r1	@ 000e1ef8 4018
.org 0xe1efa
	str r0, [r4, #88]	@ 000e1efa a065
.org 0xe1efc
	adds r0, r4, #0	@ 000e1efc 201c
.org 0xe1efe
	adds r0, #115	@ 000e1efe 7330
.org 0xe1f00
	ldrb r0, [r0, #0]	@ 000e1f00 0078
.org 0xe1f02
	cmp r0, #3	@ 000e1f02 0328
.org 0xe1f04
	bne.n 0xe1f1e	@ 000e1f04 0bd1
.org 0xe1f06
	ldr r1, [pc, #28]	@ 000e1f06 0749
.org 0xe1f08
	ldrb r0, [r4, #9]	@ 000e1f08 607a
.org 0xe1f0a
	lsls r0, r0, #2	@ 000e1f0a 8000
.org 0xe1f0c
	adds r0, r0, r1	@ 000e1f0c 4018
.org 0xe1f0e
	movs r1, #2	@ 000e1f0e 0221
.org 0xe1f10
	str r1, [r4, #12]	@ 000e1f10 e160
.org 0xe1f12
	ldr r0, [r0, #0]	@ 000e1f12 0068
.org 0xe1f14
	ldr r0, [r0, #8]	@ 000e1f14 8068
.org 0xe1f16
	str r0, [r4, #20]	@ 000e1f16 6061
.org 0xe1f18
	adds r0, r4, #0	@ 000e1f18 201c
.org 0xe1f1a
	bl 0xe1dac	@ 000e1f1a fff747ff
.org 0xe1f1e
	pop {r4}	@ 000e1f1e 10bc
.org 0xe1f20
	pop {r0}	@ 000e1f20 01bc
.org 0xe1f22
	bx r0	@ 000e1f22 0047
