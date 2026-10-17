@ FUN_080b8924  entry 0x080b8924  size 76
.thumb
.org 0xb8924
FUN_080b8924:
	push {r4, lr}	@ 000b8924 10b5
.org 0xb8926
	adds r4, r0, #0	@ 000b8926 041c
.org 0xb8928
	ldrb r0, [r4, #15]	@ 000b8928 e07b
.org 0xb892a
	cmp r0, #0	@ 000b892a 0028
.org 0xb892c
	bne.n 0xb894a	@ 000b892c 0dd1
.org 0xb892e
	adds r0, r4, #0	@ 000b892e 201c
.org 0xb8930
	adds r0, #116	@ 000b8930 7430
.org 0xb8932
	ldr r1, [pc, #60]	@ 000b8932 0f49
.org 0xb8934
	bl 0x5784	@ 000b8934 4cf726ff
.org 0xb8938
	ldr r1, [pc, #56]	@ 000b8938 0e49
.org 0xb893a
	adds r0, r4, #0	@ 000b893a 201c
.org 0xb893c
	bl 0x1cf00	@ 000b893c 64f7e0fa
.org 0xb8940
	movs r0, #16	@ 000b8940 1020
.org 0xb8942
	strb r0, [r4, #18]	@ 000b8942 a074
.org 0xb8944
	ldrb r0, [r4, #15]	@ 000b8944 e07b
.org 0xb8946
	adds r0, #1	@ 000b8946 0130
.org 0xb8948
	strb r0, [r4, #15]	@ 000b8948 e073
.org 0xb894a
	adds r0, r4, #0	@ 000b894a 201c
.org 0xb894c
	bl 0x1cff0	@ 000b894c 64f750fb
.org 0xb8950
	ldrb r0, [r4, #18]	@ 000b8950 a07c
.org 0xb8952
	cmp r0, #0	@ 000b8952 0028
.org 0xb8954
	beq.n 0xb8960	@ 000b8954 04d0
.org 0xb8956
	subs r0, #1	@ 000b8956 0138
.org 0xb8958
	strb r0, [r4, #18]	@ 000b8958 a074
.org 0xb895a
	lsls r0, r0, #24	@ 000b895a 0006
.org 0xb895c
	cmp r0, #0	@ 000b895c 0028
.org 0xb895e
	bne.n 0xb896a	@ 000b895e 04d1
.org 0xb8960
	movs r1, #0	@ 000b8960 0021
.org 0xb8962
	movs r0, #2	@ 000b8962 0220
.org 0xb8964
	strb r0, [r4, #13]	@ 000b8964 6073
.org 0xb8966
	strb r1, [r4, #14]	@ 000b8966 a173
.org 0xb8968
	strb r1, [r4, #15]	@ 000b8968 e173
.org 0xb896a
	pop {r4}	@ 000b896a 10bc
.org 0xb896c
	pop {r0}	@ 000b896c 01bc
.org 0xb896e
	bx r0	@ 000b896e 0047
