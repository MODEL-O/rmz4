@ FUN_080e1f28  entry 0x080e1f28  size 110
.thumb
.org 0xe1f28
FUN_080e1f28:
	push {r4, lr}	@ 000e1f28 10b5
.org 0xe1f2a
	adds r4, r0, #0	@ 000e1f2a 041c
.org 0xe1f2c
	ldrb r0, [r4, #17]	@ 000e1f2c 607c
.org 0xe1f2e
	cmp r0, #0	@ 000e1f2e 0028
.org 0xe1f30
	beq.n 0xe1f56	@ 000e1f30 11d0
.org 0xe1f32
	ldr r0, [r4, #84]	@ 000e1f32 606d
.org 0xe1f34
	ldr r1, [r4, #92]	@ 000e1f34 e16d
.org 0xe1f36
	adds r0, r0, r1	@ 000e1f36 4018
.org 0xe1f38
	str r0, [r4, #84]	@ 000e1f38 6065
.org 0xe1f3a
	ldr r1, [r4, #88]	@ 000e1f3a a16d
.org 0xe1f3c
	ldr r2, [r4, #96]	@ 000e1f3c 226e
.org 0xe1f3e
	adds r1, r1, r2	@ 000e1f3e 8918
.org 0xe1f40
	str r1, [r4, #88]	@ 000e1f40 a165
.org 0xe1f42
	adds r2, #64	@ 000e1f42 4032
.org 0xe1f44
	str r2, [r4, #96]	@ 000e1f44 2266
.org 0xe1f46
	bl 0x7c7c	@ 000e1f46 25f799fe
.org 0xe1f4a
	lsls r0, r0, #16	@ 000e1f4a 0004
.org 0xe1f4c
	cmp r0, #0	@ 000e1f4c 0028
.org 0xe1f4e
	beq.n 0xe1f64	@ 000e1f4e 09d0
.org 0xe1f50
	movs r0, #0	@ 000e1f50 0020
.org 0xe1f52
	strb r0, [r4, #18]	@ 000e1f52 a074
.org 0xe1f54
	b.n 0xe1f64	@ 000e1f54 06e0
.org 0xe1f56
	ldr r0, [r4, #84]	@ 000e1f56 606d
.org 0xe1f58
	ldr r1, [r4, #92]	@ 000e1f58 e16d
.org 0xe1f5a
	adds r0, r0, r1	@ 000e1f5a 4018
.org 0xe1f5c
	str r0, [r4, #84]	@ 000e1f5c 6065
.org 0xe1f5e
	ldr r0, [r4, #100]	@ 000e1f5e 606e
.org 0xe1f60
	subs r1, r1, r0	@ 000e1f60 091a
.org 0xe1f62
	str r1, [r4, #92]	@ 000e1f62 e165
.org 0xe1f64
	adds r0, r4, #0	@ 000e1f64 201c
.org 0xe1f66
	bl 0x1cff0	@ 000e1f66 3bf743f8
.org 0xe1f6a
	ldrb r0, [r4, #18]	@ 000e1f6a a07c
.org 0xe1f6c
	subs r0, #1	@ 000e1f6c 0138
.org 0xe1f6e
	strb r0, [r4, #18]	@ 000e1f6e a074
.org 0xe1f70
	lsls r0, r0, #24	@ 000e1f70 0006
.org 0xe1f72
	lsrs r0, r0, #24	@ 000e1f72 000e
.org 0xe1f74
	cmp r0, #255	@ 000e1f74 ff28
.org 0xe1f76
	bne.n 0xe1f90	@ 000e1f76 0bd1
.org 0xe1f78
	ldr r1, [pc, #28]	@ 000e1f78 0749
.org 0xe1f7a
	ldrb r0, [r4, #9]	@ 000e1f7a 607a
.org 0xe1f7c
	lsls r0, r0, #2	@ 000e1f7c 8000
.org 0xe1f7e
	adds r0, r0, r1	@ 000e1f7e 4018
.org 0xe1f80
	movs r1, #2	@ 000e1f80 0221
.org 0xe1f82
	str r1, [r4, #12]	@ 000e1f82 e160
.org 0xe1f84
	ldr r0, [r0, #0]	@ 000e1f84 0068
.org 0xe1f86
	ldr r0, [r0, #8]	@ 000e1f86 8068
.org 0xe1f88
	str r0, [r4, #20]	@ 000e1f88 6061
.org 0xe1f8a
	adds r0, r4, #0	@ 000e1f8a 201c
.org 0xe1f8c
	bl 0xe1dac	@ 000e1f8c fff70eff
.org 0xe1f90
	pop {r4}	@ 000e1f90 10bc
.org 0xe1f92
	pop {r0}	@ 000e1f92 01bc
.org 0xe1f94
	bx r0	@ 000e1f94 0047
