@ FUN_080feb0c  entry 0x080feb0c  size 54
.thumb
.org 0xfeb0c
FUN_080feb0c:
	push {lr}	@ 000feb0c 00b5
.org 0xfeb0e
	adds r2, r0, #0	@ 000feb0e 021c
.org 0xfeb10
	adds r0, #140	@ 000feb10 8c30
.org 0xfeb12
	ldr r0, [r0, #0]	@ 000feb12 0068
.org 0xfeb14
	movs r1, #128	@ 000feb14 8021
.org 0xfeb16
	lsls r1, r1, #2	@ 000feb16 8900
.org 0xfeb18
	ands r0, r1	@ 000feb18 0840
.org 0xfeb1a
	cmp r0, #0	@ 000feb1a 0028
.org 0xfeb1c
	beq.n 0xfeb3c	@ 000feb1c 0ed0
.org 0xfeb1e
	ldr r1, [pc, #24]	@ 000feb1e 0649
.org 0xfeb20
	ldrb r0, [r2, #9]	@ 000feb20 507a
.org 0xfeb22
	lsls r0, r0, #2	@ 000feb22 8000
.org 0xfeb24
	adds r0, r0, r1	@ 000feb24 4018
.org 0xfeb26
	movs r1, #2	@ 000feb26 0221
.org 0xfeb28
	str r1, [r2, #12]	@ 000feb28 d160
.org 0xfeb2a
	ldr r0, [r0, #0]	@ 000feb2a 0068
.org 0xfeb2c
	ldr r0, [r0, #8]	@ 000feb2c 8068
.org 0xfeb2e
	str r0, [r2, #20]	@ 000feb2e 5061
.org 0xfeb30
	adds r0, r2, #0	@ 000feb30 101c
.org 0xfeb32
	bl 0xfeb48	@ 000feb32 00f009f8
.org 0xfeb36
	b.n 0xfeb42	@ 000feb36 04e0
.org 0xfeb38
	.byte 0xfc,0x92,0x86,0x08	@ 000feb38 data
.org 0xfeb3c
	adds r0, r2, #0	@ 000feb3c 101c
.org 0xfeb3e
	bl 0x1cff0	@ 000feb3e 1ef757fa
