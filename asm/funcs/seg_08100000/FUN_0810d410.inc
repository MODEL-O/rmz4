@ FUN_0810d410  entry 0x0810d410  size 46
.thumb
.org 0x10d410
FUN_0810d410:
	push {r4, r5, r6, lr}	@ 0010d410 70b5
.org 0x10d412
	mov r6, r8	@ 0010d412 4646
.org 0x10d414
	push {r6}	@ 0010d414 40b4
.org 0x10d416
	sub sp, #8	@ 0010d416 82b0
.org 0x10d418
	ldr r4, [r0, #0]	@ 0010d418 0468
.org 0x10d41a
	ldr r5, [r0, #4]	@ 0010d41a 4568
.org 0x10d41c
	ldr r6, [r1, #0]	@ 0010d41c 0e68
.org 0x10d41e
	ldr r1, [r1, #4]	@ 0010d41e 4968
.org 0x10d420
	mov r8, r1	@ 0010d420 8846
.org 0x10d422
	str r2, [sp, #0]	@ 0010d422 0092
.org 0x10d424
	str r3, [sp, #4]	@ 0010d424 0193
.org 0x10d426
	adds r0, r4, #0	@ 0010d426 201c
.org 0x10d428
	adds r1, r5, #0	@ 0010d428 291c
.org 0x10d42a
	adds r2, r6, #0	@ 0010d42a 321c
.org 0x10d42c
	mov r3, r8	@ 0010d42c 4346
.org 0x10d42e
	bl 0x10d3f8	@ 0010d42e fff7e3ff
.org 0x10d432
	add sp, #8	@ 0010d432 02b0
.org 0x10d434
	pop {r3}	@ 0010d434 08bc
.org 0x10d436
	mov r8, r3	@ 0010d436 9846
.org 0x10d438
	pop {r4, r5, r6}	@ 0010d438 70bc
.org 0x10d43a
	pop {r1}	@ 0010d43a 02bc
.org 0x10d43c
	bx r1	@ 0010d43c 0847
