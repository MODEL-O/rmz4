@ FUN_080d5938  entry 0x080d5938  size 40
.thumb
.org 0xd5938
FUN_080d5938:
	push {lr}	@ 000d5938 00b5
.org 0xd593a
	adds r2, r0, #0	@ 000d593a 021c
.org 0xd593c
	movs r3, #0	@ 000d593c 0023
.org 0xd593e
	movs r1, #0	@ 000d593e 0021
.org 0xd5940
	ldrb r0, [r2, #0]	@ 000d5940 1078
.org 0xd5942
	cmp r0, #0	@ 000d5942 0028
.org 0xd5944
	beq.n 0xd595a	@ 000d5944 09d0
.org 0xd5946
	adds r0, r1, #1	@ 000d5946 481c
.org 0xd5948
	lsls r0, r0, #24	@ 000d5948 0006
.org 0xd594a
	lsrs r1, r0, #24	@ 000d594a 010e
.org 0xd594c
	cmp r1, #15	@ 000d594c 0f29
.org 0xd594e
	bhi.n 0xd595a	@ 000d594e 04d8
.org 0xd5950
	adds r0, r2, r1	@ 000d5950 5018
.org 0xd5952
	ldrb r0, [r0, #0]	@ 000d5952 0078
.org 0xd5954
	cmp r0, #0	@ 000d5954 0028
.org 0xd5956
	bne.n 0xd5946	@ 000d5956 f6d1
.org 0xd5958
	adds r3, r1, #0	@ 000d5958 0b1c
.org 0xd595a
	adds r0, r3, #0	@ 000d595a 181c
.org 0xd595c
	pop {r1}	@ 000d595c 02bc
.org 0xd595e
	bx r1	@ 000d595e 0847
