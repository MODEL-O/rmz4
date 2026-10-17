@ FUN_0802f084  entry 0x0802f084  size 48
.thumb
.org 0x2f084
FUN_0802f084:
	push {lr}	@ 0002f084 00b5
.org 0x2f086
	lsls r0, r0, #16	@ 0002f086 0004
.org 0x2f088
	lsrs r0, r0, #16	@ 0002f088 000c
.org 0x2f08a
	adds r3, r0, #0	@ 0002f08a 031c
.org 0x2f08c
	lsls r1, r1, #24	@ 0002f08c 0906
.org 0x2f08e
	lsrs r1, r1, #24	@ 0002f08e 090e
.org 0x2f090
	adds r2, r1, #0	@ 0002f090 0a1c
.org 0x2f092
	cmp r0, #0	@ 0002f092 0028
.org 0x2f094
	beq.n 0x2f0ae	@ 0002f094 0bd0
.org 0x2f096
	cmp r0, #1	@ 0002f096 0128
.org 0x2f098
	beq.n 0x2f0a2	@ 0002f098 03d0
.org 0x2f09a
	cmp r0, #7	@ 0002f09a 0728
.org 0x2f09c
	bhi.n 0x2f0a6	@ 0002f09c 03d8
.org 0x2f09e
	cmp r1, #0	@ 0002f09e 0029
.org 0x2f0a0
	bne.n 0x2f0ae	@ 0002f0a0 05d1
.org 0x2f0a2
	movs r0, #1	@ 0002f0a2 0120
.org 0x2f0a4
	b.n 0x2f0b0	@ 0002f0a4 04e0
.org 0x2f0a6
	cmp r3, #13	@ 0002f0a6 0d2b
.org 0x2f0a8
	bhi.n 0x2f0ae	@ 0002f0a8 01d8
.org 0x2f0aa
	cmp r2, #0	@ 0002f0aa 002a
.org 0x2f0ac
	bne.n 0x2f0a2	@ 0002f0ac f9d1
.org 0x2f0ae
	movs r0, #0	@ 0002f0ae 0020
.org 0x2f0b0
	pop {r1}	@ 0002f0b0 02bc
.org 0x2f0b2
	bx r1	@ 0002f0b2 0847
