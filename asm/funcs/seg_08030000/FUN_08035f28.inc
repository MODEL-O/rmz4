@ FUN_08035f28  entry 0x08035f28  size 78
.thumb
.org 0x35f28
FUN_08035f28:
	push {r4, r5, lr}	@ 00035f28 30b5
.org 0x35f2a
	adds r4, r0, #0	@ 00035f2a 041c
.org 0x35f2c
	movs r0, #129	@ 00035f2c 8120
.org 0x35f2e
	lsls r0, r0, #1	@ 00035f2e 4000
.org 0x35f30
	adds r5, r4, r0	@ 00035f30 2518
.org 0x35f32
	ldrb r0, [r5, #0]	@ 00035f32 2878
.org 0x35f34
	cmp r0, #0	@ 00035f34 0028
.org 0x35f36
	bne.n 0x35f4c	@ 00035f36 09d1
.org 0x35f38
	movs r1, #200	@ 00035f38 c821
.org 0x35f3a
	lsls r1, r1, #5	@ 00035f3a 4901
.org 0x35f3c
	adds r0, r4, #0	@ 00035f3c 201c
.org 0x35f3e
	movs r2, #7	@ 00035f3e 0722
.org 0x35f40
	movs r3, #1	@ 00035f40 0123
.org 0x35f42
	bl 0x1cfc8	@ 00035f42 e7f741f8
.org 0x35f46
	ldrb r0, [r5, #0]	@ 00035f46 2878
.org 0x35f48
	adds r0, #1	@ 00035f48 0130
.org 0x35f4a
	strb r0, [r5, #0]	@ 00035f4a 2870
.org 0x35f4c
	movs r1, #200	@ 00035f4c c821
.org 0x35f4e
	lsls r1, r1, #5	@ 00035f4e 4901
.org 0x35f50
	adds r0, r4, #0	@ 00035f50 201c
.org 0x35f52
	bl 0x3a3b0	@ 00035f52 04f02dfa
.org 0x35f56
	movs r1, #150	@ 00035f56 9621
.org 0x35f58
	lsls r1, r1, #2	@ 00035f58 8900
.org 0x35f5a
	adds r0, r4, r1	@ 00035f5a 6018
.org 0x35f5c
	ldr r1, [r0, #0]	@ 00035f5c 0168
.org 0x35f5e
	movs r0, #128	@ 00035f5e 8020
.org 0x35f60
	ands r1, r0	@ 00035f60 0140
.org 0x35f62
	cmp r1, #0	@ 00035f62 0029
.org 0x35f64
	bne.n 0x35f70	@ 00035f64 04d1
.org 0x35f66
	adds r0, #129	@ 00035f66 8130
.org 0x35f68
	adds r2, r4, r0	@ 00035f68 2218
.org 0x35f6a
	movs r0, #3	@ 00035f6a 0320
.org 0x35f6c
	strb r0, [r2, #0]	@ 00035f6c 1070
.org 0x35f6e
	strb r1, [r5, #0]	@ 00035f6e 2970
.org 0x35f70
	pop {r4, r5}	@ 00035f70 30bc
.org 0x35f72
	pop {r0}	@ 00035f72 01bc
.org 0x35f74
	bx r0	@ 00035f74 0047
