@ FUN_080b793c  entry 0x080b793c  size 78
.thumb
.org 0xb793c
FUN_080b793c:
	push {r4, r5, r6, lr}	@ 000b793c 70b5
.org 0xb793e
	adds r5, r0, #0	@ 000b793e 051c
.org 0xb7940
	ldrb r6, [r5, #18]	@ 000b7940 ae7c
.org 0xb7942
	adds r0, r6, #0	@ 000b7942 301c
.org 0xb7944
	movs r1, #12	@ 000b7944 0c21
.org 0xb7946
	bl 0x129198	@ 000b7946 71f027fc
.org 0xb794a
	lsls r0, r0, #24	@ 000b794a 0006
.org 0xb794c
	cmp r0, #0	@ 000b794c 0028
.org 0xb794e
	bne.n 0xb7972	@ 000b794e 10d1
.org 0xb7950
	adds r4, r5, #0	@ 000b7950 2c1c
.org 0xb7952
	adds r4, #84	@ 000b7952 5434
.org 0xb7954
	adds r0, r6, #0	@ 000b7954 301c
.org 0xb7956
	movs r1, #12	@ 000b7956 0c21
.org 0xb7958
	bl 0x129120	@ 000b7958 71f0e2fb
.org 0xb795c
	adds r1, r0, #0	@ 000b795c 011c
.org 0xb795e
	subs r1, #1	@ 000b795e 0139
.org 0xb7960
	lsls r1, r1, #24	@ 000b7960 0906
.org 0xb7962
	lsrs r1, r1, #24	@ 000b7962 090e
.org 0xb7964
	adds r0, r5, #0	@ 000b7964 281c
.org 0xb7966
	adds r0, #180	@ 000b7966 b430
.org 0xb7968
	ldrb r2, [r0, #0]	@ 000b7968 0278
.org 0xb796a
	adds r0, r4, #0	@ 000b796a 201c
.org 0xb796c
	bl 0xa21b4	@ 000b796c eaf722fc
.org 0xb7970
	b.n 0xb7984	@ 000b7970 08e0
.org 0xb7972
	adds r0, r5, #0	@ 000b7972 281c
.org 0xb7974
	adds r0, #84	@ 000b7974 5430
.org 0xb7976
	adds r1, r5, #0	@ 000b7976 291c
.org 0xb7978
	adds r1, #180	@ 000b7978 b431
.org 0xb797a
	ldrb r1, [r1, #0]	@ 000b797a 0978
.org 0xb797c
	adds r2, r5, #0	@ 000b797c 2a1c
.org 0xb797e
	adds r2, #181	@ 000b797e b532
.org 0xb7980
	bl 0xe12bc	@ 000b7980 29f09cfc
.org 0xb7984
	pop {r4, r5, r6}	@ 000b7984 70bc
.org 0xb7986
	pop {r0}	@ 000b7986 01bc
.org 0xb7988
	bx r0	@ 000b7988 0047
