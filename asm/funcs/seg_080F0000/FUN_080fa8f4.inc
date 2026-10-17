@ FUN_080fa8f4  entry 0x080fa8f4  size 144
.thumb
.org 0xfa8f4
FUN_080fa8f4:
	push {r4, r5, lr}	@ 000fa8f4 30b5
.org 0xfa8f6
	adds r3, r0, #0	@ 000fa8f6 031c
.org 0xfa8f8
	ldr r0, [r3, #12]	@ 000fa8f8 d868
.org 0xfa8fa
	ldr r2, [r0, #44]	@ 000fa8fa c26a
.org 0xfa8fc
	ldr r4, [r3, #44]	@ 000fa8fc dc6a
.org 0xfa8fe
	movs r0, #8	@ 000fa8fe 0820
.org 0xfa900
	ldrsb r0, [r2, r0]	@ 000fa900 1056
.org 0xfa902
	cmp r0, #3	@ 000fa902 0328
.org 0xfa904
	bne.n 0xfa914	@ 000fa904 06d1
.org 0xfa906
	ldrb r0, [r2, #9]	@ 000fa906 507a
.org 0xfa908
	cmp r0, #64	@ 000fa908 4028
.org 0xfa90a
	bne.n 0xfa914	@ 000fa90a 03d1
.org 0xfa90c
	adds r1, r4, #0	@ 000fa90c 211c
.org 0xfa90e
	adds r1, #190	@ 000fa90e be31
.org 0xfa910
	movs r0, #1	@ 000fa910 0120
.org 0xfa912
	strb r0, [r1, #0]	@ 000fa912 0870
.org 0xfa914
	movs r0, #8	@ 000fa914 0820
.org 0xfa916
	ldrsb r0, [r2, r0]	@ 000fa916 1056
.org 0xfa918
	cmp r0, #0	@ 000fa918 0028
.org 0xfa91a
	bne.n 0xfa936	@ 000fa91a 0cd1
.org 0xfa91c
	ldr r1, [r4, #88]	@ 000fa91c a16d
.org 0xfa91e
	ldr r0, [r2, #88]	@ 000fa91e 906d
.org 0xfa920
	cmp r1, r0	@ 000fa920 8142
.org 0xfa922
	ble.n 0xfa936	@ 000fa922 08dd
.org 0xfa924
	ldr r1, [pc, #92]	@ 000fa924 1749
.org 0xfa926
	adds r0, r2, r1	@ 000fa926 5018
.org 0xfa928
	ldrb r0, [r0, #0]	@ 000fa928 0078
.org 0xfa92a
	cmp r0, #0	@ 000fa92a 0028
.org 0xfa92c
	beq.n 0xfa936	@ 000fa92c 03d0
.org 0xfa92e
	adds r1, r4, #0	@ 000fa92e 211c
.org 0xfa930
	adds r1, #190	@ 000fa930 be31
.org 0xfa932
	movs r0, #1	@ 000fa932 0120
.org 0xfa934
	strb r0, [r1, #0]	@ 000fa934 0870
.org 0xfa936
	ldr r0, [r3, #20]	@ 000fa936 5869
.org 0xfa938
	movs r1, #1	@ 000fa938 0121
.org 0xfa93a
	ands r0, r1	@ 000fa93a 0840
.org 0xfa93c
	cmp r0, #0	@ 000fa93c 0028
.org 0xfa93e
	beq.n 0xfa97e	@ 000fa93e 1ed0
.org 0xfa940
	movs r5, #0	@ 000fa940 0025
.org 0xfa942
	ldr r1, [r2, #84]	@ 000fa942 516d
.org 0xfa944
	ldr r0, [r4, #84]	@ 000fa944 606d
.org 0xfa946
	cmp r1, r0	@ 000fa946 8142
.org 0xfa948
	ble.n 0xfa94c	@ 000fa948 00dd
.org 0xfa94a
	movs r5, #1	@ 000fa94a 0125
.org 0xfa94c
	adds r0, r4, #0	@ 000fa94c 201c
.org 0xfa94e
	adds r0, #188	@ 000fa94e bc30
.org 0xfa950
	strb r5, [r0, #0]	@ 000fa950 0570
.org 0xfa952
	ldr r1, [r3, #20]	@ 000fa952 5969
.org 0xfa954
	movs r0, #128	@ 000fa954 8020
.org 0xfa956
	lsls r0, r0, #2	@ 000fa956 8000
.org 0xfa958
	ands r0, r1	@ 000fa958 0840
.org 0xfa95a
	cmp r0, #0	@ 000fa95a 0028
.org 0xfa95c
	beq.n 0xfa97e	@ 000fa95c 0fd0
.org 0xfa95e
	movs r0, #128	@ 000fa95e 8020
.org 0xfa960
	lsls r0, r0, #10	@ 000fa960 8002
.org 0xfa962
	ands r1, r0	@ 000fa962 0140
.org 0xfa964
	cmp r1, #0	@ 000fa964 0029
.org 0xfa966
	beq.n 0xfa97e	@ 000fa966 0ad0
.org 0xfa968
	ldr r0, [pc, #28]	@ 000fa968 0748
.org 0xfa96a
	ldr r0, [r0, #0]	@ 000fa96a 0068
.org 0xfa96c
	cmp r0, #0	@ 000fa96c 0028
.org 0xfa96e
	beq.n 0xfa97e	@ 000fa96e 06d0
.org 0xfa970
	movs r1, #3	@ 000fa970 0321
.org 0xfa972
	movs r2, #16	@ 000fa972 1022
.org 0xfa974
	bl 0x3a578	@ 000fa974 3ff700fe
.org 0xfa978
	adds r1, r4, #0	@ 000fa978 211c
.org 0xfa97a
	adds r1, #189	@ 000fa97a bd31
.org 0xfa97c
	strb r0, [r1, #0]	@ 000fa97c 0870
.org 0xfa97e
	pop {r4, r5}	@ 000fa97e 30bc
.org 0xfa980
	pop {r0}	@ 000fa980 01bc
.org 0xfa982
	bx r0	@ 000fa982 0047
