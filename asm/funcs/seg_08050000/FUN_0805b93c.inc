@ FUN_0805b93c  entry 0x0805b93c  size 42
.thumb
.org 0x5b93c
FUN_0805b93c:
	push {r4, r5, r6, lr}	@ 0005b93c 70b5
.org 0x5b93e
	sub sp, #16	@ 0005b93e 84b0
.org 0x5b940
	adds r4, r0, #0	@ 0005b940 041c
.org 0x5b942
	ldr r0, [pc, #28]	@ 0005b942 0748
.org 0x5b944
	ldr r1, [r0, #4]	@ 0005b944 4168
.org 0x5b946
	ldr r0, [r0, #0]	@ 0005b946 0068
.org 0x5b948
	str r0, [sp, #0]	@ 0005b948 0090
.org 0x5b94a
	str r1, [sp, #4]	@ 0005b94a 0191
.org 0x5b94c
	ldrb r0, [r4, #15]	@ 0005b94c e07b
.org 0x5b94e
	cmp r0, #7	@ 0005b94e 0728
.org 0x5b950
	bls.n 0x5b954	@ 0005b950 00d9
.org 0x5b952
	b.n 0x5bc06	@ 0005b952 58e1
.org 0x5b954
	lsls r0, r0, #2	@ 0005b954 8000
.org 0x5b956
	ldr r1, [pc, #12]	@ 0005b956 0349
.org 0x5b958
	adds r0, r0, r1	@ 0005b958 4018
.org 0x5b95a
	ldr r0, [r0, #0]	@ 0005b95a 0068
.org 0x5b95c
	mov pc, r0	@ 0005b95c 8746
.org 0x5b95e
	.byte 0x00	@ 0005b95e data
.org 0x5b95f
	.byte 0x00	@ 0005b95f data
.org 0x5b960
	.byte 0xd0,0x96,0x12,0x08	@ 0005b960 data
.org 0x5b964
	.byte 0x68,0xb9,0x05,0x08	@ 0005b964 data
