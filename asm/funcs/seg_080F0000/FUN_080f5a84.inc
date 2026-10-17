@ FUN_080f5a84  entry 0x080f5a84  size 94
.thumb
.org 0xf5a84
FUN_080f5a84:
	push {r4, r5, lr}	@ 000f5a84 30b5
.org 0xf5a86
	sub sp, #8	@ 000f5a86 82b0
.org 0xf5a88
	adds r5, r0, #0	@ 000f5a88 051c
.org 0xf5a8a
	movs r0, #187	@ 000f5a8a bb20
.org 0xf5a8c
	lsls r0, r0, #12	@ 000f5a8c 0003
.org 0xf5a8e
	str r0, [sp, #0]	@ 000f5a8e 0090
.org 0xf5a90
	movs r4, #180	@ 000f5a90 b424
.org 0xf5a92
	lsls r4, r4, #10	@ 000f5a92 a402
.org 0xf5a94
	str r4, [sp, #4]	@ 000f5a94 0194
.org 0xf5a96
	mov r0, sp	@ 000f5a96 6846
.org 0xf5a98
	movs r1, #2	@ 000f5a98 0221
.org 0xf5a9a
	movs r2, #0	@ 000f5a9a 0022
.org 0xf5a9c
	bl 0xf5308	@ 000f5a9c fff734fc
.org 0xf5aa0
	adds r1, r5, #0	@ 000f5aa0 291c
.org 0xf5aa2
	adds r1, #180	@ 000f5aa2 b431
.org 0xf5aa4
	str r0, [r1, #0]	@ 000f5aa4 0860
.org 0xf5aa6
	movs r0, #205	@ 000f5aa6 cd20
.org 0xf5aa8
	lsls r0, r0, #12	@ 000f5aa8 0003
.org 0xf5aaa
	str r0, [sp, #0]	@ 000f5aaa 0090
.org 0xf5aac
	str r4, [sp, #4]	@ 000f5aac 0194
.org 0xf5aae
	mov r0, sp	@ 000f5aae 6846
.org 0xf5ab0
	movs r1, #2	@ 000f5ab0 0221
.org 0xf5ab2
	movs r2, #0	@ 000f5ab2 0022
.org 0xf5ab4
	bl 0xf5308	@ 000f5ab4 fff728fc
.org 0xf5ab8
	adds r1, r5, #0	@ 000f5ab8 291c
.org 0xf5aba
	adds r1, #184	@ 000f5aba b831
.org 0xf5abc
	str r0, [r1, #0]	@ 000f5abc 0860
.org 0xf5abe
	movs r0, #197	@ 000f5abe c520
.org 0xf5ac0
	lsls r0, r0, #12	@ 000f5ac0 0003
.org 0xf5ac2
	str r0, [sp, #0]	@ 000f5ac2 0090
.org 0xf5ac4
	movs r0, #196	@ 000f5ac4 c420
.org 0xf5ac6
	lsls r0, r0, #10	@ 000f5ac6 8002
.org 0xf5ac8
	str r0, [sp, #4]	@ 000f5ac8 0190
.org 0xf5aca
	mov r0, sp	@ 000f5aca 6846
.org 0xf5acc
	movs r1, #2	@ 000f5acc 0221
.org 0xf5ace
	movs r2, #0	@ 000f5ace 0022
.org 0xf5ad0
	bl 0xf5308	@ 000f5ad0 fff71afc
.org 0xf5ad4
	adds r1, r5, #0	@ 000f5ad4 291c
.org 0xf5ad6
	adds r1, #188	@ 000f5ad6 bc31
.org 0xf5ad8
	str r0, [r1, #0]	@ 000f5ad8 0860
.org 0xf5ada
	add sp, #8	@ 000f5ada 02b0
.org 0xf5adc
	pop {r4, r5}	@ 000f5adc 30bc
.org 0xf5ade
	pop {r0}	@ 000f5ade 01bc
.org 0xf5ae0
	bx r0	@ 000f5ae0 0047
