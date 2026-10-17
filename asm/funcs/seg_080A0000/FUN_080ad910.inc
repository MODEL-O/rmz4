@ FUN_080ad910  entry 0x080ad910  size 96
.thumb
.org 0xad910
FUN_080ad910:
	push {r4, r5, lr}	@ 000ad910 30b5
.org 0xad912
	adds r4, r0, #0	@ 000ad912 041c
.org 0xad914
	adds r5, r4, #0	@ 000ad914 251c
.org 0xad916
	adds r5, #84	@ 000ad916 5435
.org 0xad918
	adds r0, r5, #0	@ 000ad918 281c
.org 0xad91a
	movs r1, #0	@ 000ad91a 0021
.org 0xad91c
	movs r2, #0	@ 000ad91c 0022
.org 0xad91e
	bl 0xcd4f8	@ 000ad91e 1ff0ebfd
.org 0xad922
	movs r0, #165	@ 000ad922 a520
.org 0xad924
	bl 0x2b10	@ 000ad924 55f7f4f8
.org 0xad928
	ldrb r0, [r4, #10]	@ 000ad928 a07a
.org 0xad92a
	movs r1, #254	@ 000ad92a fe21
.org 0xad92c
	ands r1, r0	@ 000ad92c 0140
.org 0xad92e
	strb r1, [r4, #10]	@ 000ad92e a172
.org 0xad930
	ldrb r0, [r4, #16]	@ 000ad930 207c
.org 0xad932
	cmp r0, #0	@ 000ad932 0028
.org 0xad934
	bne.n 0xad948	@ 000ad934 08d1
.org 0xad936
	movs r0, #2	@ 000ad936 0220
.org 0xad938
	movs r1, #255	@ 000ad938 ff21
.org 0xad93a
	adds r2, r5, #0	@ 000ad93a 2a1c
.org 0xad93c
	bl 0x2ab88	@ 000ad93c 7df724f9
.org 0xad940
	movs r0, #46	@ 000ad940 2e20
.org 0xad942
	bl 0x6984	@ 000ad942 59f71ff8
.org 0xad946
	b.n 0xad958	@ 000ad946 07e0
.org 0xad948
	movs r0, #2	@ 000ad948 0220
.org 0xad94a
	movs r1, #255	@ 000ad94a ff21
.org 0xad94c
	adds r2, r5, #0	@ 000ad94c 2a1c
.org 0xad94e
	bl 0x2ab88	@ 000ad94e 7df71bf9
.org 0xad952
	movs r0, #47	@ 000ad952 2f20
.org 0xad954
	bl 0x6984	@ 000ad954 59f716f8
.org 0xad958
	ldr r1, [pc, #20]	@ 000ad958 0549
.org 0xad95a
	ldrb r0, [r4, #9]	@ 000ad95a 607a
.org 0xad95c
	lsls r0, r0, #2	@ 000ad95c 8000
.org 0xad95e
	adds r0, r0, r1	@ 000ad95e 4018
.org 0xad960
	movs r1, #4	@ 000ad960 0421
.org 0xad962
	str r1, [r4, #12]	@ 000ad962 e160
.org 0xad964
	ldr r0, [r0, #0]	@ 000ad964 0068
.org 0xad966
	ldr r0, [r0, #16]	@ 000ad966 0069
.org 0xad968
	str r0, [r4, #20]	@ 000ad968 6061
.org 0xad96a
	pop {r4, r5}	@ 000ad96a 30bc
.org 0xad96c
	pop {r0}	@ 000ad96c 01bc
.org 0xad96e
	bx r0	@ 000ad96e 0047
