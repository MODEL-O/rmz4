@ FUN_080379f8  entry 0x080379f8  size 90
.thumb
.org 0x379f8
FUN_080379f8:
	push {r4, r5, lr}	@ 000379f8 30b5
.org 0x379fa
	adds r5, r0, #0	@ 000379fa 051c
.org 0x379fc
	movs r0, #129	@ 000379fc 8120
.org 0x379fe
	lsls r0, r0, #1	@ 000379fe 4000
.org 0x37a00
	adds r4, r5, r0	@ 00037a00 2c18
.org 0x37a02
	ldrb r0, [r4, #0]	@ 00037a02 2078
.org 0x37a04
	cmp r0, #0	@ 00037a04 0028
.org 0x37a06
	bne.n 0x37a20	@ 00037a06 0bd1
.org 0x37a08
	ldr r1, [pc, #72]	@ 00037a08 1249
.org 0x37a0a
	adds r0, r5, #0	@ 00037a0a 281c
.org 0x37a0c
	bl 0x1cf00	@ 00037a0c e5f778fa
.org 0x37a10
	movs r0, #169	@ 00037a10 a920
.org 0x37a12
	lsls r0, r0, #1	@ 00037a12 4000
.org 0x37a14
	adds r1, r5, r0	@ 00037a14 2918
.org 0x37a16
	movs r0, #4	@ 00037a16 0420
.org 0x37a18
	strb r0, [r1, #0]	@ 00037a18 0870
.org 0x37a1a
	ldrb r0, [r4, #0]	@ 00037a1a 2078
.org 0x37a1c
	adds r0, #1	@ 00037a1c 0130
.org 0x37a1e
	strb r0, [r4, #0]	@ 00037a1e 2070
.org 0x37a20
	movs r0, #169	@ 00037a20 a920
.org 0x37a22
	lsls r0, r0, #1	@ 00037a22 4000
.org 0x37a24
	adds r1, r5, r0	@ 00037a24 2918
.org 0x37a26
	ldrb r0, [r1, #0]	@ 00037a26 0878
.org 0x37a28
	subs r0, #1	@ 00037a28 0138
.org 0x37a2a
	strb r0, [r1, #0]	@ 00037a2a 0870
.org 0x37a2c
	lsls r0, r0, #24	@ 00037a2c 0006
.org 0x37a2e
	lsrs r0, r0, #24	@ 00037a2e 000e
.org 0x37a30
	cmp r0, #255	@ 00037a30 ff28
.org 0x37a32
	bne.n 0x37a4c	@ 00037a32 0bd1
.org 0x37a34
	movs r1, #160	@ 00037a34 a021
.org 0x37a36
	lsls r1, r1, #3	@ 00037a36 c900
.org 0x37a38
	adds r0, r5, #0	@ 00037a38 281c
.org 0x37a3a
	movs r2, #4	@ 00037a3a 0422
.org 0x37a3c
	movs r3, #1	@ 00037a3c 0123
.org 0x37a3e
	bl 0x1cfc8	@ 00037a3e e5f7c3fa
.org 0x37a42
	movs r0, #128	@ 00037a42 8020
.org 0x37a44
	lsls r0, r0, #1	@ 00037a44 4000
.org 0x37a46
	adds r1, r5, r0	@ 00037a46 2918
.org 0x37a48
	movs r0, #0	@ 00037a48 0020
.org 0x37a4a
	strb r0, [r1, #0]	@ 00037a4a 0870
.org 0x37a4c
	pop {r4, r5}	@ 00037a4c 30bc
.org 0x37a4e
	pop {r0}	@ 00037a4e 01bc
.org 0x37a50
	bx r0	@ 00037a50 0047
