@ FUN_080488e4  entry 0x080488e4  size 40
.thumb
.org 0x488e4
FUN_080488e4:
	push {lr}	@ 000488e4 00b5
.org 0x488e6
	bl 0x7c7c	@ 000488e6 bff7c9f9
.org 0x488ea
	lsls r0, r0, #16	@ 000488ea 0004
.org 0x488ec
	lsrs r0, r0, #16	@ 000488ec 000c
.org 0x488ee
	adds r1, r0, #0	@ 000488ee 011c
.org 0x488f0
	movs r0, #15	@ 000488f0 0f20
.org 0x488f2
	ands r0, r1	@ 000488f2 0840
.org 0x488f4
	cmp r0, #15	@ 000488f4 0f28
.org 0x488f6
	beq.n 0x48906	@ 000488f6 06d0
.org 0x488f8
	movs r0, #128	@ 000488f8 8020
.org 0x488fa
	lsls r0, r0, #8	@ 000488fa 0002
.org 0x488fc
	ands r0, r1	@ 000488fc 0840
.org 0x488fe
	cmp r0, #0	@ 000488fe 0028
.org 0x48900
	bne.n 0x48906	@ 00048900 01d1
.org 0x48902
	adds r0, r1, #0	@ 00048902 081c
.org 0x48904
	b.n 0x48908	@ 00048904 00e0
.org 0x48906
	movs r0, #0	@ 00048906 0020
.org 0x48908
	pop {r1}	@ 00048908 02bc
.org 0x4890a
	bx r1	@ 0004890a 0847
