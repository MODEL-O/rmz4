@ FUN_0802879c  entry 0x0802879c  size 52
.thumb
.org 0x2879c
FUN_0802879c:
	push {r4, r5, lr}	@ 0002879c 30b5
.org 0x2879e
	adds r1, r0, #0	@ 0002879e 011c
.org 0x287a0
	ldr r3, [r1, #12]	@ 000287a0 cb68
.org 0x287a2
	ldrb r0, [r3, #1]	@ 000287a2 5878
.org 0x287a4
	lsls r4, r0, #4	@ 000287a4 0401
.org 0x287a6
	adds r2, r1, #0	@ 000287a6 0a1c
.org 0x287a8
	adds r2, #16	@ 000287a8 1032
.org 0x287aa
	adds r0, r2, r4	@ 000287aa 1019
.org 0x287ac
	ldr r0, [r0, #0]	@ 000287ac 0068
.org 0x287ae
	cmp r0, #0	@ 000287ae 0028
.org 0x287b0
	beq.n 0x287c8	@ 000287b0 0ad0
.org 0x287b2
	movs r5, #2	@ 000287b2 0225
.org 0x287b4
	ldrsh r0, [r3, r5]	@ 000287b4 585f
.org 0x287b6
	lsls r0, r0, #4	@ 000287b6 0001
.org 0x287b8
	adds r0, r2, r0	@ 000287b8 1018
.org 0x287ba
	ldr r2, [r0, #0]	@ 000287ba 0268
.org 0x287bc
	cmp r2, #0	@ 000287bc 002a
.org 0x287be
	beq.n 0x287c8	@ 000287be 03d0
.org 0x287c0
	adds r0, r1, #0	@ 000287c0 081c
.org 0x287c2
	adds r0, #20	@ 000287c2 1430
.org 0x287c4
	adds r0, r0, r4	@ 000287c4 0019
.org 0x287c6
	str r2, [r0, #0]	@ 000287c6 0260
.org 0x287c8
	movs r0, #0	@ 000287c8 0020
.org 0x287ca
	pop {r4, r5}	@ 000287ca 30bc
.org 0x287cc
	pop {r1}	@ 000287cc 02bc
.org 0x287ce
	bx r1	@ 000287ce 0847
