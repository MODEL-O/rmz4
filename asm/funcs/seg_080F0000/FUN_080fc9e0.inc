@ FUN_080fc9e0  entry 0x080fc9e0  size 54
.thumb
.org 0xfc9e0
FUN_080fc9e0:
	push {lr}	@ 000fc9e0 00b5
.org 0xfc9e2
	adds r2, r0, #0	@ 000fc9e2 021c
.org 0xfc9e4
	adds r0, #140	@ 000fc9e4 8c30
.org 0xfc9e6
	ldr r0, [r0, #0]	@ 000fc9e6 0068
.org 0xfc9e8
	movs r1, #128	@ 000fc9e8 8021
.org 0xfc9ea
	lsls r1, r1, #2	@ 000fc9ea 8900
.org 0xfc9ec
	ands r0, r1	@ 000fc9ec 0840
.org 0xfc9ee
	cmp r0, #0	@ 000fc9ee 0028
.org 0xfc9f0
	beq.n 0xfca10	@ 000fc9f0 0ed0
.org 0xfc9f2
	ldr r1, [pc, #24]	@ 000fc9f2 0649
.org 0xfc9f4
	ldrb r0, [r2, #9]	@ 000fc9f4 507a
.org 0xfc9f6
	lsls r0, r0, #2	@ 000fc9f6 8000
.org 0xfc9f8
	adds r0, r0, r1	@ 000fc9f8 4018
.org 0xfc9fa
	movs r1, #2	@ 000fc9fa 0221
.org 0xfc9fc
	str r1, [r2, #12]	@ 000fc9fc d160
.org 0xfc9fe
	ldr r0, [r0, #0]	@ 000fc9fe 0068
.org 0xfca00
	ldr r0, [r0, #8]	@ 000fca00 8068
.org 0xfca02
	str r0, [r2, #20]	@ 000fca02 5061
.org 0xfca04
	adds r0, r2, #0	@ 000fca04 101c
.org 0xfca06
	bl 0xfca1c	@ 000fca06 00f009f8
.org 0xfca0a
	b.n 0xfca16	@ 000fca0a 04e0
.org 0xfca0c
	.byte 0xfc,0x92,0x86,0x08	@ 000fca0c data
.org 0xfca10
	adds r0, r2, #0	@ 000fca10 101c
.org 0xfca12
	bl 0x1cff0	@ 000fca12 20f7edfa
