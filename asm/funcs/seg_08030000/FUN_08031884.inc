@ FUN_08031884  entry 0x08031884  size 202
.thumb
.org 0x31884
FUN_08031884:
	push {r4, r5, r6, r7, lr}	@ 00031884 f0b5
.org 0x31886
	adds r6, r0, #0	@ 00031886 061c
.org 0x31888
	ldr r0, [r6, #84]	@ 00031888 706d
.org 0x3188a
	ldr r1, [r6, #92]	@ 0003188a f16d
.org 0x3188c
	adds r0, r0, r1	@ 0003188c 4018
.org 0x3188e
	str r0, [r6, #84]	@ 0003188e 7065
.org 0x31890
	adds r7, r6, #0	@ 00031890 371c
.org 0x31892
	adds r7, #180	@ 00031892 b437
.org 0x31894
	movs r0, #186	@ 00031894 ba20
.org 0x31896
	lsls r0, r0, #1	@ 00031896 4000
.org 0x31898
	adds r5, r6, r0	@ 00031898 3518
.org 0x3189a
	ldrb r1, [r5, #0]	@ 0003189a 2978
.org 0x3189c
	lsls r1, r1, #3	@ 0003189c c900
.org 0x3189e
	ldr r4, [pc, #68]	@ 0003189e 114c
.org 0x318a0
	adds r1, r1, r4	@ 000318a0 0919
.org 0x318a2
	adds r0, r6, #0	@ 000318a2 301c
.org 0x318a4
	movs r2, #0	@ 000318a4 0022
.org 0x318a6
	bl 0x2b7f0	@ 000318a6 f9f7a3ff
.org 0x318aa
	ldrb r1, [r5, #0]	@ 000318aa 2978
.org 0x318ac
	lsls r1, r1, #3	@ 000318ac c900
.org 0x318ae
	adds r1, r1, r4	@ 000318ae 0919
.org 0x318b0
	adds r0, r6, #0	@ 000318b0 301c
.org 0x318b2
	movs r2, #1	@ 000318b2 0122
.org 0x318b4
	bl 0x2b7f0	@ 000318b4 f9f79cff
.org 0x318b8
	ldr r0, [r6, #88]	@ 000318b8 b06d
.org 0x318ba
	ldr r1, [r6, #96]	@ 000318ba 316e
.org 0x318bc
	adds r0, r0, r1	@ 000318bc 4018
.org 0x318be
	str r0, [r6, #88]	@ 000318be b065
.org 0x318c0
	adds r0, r6, #0	@ 000318c0 301c
.org 0x318c2
	bl 0x3851c	@ 000318c2 06f02bfe
.org 0x318c6
	lsls r0, r0, #16	@ 000318c6 0004
.org 0x318c8
	asrs r0, r0, #16	@ 000318c8 0014
.org 0x318ca
	ldr r1, [r6, #96]	@ 000318ca 316e
.org 0x318cc
	adds r1, r1, r0	@ 000318cc 0918
.org 0x318ce
	str r1, [r6, #96]	@ 000318ce 3166
.org 0x318d0
	movs r4, #0	@ 000318d0 0024
.org 0x318d2
	movs r0, #166	@ 000318d2 a620
.org 0x318d4
	lsls r0, r0, #1	@ 000318d4 4000
.org 0x318d6
	adds r1, r6, r0	@ 000318d6 3118
.org 0x318d8
	ldrb r0, [r1, #0]	@ 000318d8 0878
.org 0x318da
	cmp r0, #7	@ 000318da 0728
.org 0x318dc
	bhi.n 0x318e8	@ 000318dc 04d8
.org 0x318de
	adds r0, #1	@ 000318de 0130
.org 0x318e0
	strb r0, [r1, #0]	@ 000318e0 0870
.org 0x318e2
	b.n 0x31910	@ 000318e2 15e0
.org 0x318e4
	.byte 0x6c,0x33,0x85,0x08	@ 000318e4 data
.org 0x318e8
	ldrb r0, [r7, #12]	@ 000318e8 387b
.org 0x318ea
	cmp r0, #1	@ 000318ea 0128
.org 0x318ec
	bne.n 0x318fc	@ 000318ec 06d1
.org 0x318ee
	movs r1, #150	@ 000318ee 9621
.org 0x318f0
	lsls r1, r1, #2	@ 000318f0 8900
.org 0x318f2
	adds r0, r6, r1	@ 000318f2 7018
.org 0x318f4
	ldr r0, [r0, #0]	@ 000318f4 0068
.org 0x318f6
	movs r1, #128	@ 000318f6 8021
.org 0x318f8
	lsls r1, r1, #6	@ 000318f8 8901
.org 0x318fa
	b.n 0x31908	@ 000318fa 05e0
.org 0x318fc
	movs r1, #150	@ 000318fc 9621
.org 0x318fe
	lsls r1, r1, #2	@ 000318fe 8900
.org 0x31900
	adds r0, r6, r1	@ 00031900 7018
.org 0x31902
	ldr r0, [r0, #0]	@ 00031902 0068
.org 0x31904
	movs r1, #128	@ 00031904 8021
.org 0x31906
	lsls r1, r1, #8	@ 00031906 0902
.org 0x31908
	ands r0, r1	@ 00031908 0840
.org 0x3190a
	cmp r0, #0	@ 0003190a 0028
.org 0x3190c
	bne.n 0x31910	@ 0003190c 00d1
.org 0x3190e
	movs r4, #1	@ 0003190e 0124
.org 0x31910
	movs r1, #186	@ 00031910 ba21
.org 0x31912
	lsls r1, r1, #1	@ 00031912 4900
.org 0x31914
	adds r0, r6, r1	@ 00031914 7018
.org 0x31916
	ldrb r1, [r0, #0]	@ 00031916 0178
.org 0x31918
	lsls r1, r1, #3	@ 00031918 c900
.org 0x3191a
	ldr r0, [pc, #56]	@ 0003191a 0e48
.org 0x3191c
	adds r1, r1, r0	@ 0003191c 0918
.org 0x3191e
	adds r0, r6, #0	@ 0003191e 301c
.org 0x31920
	movs r2, #0	@ 00031920 0022
.org 0x31922
	bl 0x2bfe8	@ 00031922 faf761fb
.org 0x31926
	lsls r0, r0, #16	@ 00031926 0004
.org 0x31928
	lsrs r1, r0, #16	@ 00031928 010c
.org 0x3192a
	ldr r0, [r6, #96]	@ 0003192a 306e
.org 0x3192c
	cmp r0, #0	@ 0003192c 0028
.org 0x3192e
	bgt.n 0x31938	@ 0003192e 03dc
.org 0x31930
	cmp r1, #0	@ 00031930 0029
.org 0x31932
	bne.n 0x31938	@ 00031932 01d1
.org 0x31934
	cmp r4, #0	@ 00031934 002c
.org 0x31936
	beq.n 0x3194c	@ 00031936 09d0
.org 0x31938
	movs r1, #0	@ 00031938 0021
.org 0x3193a
	movs r0, #2	@ 0003193a 0220
.org 0x3193c
	strb r0, [r6, #14]	@ 0003193c b073
.org 0x3193e
	strb r1, [r6, #15]	@ 0003193e f173
.org 0x31940
	adds r0, r6, #0	@ 00031940 301c
.org 0x31942
	bl 0x386d4	@ 00031942 06f0c7fe
.org 0x31946
	lsls r0, r0, #16	@ 00031946 0004
.org 0x31948
	asrs r0, r0, #16	@ 00031948 0014
.org 0x3194a
	str r0, [r6, #92]	@ 0003194a f065
.org 0x3194c
	pop {r4, r5, r6, r7}	@ 0003194c f0bc
