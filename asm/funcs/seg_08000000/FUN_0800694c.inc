@ FUN_0800694c  entry 0x0800694c  size 50
.thumb
.org 0x694c
FUN_0800694c:
	push {r4, r5, lr}	@ 0000694c 30b5
.org 0x694e
	movs r2, #0	@ 0000694e 0022
.org 0x6950
	ldr r5, [pc, #24]	@ 00006950 064d
.org 0x6952
	movs r4, #7	@ 00006952 0724
.org 0x6954
	movs r3, #1	@ 00006954 0123
.org 0x6956
	adds r0, r2, #4	@ 00006956 101d
.org 0x6958
	asrs r1, r0, #3	@ 00006958 c110
.org 0x695a
	adds r1, r1, r5	@ 0000695a 4919
.org 0x695c
	ldrb r1, [r1, #0]	@ 0000695c 0978
.org 0x695e
	ands r0, r4	@ 0000695e 2040
.org 0x6960
	asrs r1, r0	@ 00006960 0141
.org 0x6962
	ands r1, r3	@ 00006962 1940
.org 0x6964
	cmp r1, #0	@ 00006964 0029
.org 0x6966
	bne.n 0x6970	@ 00006966 03d1
.org 0x6968
	movs r0, #0	@ 00006968 0020
.org 0x696a
	b.n 0x697c	@ 0000696a 07e0
.org 0x696c
	.byte 0x70,0x0a,0x00,0x02	@ 0000696c data
.org 0x6970
	adds r0, r2, #1	@ 00006970 501c
.org 0x6972
	lsls r0, r0, #24	@ 00006972 0006
.org 0x6974
	lsrs r2, r0, #24	@ 00006974 020e
.org 0x6976
	cmp r2, #95	@ 00006976 5f2a
.org 0x6978
	bls.n 0x6956	@ 00006978 edd9
.org 0x697a
	movs r0, #1	@ 0000697a 0120
.org 0x697c
	pop {r4, r5}	@ 0000697c 30bc
