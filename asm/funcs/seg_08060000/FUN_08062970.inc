@ FUN_08062970  entry 0x08062970  size 168
.thumb
.org 0x62970
FUN_08062970:
	push {r4, r5, r6, lr}	@ 00062970 70b5
.org 0x62972
	adds r6, r0, #0	@ 00062972 061c
.org 0x62974
	ldrb r3, [r6, #15]	@ 00062974 f37b
.org 0x62976
	cmp r3, #0	@ 00062976 002b
.org 0x62978
	bne.n 0x6299e	@ 00062978 11d1
.org 0x6297a
	adds r2, r6, #0	@ 0006297a 321c
.org 0x6297c
	adds r2, #188	@ 0006297c bc32
.org 0x6297e
	ldr r1, [r2, #0]	@ 0006297e 1168
.org 0x62980
	cmp r1, #0	@ 00062980 0029
.org 0x62982
	beq.n 0x6298c	@ 00062982 03d0
.org 0x62984
	adds r1, #180	@ 00062984 b431
.org 0x62986
	movs r0, #1	@ 00062986 0120
.org 0x62988
	strb r0, [r1, #0]	@ 00062988 0870
.org 0x6298a
	str r3, [r2, #0]	@ 0006298a 1360
.org 0x6298c
	adds r0, r6, #0	@ 0006298c 301c
.org 0x6298e
	movs r1, #3	@ 0006298e 0321
.org 0x62990
	bl 0x65a94	@ 00062990 03f080f8
.org 0x62994
	movs r0, #32	@ 00062994 2020
.org 0x62996
	strb r0, [r6, #18]	@ 00062996 b074
.org 0x62998
	ldrb r0, [r6, #15]	@ 00062998 f07b
.org 0x6299a
	adds r0, #1	@ 0006299a 0130
.org 0x6299c
	strb r0, [r6, #15]	@ 0006299c f073
.org 0x6299e
	adds r0, r6, #0	@ 0006299e 301c
.org 0x629a0
	bl 0x1cff0	@ 000629a0 baf726fb
.org 0x629a4
	adds r0, r6, #0	@ 000629a4 301c
.org 0x629a6
	adds r0, #116	@ 000629a6 7430
.org 0x629a8
	ldr r4, [pc, #108]	@ 000629a8 1b4c
.org 0x629aa
	ldr r3, [pc, #112]	@ 000629aa 1c4b
.org 0x629ac
	adds r1, r6, #0	@ 000629ac 311c
.org 0x629ae
	adds r1, #180	@ 000629ae b431
.org 0x629b0
	ldrb r2, [r1, #0]	@ 000629b0 0a78
.org 0x629b2
	lsls r1, r2, #1	@ 000629b2 5100
.org 0x629b4
	adds r1, r1, r3	@ 000629b4 c918
.org 0x629b6
	ldrh r1, [r1, #0]	@ 000629b6 0988
.org 0x629b8
	lsls r1, r1, #2	@ 000629b8 8900
.org 0x629ba
	adds r1, r1, r4	@ 000629ba 0919
.org 0x629bc
	adds r3, r6, #0	@ 000629bc 331c
.org 0x629be
	adds r3, #113	@ 000629be 7133
.org 0x629c0
	movs r5, #0	@ 000629c0 0025
.org 0x629c2
	ldrsb r5, [r3, r5]	@ 000629c2 5d57
.org 0x629c4
	ldr r1, [r1, #0]	@ 000629c4 0968
.org 0x629c6
	lsls r3, r5, #2	@ 000629c6 ab00
.org 0x629c8
	adds r3, r3, r1	@ 000629c8 5b18
.org 0x629ca
	ldr r4, [pc, #84]	@ 000629ca 154c
.org 0x629cc
	adds r1, r6, #0	@ 000629cc 311c
.org 0x629ce
	adds r1, #181	@ 000629ce b531
.org 0x629d0
	ldrb r1, [r1, #0]	@ 000629d0 0978
.org 0x629d2
	lsls r1, r1, #2	@ 000629d2 8900
.org 0x629d4
	adds r1, r1, r4	@ 000629d4 0919
.org 0x629d6
	ldr r1, [r1, #0]	@ 000629d6 0968
.org 0x629d8
	lsls r2, r2, #2	@ 000629d8 9200
.org 0x629da
	adds r2, r2, r1	@ 000629da 5218
.org 0x629dc
	ldr r1, [r2, #0]	@ 000629dc 1168
.org 0x629de
	adds r1, r1, r5	@ 000629de 4919
.org 0x629e0
	ldrb r1, [r1, #0]	@ 000629e0 0978
.org 0x629e2
	lsls r2, r1, #1	@ 000629e2 4a00
.org 0x629e4
	adds r2, r2, r1	@ 000629e4 5218
.org 0x629e6
	lsls r2, r2, #3	@ 000629e6 d200
.org 0x629e8
	ldr r1, [r3, #0]	@ 000629e8 1968
.org 0x629ea
	adds r1, r1, r2	@ 000629ea 8918
.org 0x629ec
	bl 0x5784	@ 000629ec a2f7cafe
.org 0x629f0
	ldrb r0, [r6, #18]	@ 000629f0 b07c
.org 0x629f2
	cmp r0, #0	@ 000629f2 0028
.org 0x629f4
	beq.n 0x62a00	@ 000629f4 04d0
.org 0x629f6
	subs r0, #1	@ 000629f6 0138
.org 0x629f8
	strb r0, [r6, #18]	@ 000629f8 b074
.org 0x629fa
	lsls r0, r0, #24	@ 000629fa 0006
.org 0x629fc
	cmp r0, #0	@ 000629fc 0028
.org 0x629fe
	bne.n 0x62a12	@ 000629fe 08d1
.org 0x62a00
	adds r0, r6, #0	@ 00062a00 301c
.org 0x62a02
	adds r0, #115	@ 00062a02 7330
.org 0x62a04
	ldrb r0, [r0, #0]	@ 00062a04 0078
.org 0x62a06
	cmp r0, #3	@ 00062a06 0328
.org 0x62a08
	bne.n 0x62a12	@ 00062a08 03d1
.org 0x62a0a
	movs r1, #0	@ 00062a0a 0021
.org 0x62a0c
	movs r0, #2	@ 00062a0c 0220
.org 0x62a0e
	strb r0, [r6, #14]	@ 00062a0e b073
.org 0x62a10
	strb r1, [r6, #15]	@ 00062a10 f173
.org 0x62a12
	pop {r4, r5, r6}	@ 00062a12 70bc
.org 0x62a14
	pop {r0}	@ 00062a14 01bc
.org 0x62a16
	bx r0	@ 00062a16 0047
