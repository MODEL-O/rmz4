@ FUN_080fbe70  entry 0x080fbe70  size 54
.thumb
.org 0xfbe70
FUN_080fbe70:
	push {lr}	@ 000fbe70 00b5
.org 0xfbe72
	adds r2, r0, #0	@ 000fbe72 021c
.org 0xfbe74
	adds r0, #140	@ 000fbe74 8c30
.org 0xfbe76
	ldr r0, [r0, #0]	@ 000fbe76 0068
.org 0xfbe78
	movs r1, #128	@ 000fbe78 8021
.org 0xfbe7a
	lsls r1, r1, #2	@ 000fbe7a 8900
.org 0xfbe7c
	ands r0, r1	@ 000fbe7c 0840
.org 0xfbe7e
	cmp r0, #0	@ 000fbe7e 0028
.org 0xfbe80
	beq.n 0xfbea0	@ 000fbe80 0ed0
.org 0xfbe82
	ldr r1, [pc, #24]	@ 000fbe82 0649
.org 0xfbe84
	ldrb r0, [r2, #9]	@ 000fbe84 507a
.org 0xfbe86
	lsls r0, r0, #2	@ 000fbe86 8000
.org 0xfbe88
	adds r0, r0, r1	@ 000fbe88 4018
.org 0xfbe8a
	movs r1, #2	@ 000fbe8a 0221
.org 0xfbe8c
	str r1, [r2, #12]	@ 000fbe8c d160
.org 0xfbe8e
	ldr r0, [r0, #0]	@ 000fbe8e 0068
.org 0xfbe90
	ldr r0, [r0, #8]	@ 000fbe90 8068
.org 0xfbe92
	str r0, [r2, #20]	@ 000fbe92 5061
.org 0xfbe94
	adds r0, r2, #0	@ 000fbe94 101c
.org 0xfbe96
	bl 0xfbeac	@ 000fbe96 00f009f8
.org 0xfbe9a
	b.n 0xfbea6	@ 000fbe9a 04e0
.org 0xfbe9c
	.byte 0xfc,0x92,0x86,0x08	@ 000fbe9c data
.org 0xfbea0
	adds r0, r2, #0	@ 000fbea0 101c
.org 0xfbea2
	bl 0x1cff0	@ 000fbea2 21f7a5f8
