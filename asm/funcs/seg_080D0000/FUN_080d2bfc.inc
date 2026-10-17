@ FUN_080d2bfc  entry 0x080d2bfc  size 94
.thumb
.org 0xd2bfc
FUN_080d2bfc:
	push {r4, lr}	@ 000d2bfc 10b5
.org 0xd2bfe
	adds r4, r0, #0	@ 000d2bfe 041c
.org 0xd2c00
	bl 0x1cc9c	@ 000d2c00 4af74cf8
.org 0xd2c04
	ldrb r1, [r4, #10]	@ 000d2c04 a17a
.org 0xd2c06
	movs r0, #1	@ 000d2c06 0120
.org 0xd2c08
	orrs r0, r1	@ 000d2c08 0843
.org 0xd2c0a
	movs r1, #2	@ 000d2c0a 0221
.org 0xd2c0c
	orrs r0, r1	@ 000d2c0c 0843
.org 0xd2c0e
	strb r0, [r4, #10]	@ 000d2c0e a072
.org 0xd2c10
	adds r0, r4, #0	@ 000d2c10 201c
.org 0xd2c12
	movs r1, #1	@ 000d2c12 0121
.org 0xd2c14
	bl 0x1cf00	@ 000d2c14 4af774f9
.org 0xd2c18
	adds r0, r4, #0	@ 000d2c18 201c
.org 0xd2c1a
	bl 0x1cff0	@ 000d2c1a 4af7e9f9
.org 0xd2c1e
	ldr r1, [pc, #60]	@ 000d2c1e 0f49
.org 0xd2c20
	ldrb r0, [r4, #17]	@ 000d2c20 607c
.org 0xd2c22
	adds r0, #64	@ 000d2c22 4030
.org 0xd2c24
	lsls r0, r0, #24	@ 000d2c24 0006
.org 0xd2c26
	lsrs r0, r0, #23	@ 000d2c26 c00d
.org 0xd2c28
	adds r0, r0, r1	@ 000d2c28 4018
.org 0xd2c2a
	movs r2, #0	@ 000d2c2a 0022
.org 0xd2c2c
	ldrsh r0, [r0, r2]	@ 000d2c2c 805e
.org 0xd2c2e
	str r0, [r4, #92]	@ 000d2c2e e065
.org 0xd2c30
	ldrb r0, [r4, #17]	@ 000d2c30 607c
.org 0xd2c32
	lsls r0, r0, #1	@ 000d2c32 4000
.org 0xd2c34
	adds r0, r0, r1	@ 000d2c34 4018
.org 0xd2c36
	movs r1, #0	@ 000d2c36 0021
.org 0xd2c38
	ldrsh r0, [r0, r1]	@ 000d2c38 405e
.org 0xd2c3a
	str r0, [r4, #96]	@ 000d2c3a 2066
.org 0xd2c3c
	ldr r1, [pc, #32]	@ 000d2c3c 0849
.org 0xd2c3e
	ldrb r0, [r4, #9]	@ 000d2c3e 607a
.org 0xd2c40
	lsls r0, r0, #2	@ 000d2c40 8000
.org 0xd2c42
	adds r0, r0, r1	@ 000d2c42 4018
.org 0xd2c44
	movs r1, #1	@ 000d2c44 0121
.org 0xd2c46
	str r1, [r4, #12]	@ 000d2c46 e160
.org 0xd2c48
	ldr r0, [r0, #0]	@ 000d2c48 0068
.org 0xd2c4a
	ldr r0, [r0, #4]	@ 000d2c4a 4068
.org 0xd2c4c
	str r0, [r4, #20]	@ 000d2c4c 6061
.org 0xd2c4e
	adds r0, r4, #0	@ 000d2c4e 201c
.org 0xd2c50
	bl 0xd2a30	@ 000d2c50 fff7eefe
.org 0xd2c54
	pop {r4}	@ 000d2c54 10bc
.org 0xd2c56
	pop {r0}	@ 000d2c56 01bc
.org 0xd2c58
	bx r0	@ 000d2c58 0047
