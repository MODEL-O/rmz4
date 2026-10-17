@ FUN_080cfcd0  entry 0x080cfcd0  size 40
.thumb
.org 0xcfcd0
FUN_080cfcd0:
	push {r4, r5, lr}	@ 000cfcd0 30b5
.org 0xcfcd2
	adds r5, r0, #0	@ 000cfcd2 051c
.org 0xcfcd4
	ldr r4, [r5, #40]	@ 000cfcd4 ac6a
.org 0xcfcd6
	movs r0, #197	@ 000cfcd6 c520
.org 0xcfcd8
	bl 0x2624	@ 000cfcd8 32f7a4fc
.org 0xcfcdc
	adds r4, #204	@ 000cfcdc cc34
.org 0xcfcde
	ldrh r1, [r4, #0]	@ 000cfcde 2188
.org 0xcfce0
	movs r2, #0	@ 000cfce0 0022
.org 0xcfce2
	ldrsh r0, [r4, r2]	@ 000cfce2 a05e
.org 0xcfce4
	cmp r0, #0	@ 000cfce4 0028
.org 0xcfce6
	beq.n 0xcfcec	@ 000cfce6 01d0
.org 0xcfce8
	subs r0, r1, #1	@ 000cfce8 481e
.org 0xcfcea
	strh r0, [r4, #0]	@ 000cfcea 2080
.org 0xcfcec
	adds r0, r5, #0	@ 000cfcec 281c
.org 0xcfcee
	bl 0xbd3f8	@ 000cfcee edf783fb
.org 0xcfcf2
	pop {r4, r5}	@ 000cfcf2 30bc
.org 0xcfcf4
	pop {r0}	@ 000cfcf4 01bc
.org 0xcfcf6
	bx r0	@ 000cfcf6 0047
