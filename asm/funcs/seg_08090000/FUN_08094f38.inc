@ FUN_08094f38  entry 0x08094f38  size 104
.thumb
.org 0x94f38
FUN_08094f38:
	push {r4, r5, r6, lr}	@ 00094f38 70b5
.org 0x94f3a
	adds r4, r0, #0	@ 00094f3a 041c
.org 0x94f3c
	ldrb r0, [r4, #16]	@ 00094f3c 207c
.org 0x94f3e
	ldrb r6, [r4, #17]	@ 00094f3e 667c
.org 0x94f40
	ldrb r1, [r4, #10]	@ 00094f40 a17a
.org 0x94f42
	lsrs r5, r1, #4	@ 00094f42 0d09
.org 0x94f44
	movs r1, #1	@ 00094f44 0121
.org 0x94f46
	ands r5, r1	@ 00094f46 0d40
.org 0x94f48
	cmp r0, #1	@ 00094f48 0128
.org 0x94f4a
	bne.n 0x94f6c	@ 00094f4a 0fd1
.org 0x94f4c
	adds r0, r6, #0	@ 00094f4c 301c
.org 0x94f4e
	movs r1, #3	@ 00094f4e 0321
.org 0x94f50
	bl 0x129120	@ 00094f50 94f0e6f8
.org 0x94f54
	lsls r0, r0, #24	@ 00094f54 0006
.org 0x94f56
	lsrs r0, r0, #24	@ 00094f56 000e
.org 0x94f58
	lsls r1, r0, #1	@ 00094f58 4100
.org 0x94f5a
	adds r1, r1, r0	@ 00094f5a 0918
.org 0x94f5c
	subs r1, r6, r1	@ 00094f5c 711a
.org 0x94f5e
	subs r1, #1	@ 00094f5e 0139
.org 0x94f60
	lsls r0, r1, #1	@ 00094f60 4800
.org 0x94f62
	adds r0, r0, r1	@ 00094f62 4018
.org 0x94f64
	lsls r0, r0, #10	@ 00094f64 8002
.org 0x94f66
	ldr r1, [r4, #84]	@ 00094f66 616d
.org 0x94f68
	subs r3, r1, r0	@ 00094f68 0b1a
.org 0x94f6a
	b.n 0x94f6e	@ 00094f6a 00e0
.org 0x94f6c
	ldr r3, [r4, #84]	@ 00094f6c 636d
.org 0x94f6e
	ldr r0, [pc, #40]	@ 00094f6e 0a48
.org 0x94f70
	ldr r2, [r0, #0]	@ 00094f70 0268
.org 0x94f72
	lsls r1, r5, #1	@ 00094f72 6900
.org 0x94f74
	subs r1, #1	@ 00094f74 0139
.org 0x94f76
	lsls r0, r1, #3	@ 00094f76 c800
.org 0x94f78
	subs r0, r0, r1	@ 00094f78 401a
.org 0x94f7a
	lsls r0, r0, #2	@ 00094f7a 8000
.org 0x94f7c
	subs r0, r0, r1	@ 00094f7c 401a
.org 0x94f7e
	lsls r0, r0, #9	@ 00094f7e 4002
.org 0x94f80
	adds r0, r3, r0	@ 00094f80 1818
.org 0x94f82
	ldr r1, [r2, #84]	@ 00094f82 516d
.org 0x94f84
	subs r1, r1, r0	@ 00094f84 091a
.org 0x94f86
	movs r0, #216	@ 00094f86 d820
.org 0x94f88
	lsls r0, r0, #6	@ 00094f88 8001
.org 0x94f8a
	adds r1, r1, r0	@ 00094f8a 0918
.org 0x94f8c
	movs r0, #216	@ 00094f8c d820
.org 0x94f8e
	lsls r0, r0, #7	@ 00094f8e c001
.org 0x94f90
	cmp r1, r0	@ 00094f90 8142
.org 0x94f92
	bls.n 0x94f9c	@ 00094f92 03d9
.org 0x94f94
	movs r0, #0	@ 00094f94 0020
.org 0x94f96
	b.n 0x94f9e	@ 00094f96 02e0
.org 0x94f98
	.byte 0xf0,0xdb,0x02,0x02	@ 00094f98 data
.org 0x94f9c
	movs r0, #1	@ 00094f9c 0120
.org 0x94f9e
	pop {r4, r5, r6}	@ 00094f9e 70bc
