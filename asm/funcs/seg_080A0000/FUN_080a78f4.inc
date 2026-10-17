@ FUN_080a78f4  entry 0x080a78f4  size 94
.thumb
.org 0xa78f4
FUN_080a78f4:
	push {r4, r5, lr}	@ 000a78f4 30b5
.org 0xa78f6
	adds r4, r0, #0	@ 000a78f6 041c
.org 0xa78f8
	ldr r0, [r4, #20]	@ 000a78f8 6069
.org 0xa78fa
	movs r1, #1	@ 000a78fa 0121
.org 0xa78fc
	ands r0, r1	@ 000a78fc 0840
.org 0xa78fe
	cmp r0, #0	@ 000a78fe 0028
.org 0xa7900
	beq.n 0xa794c	@ 000a7900 24d0
.org 0xa7902
	movs r0, #53	@ 000a7902 3520
.org 0xa7904
	bl 0x6984	@ 000a7904 5ff73ef8
.org 0xa7908
	ldr r0, [r4, #12]	@ 000a7908 e068
.org 0xa790a
	ldr r0, [r0, #44]	@ 000a790a c06a
.org 0xa790c
	ldr r5, [r4, #44]	@ 000a790c e56a
.org 0xa790e
	movs r2, #0	@ 000a790e 0022
.org 0xa7910
	ldr r1, [r0, #84]	@ 000a7910 416d
.org 0xa7912
	ldr r0, [r5, #84]	@ 000a7912 686d
.org 0xa7914
	cmp r1, r0	@ 000a7914 8142
.org 0xa7916
	ble.n 0xa791a	@ 000a7916 00dd
.org 0xa7918
	movs r2, #1	@ 000a7918 0122
.org 0xa791a
	adds r0, r5, #0	@ 000a791a 281c
.org 0xa791c
	adds r0, #188	@ 000a791c bc30
.org 0xa791e
	strb r2, [r0, #0]	@ 000a791e 0270
.org 0xa7920
	ldr r1, [r4, #20]	@ 000a7920 6169
.org 0xa7922
	movs r0, #128	@ 000a7922 8020
.org 0xa7924
	lsls r0, r0, #2	@ 000a7924 8000
.org 0xa7926
	ands r0, r1	@ 000a7926 0840
.org 0xa7928
	cmp r0, #0	@ 000a7928 0028
.org 0xa792a
	beq.n 0xa794c	@ 000a792a 0fd0
.org 0xa792c
	movs r0, #128	@ 000a792c 8020
.org 0xa792e
	lsls r0, r0, #10	@ 000a792e 8002
.org 0xa7930
	ands r1, r0	@ 000a7930 0140
.org 0xa7932
	cmp r1, #0	@ 000a7932 0029
.org 0xa7934
	beq.n 0xa794c	@ 000a7934 0ad0
.org 0xa7936
	ldr r0, [pc, #28]	@ 000a7936 0748
.org 0xa7938
	ldr r0, [r0, #0]	@ 000a7938 0068
.org 0xa793a
	cmp r0, #0	@ 000a793a 0028
.org 0xa793c
	beq.n 0xa794c	@ 000a793c 06d0
.org 0xa793e
	movs r1, #7	@ 000a793e 0721
.org 0xa7940
	movs r2, #2	@ 000a7940 0222
.org 0xa7942
	bl 0x3a578	@ 000a7942 92f719fe
.org 0xa7946
	adds r1, r5, #0	@ 000a7946 291c
.org 0xa7948
	adds r1, #190	@ 000a7948 be31
.org 0xa794a
	strb r0, [r1, #0]	@ 000a794a 0870
.org 0xa794c
	pop {r4, r5}	@ 000a794c 30bc
.org 0xa794e
	pop {r0}	@ 000a794e 01bc
.org 0xa7950
	bx r0	@ 000a7950 0047
