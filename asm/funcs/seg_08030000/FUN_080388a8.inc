@ FUN_080388a8  entry 0x080388a8  size 38
.thumb
.org 0x388a8
FUN_080388a8:
	push {lr}	@ 000388a8 00b5
.org 0x388aa
	movs r2, #159	@ 000388aa 9f22
.org 0x388ac
	lsls r2, r2, #1	@ 000388ac 5200
.org 0x388ae
	adds r1, r0, r2	@ 000388ae 8118
.org 0x388b0
	ldrb r0, [r1, #0]	@ 000388b0 0878
.org 0x388b2
	cmp r0, #0	@ 000388b2 0028
.org 0x388b4
	bne.n 0x388bc	@ 000388b4 02d1
.org 0x388b6
	movs r0, #144	@ 000388b6 9020
.org 0x388b8
	lsls r0, r0, #3	@ 000388b8 c000
.org 0x388ba
	b.n 0x388ca	@ 000388ba 06e0
.org 0x388bc
	ldrb r0, [r1, #0]	@ 000388bc 0878
.org 0x388be
	movs r1, #128	@ 000388be 8021
.org 0x388c0
	lsls r1, r1, #1	@ 000388c0 4900
.org 0x388c2
	subs r1, r1, r0	@ 000388c2 091a
.org 0x388c4
	lsls r0, r1, #3	@ 000388c4 c800
.org 0x388c6
	adds r0, r0, r1	@ 000388c6 4018
.org 0x388c8
	asrs r0, r0, #1	@ 000388c8 4010
.org 0x388ca
	pop {r1}	@ 000388ca 02bc
.org 0x388cc
	bx r1	@ 000388cc 0847
