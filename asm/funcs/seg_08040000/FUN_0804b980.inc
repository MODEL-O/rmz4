@ FUN_0804b980  entry 0x0804b980  size 34
.thumb
.org 0x4b980
FUN_0804b980:
	push {lr}	@ 0004b980 00b5
.org 0x4b982
	bl 0x7c7c	@ 0004b982 bcf77bf9
.org 0x4b986
	lsls r0, r0, #16	@ 0004b986 0004
.org 0x4b988
	lsrs r1, r0, #16	@ 0004b988 010c
.org 0x4b98a
	cmp r1, #15	@ 0004b98a 0f29
.org 0x4b98c
	bne.n 0x4b990	@ 0004b98c 00d1
.org 0x4b98e
	movs r1, #0	@ 0004b98e 0021
.org 0x4b990
	movs r0, #128	@ 0004b990 8020
.org 0x4b992
	lsls r0, r0, #8	@ 0004b992 0002
.org 0x4b994
	ands r0, r1	@ 0004b994 0840
.org 0x4b996
	cmp r0, #0	@ 0004b996 0028
.org 0x4b998
	beq.n 0x4b99c	@ 0004b998 00d0
.org 0x4b99a
	movs r1, #0	@ 0004b99a 0021
.org 0x4b99c
	adds r0, r1, #0	@ 0004b99c 081c
.org 0x4b99e
	pop {r1}	@ 0004b99e 02bc
.org 0x4b9a0
	bx r1	@ 0004b9a0 0847
