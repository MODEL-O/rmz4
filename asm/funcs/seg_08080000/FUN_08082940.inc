@ FUN_08082940  entry 0x08082940  size 32
.thumb
.org 0x82940
FUN_08082940:
	push {r4, r5, r6, r7, lr}	@ 00082940 f0b5
.org 0x82942
	sub sp, #8	@ 00082942 82b0
.org 0x82944
	adds r5, r0, #0	@ 00082944 051c
.org 0x82946
	ldrb r0, [r5, #14]	@ 00082946 a87b
.org 0x82948
	cmp r0, #4	@ 00082948 0428
.org 0x8294a
	bls.n 0x8294e	@ 0008294a 00d9
.org 0x8294c
	b.n 0x82b60	@ 0008294c 08e1
.org 0x8294e
	lsls r0, r0, #2	@ 0008294e 8000
.org 0x82950
	ldr r1, [pc, #4]	@ 00082950 0149
.org 0x82952
	adds r0, r0, r1	@ 00082952 4018
.org 0x82954
	ldr r0, [r0, #0]	@ 00082954 0068
.org 0x82956
	mov pc, r0	@ 00082956 8746
.org 0x82958
	.byte 0x5c,0x29,0x08,0x08	@ 00082958 data
.org 0x8295c
	.byte 0x70,0x29,0x08,0x08	@ 0008295c data
