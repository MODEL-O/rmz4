@ FUN_08047688  entry 0x08047688  size 40
.thumb
.org 0x47688
FUN_08047688:
	push {lr}	@ 00047688 00b5
.org 0x4768a
	bl 0x7c7c	@ 0004768a c0f7f7fa
.org 0x4768e
	lsls r0, r0, #16	@ 0004768e 0004
.org 0x47690
	lsrs r0, r0, #16	@ 00047690 000c
.org 0x47692
	adds r1, r0, #0	@ 00047692 011c
.org 0x47694
	movs r0, #15	@ 00047694 0f20
.org 0x47696
	ands r0, r1	@ 00047696 0840
.org 0x47698
	cmp r0, #15	@ 00047698 0f28
.org 0x4769a
	beq.n 0x476aa	@ 0004769a 06d0
.org 0x4769c
	movs r0, #128	@ 0004769c 8020
.org 0x4769e
	lsls r0, r0, #8	@ 0004769e 0002
.org 0x476a0
	ands r0, r1	@ 000476a0 0840
.org 0x476a2
	cmp r0, #0	@ 000476a2 0028
.org 0x476a4
	bne.n 0x476aa	@ 000476a4 01d1
.org 0x476a6
	adds r0, r1, #0	@ 000476a6 081c
.org 0x476a8
	b.n 0x476ac	@ 000476a8 00e0
.org 0x476aa
	movs r0, #0	@ 000476aa 0020
.org 0x476ac
	pop {r1}	@ 000476ac 02bc
.org 0x476ae
	bx r1	@ 000476ae 0847
