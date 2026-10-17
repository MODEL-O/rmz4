@ FUN_080cf904  entry 0x080cf904  size 172
.thumb
.org 0xcf904
FUN_080cf904:
	push {r4, r5, r6, r7, lr}	@ 000cf904 f0b5
.org 0xcf906
	adds r6, r0, #0	@ 000cf906 061c
.org 0xcf908
	bl 0x1cc9c	@ 000cf908 4df7c8f9
.org 0xcf90c
	ldrb r0, [r6, #10]	@ 000cf90c b07a
.org 0xcf90e
	movs r2, #1	@ 000cf90e 0122
.org 0xcf910
	movs r1, #0	@ 000cf910 0021
.org 0xcf912
	movs r5, #0	@ 000cf912 0025
.org 0xcf914
	orrs r2, r0	@ 000cf914 0243
.org 0xcf916
	movs r0, #2	@ 000cf916 0220
.org 0xcf918
	orrs r2, r0	@ 000cf918 0243
.org 0xcf91a
	orrs r2, r1	@ 000cf91a 0a43
.org 0xcf91c
	strb r2, [r6, #10]	@ 000cf91c b272
.org 0xcf91e
	ldr r1, [pc, #112]	@ 000cf91e 1c49
.org 0xcf920
	ldrb r0, [r6, #9]	@ 000cf920 707a
.org 0xcf922
	lsls r0, r0, #2	@ 000cf922 8000
.org 0xcf924
	adds r0, r0, r1	@ 000cf924 4018
.org 0xcf926
	movs r1, #1	@ 000cf926 0121
.org 0xcf928
	str r1, [r6, #12]	@ 000cf928 f160
.org 0xcf92a
	ldr r0, [r0, #0]	@ 000cf92a 0068
.org 0xcf92c
	ldr r0, [r0, #4]	@ 000cf92c 4068
.org 0xcf92e
	str r0, [r6, #20]	@ 000cf92e 7061
.org 0xcf930
	movs r0, #4	@ 000cf930 0420
.org 0xcf932
	orrs r2, r0	@ 000cf932 0243
.org 0xcf934
	strb r2, [r6, #10]	@ 000cf934 b272
.org 0xcf936
	adds r4, r6, #0	@ 000cf936 341c
.org 0xcf938
	adds r4, #116	@ 000cf938 7434
.org 0xcf93a
	ldr r1, [pc, #88]	@ 000cf93a 1649
.org 0xcf93c
	adds r7, r6, #0	@ 000cf93c 371c
.org 0xcf93e
	adds r7, #84	@ 000cf93e 5437
.org 0xcf940
	adds r0, r4, #0	@ 000cf940 201c
.org 0xcf942
	adds r2, r7, #0	@ 000cf942 3a1c
.org 0xcf944
	movs r3, #128	@ 000cf944 8023
.org 0xcf946
	bl 0x5760	@ 000cf946 35f70bff
.org 0xcf94a
	str r6, [r4, #44]	@ 000cf94a e662
.org 0xcf94c
	str r5, [r4, #36]	@ 000cf94c 6562
.org 0xcf94e
	ldr r2, [pc, #72]	@ 000cf94e 124a
.org 0xcf950
	adds r0, r2, #0	@ 000cf950 101c
.org 0xcf952
	adds r0, #224	@ 000cf952 e030
.org 0xcf954
	movs r3, #0	@ 000cf954 0023
.org 0xcf956
	ldrsh r1, [r0, r3]	@ 000cf956 c15e
.org 0xcf958
	lsls r0, r1, #2	@ 000cf958 8800
.org 0xcf95a
	adds r3, r0, r1	@ 000cf95a 4318
.org 0xcf95c
	str r3, [r6, #92]	@ 000cf95c f365
.org 0xcf95e
	adds r2, #96	@ 000cf95e 6032
.org 0xcf960
	movs r0, #0	@ 000cf960 0020
.org 0xcf962
	ldrsh r1, [r2, r0]	@ 000cf962 115e
.org 0xcf964
	lsls r0, r1, #2	@ 000cf964 8800
.org 0xcf966
	adds r0, r0, r1	@ 000cf966 4018
.org 0xcf968
	str r0, [r6, #96]	@ 000cf968 3066
.org 0xcf96a
	lsls r0, r0, #8	@ 000cf96a 0002
.org 0xcf96c
	negs r0, r0	@ 000cf96c 4042
.org 0xcf96e
	cmp r0, #0	@ 000cf96e 0028
.org 0xcf970
	bge.n 0xcf974	@ 000cf970 00da
.org 0xcf972
	adds r0, #255	@ 000cf972 ff30
.org 0xcf974
	asrs r0, r0, #8	@ 000cf974 0012
.org 0xcf976
	str r0, [r6, #96]	@ 000cf976 3066
.org 0xcf978
	movs r0, #64	@ 000cf978 4020
.org 0xcf97a
	str r0, [r6, #104]	@ 000cf97a b066
.org 0xcf97c
	ldrb r0, [r6, #16]	@ 000cf97c 307c
.org 0xcf97e
	cmp r0, #0	@ 000cf97e 0028
.org 0xcf980
	bne.n 0xcf99c	@ 000cf980 0cd1
.org 0xcf982
	adds r0, r7, #0	@ 000cf982 381c
.org 0xcf984
	movs r1, #1	@ 000cf984 0121
.org 0xcf986
	movs r2, #0	@ 000cf986 0022
.org 0xcf988
	bl 0xcf8ac	@ 000cf988 fff790ff
.org 0xcf98c
	b.n 0xcf9aa	@ 000cf98c 0de0
.org 0xcf98e
	.byte 0x00	@ 000cf98e data
.org 0xcf98f
	.byte 0x00	@ 000cf98f data
.org 0xcf990
	.byte 0xf4,0x49,0x86,0x08	@ 000cf990 data
.org 0xcf994
	.byte 0x58,0x6d,0x86,0x08	@ 000cf994 data
.org 0xcf998
	.byte 0x0c,0x93,0x12,0x08	@ 000cf998 data
.org 0xcf99c
	lsls r0, r3, #8	@ 000cf99c 1802
.org 0xcf99e
	negs r0, r0	@ 000cf99e 4042
.org 0xcf9a0
	cmp r0, #0	@ 000cf9a0 0028
.org 0xcf9a2
	bge.n 0xcf9a6	@ 000cf9a2 00da
.org 0xcf9a4
	adds r0, #255	@ 000cf9a4 ff30
.org 0xcf9a6
	asrs r0, r0, #8	@ 000cf9a6 0012
.org 0xcf9a8
	str r0, [r6, #92]	@ 000cf9a8 f065
.org 0xcf9aa
	ldr r1, [pc, #20]	@ 000cf9aa 0549
.org 0xcf9ac
	adds r0, r6, #0	@ 000cf9ac 301c
.org 0xcf9ae
	bl 0x1cf00	@ 000cf9ae 4df7a7fa
