@ FUN_0806367c  entry 0x0806367c  size 128
.thumb
.org 0x6367c
FUN_0806367c:
	push {r4, r5, r6, lr}	@ 0006367c 70b5
.org 0x6367e
	adds r6, r0, #0	@ 0006367e 061c
.org 0x63680
	ldrb r0, [r6, #15]	@ 00063680 f07b
.org 0x63682
	cmp r0, #0	@ 00063682 0028
.org 0x63684
	bne.n 0x63694	@ 00063684 06d1
.org 0x63686
	adds r0, r6, #0	@ 00063686 301c
.org 0x63688
	movs r1, #25	@ 00063688 1921
.org 0x6368a
	bl 0x65a94	@ 0006368a 02f003fa
.org 0x6368e
	ldrb r0, [r6, #15]	@ 0006368e f07b
.org 0x63690
	adds r0, #1	@ 00063690 0130
.org 0x63692
	strb r0, [r6, #15]	@ 00063692 f073
.org 0x63694
	adds r0, r6, #0	@ 00063694 301c
.org 0x63696
	bl 0x1cff0	@ 00063696 b9f7abfc
.org 0x6369a
	adds r0, r6, #0	@ 0006369a 301c
.org 0x6369c
	adds r0, #116	@ 0006369c 7430
.org 0x6369e
	ldr r4, [pc, #92]	@ 0006369e 174c
.org 0x636a0
	ldr r3, [pc, #92]	@ 000636a0 174b
.org 0x636a2
	adds r1, r6, #0	@ 000636a2 311c
.org 0x636a4
	adds r1, #180	@ 000636a4 b431
.org 0x636a6
	ldrb r2, [r1, #0]	@ 000636a6 0a78
.org 0x636a8
	lsls r1, r2, #1	@ 000636a8 5100
.org 0x636aa
	adds r1, r1, r3	@ 000636aa c918
.org 0x636ac
	ldrh r1, [r1, #0]	@ 000636ac 0988
.org 0x636ae
	lsls r1, r1, #2	@ 000636ae 8900
.org 0x636b0
	adds r1, r1, r4	@ 000636b0 0919
.org 0x636b2
	adds r3, r6, #0	@ 000636b2 331c
.org 0x636b4
	adds r3, #113	@ 000636b4 7133
.org 0x636b6
	movs r5, #0	@ 000636b6 0025
.org 0x636b8
	ldrsb r5, [r3, r5]	@ 000636b8 5d57
.org 0x636ba
	ldr r1, [r1, #0]	@ 000636ba 0968
.org 0x636bc
	lsls r3, r5, #2	@ 000636bc ab00
.org 0x636be
	adds r3, r3, r1	@ 000636be 5b18
.org 0x636c0
	ldr r4, [pc, #64]	@ 000636c0 104c
.org 0x636c2
	adds r1, r6, #0	@ 000636c2 311c
.org 0x636c4
	adds r1, #181	@ 000636c4 b531
.org 0x636c6
	ldrb r1, [r1, #0]	@ 000636c6 0978
.org 0x636c8
	lsls r1, r1, #2	@ 000636c8 8900
.org 0x636ca
	adds r1, r1, r4	@ 000636ca 0919
.org 0x636cc
	ldr r1, [r1, #0]	@ 000636cc 0968
.org 0x636ce
	lsls r2, r2, #2	@ 000636ce 9200
.org 0x636d0
	adds r2, r2, r1	@ 000636d0 5218
.org 0x636d2
	ldr r1, [r2, #0]	@ 000636d2 1168
.org 0x636d4
	adds r1, r1, r5	@ 000636d4 4919
.org 0x636d6
	ldrb r1, [r1, #0]	@ 000636d6 0978
.org 0x636d8
	lsls r2, r1, #1	@ 000636d8 4a00
.org 0x636da
	adds r2, r2, r1	@ 000636da 5218
.org 0x636dc
	lsls r2, r2, #3	@ 000636dc d200
.org 0x636de
	ldr r1, [r3, #0]	@ 000636de 1968
.org 0x636e0
	adds r1, r1, r2	@ 000636e0 8918
.org 0x636e2
	bl 0x5784	@ 000636e2 a2f74ff8
.org 0x636e6
	adds r0, r6, #0	@ 000636e6 301c
.org 0x636e8
	adds r0, #196	@ 000636e8 c430
.org 0x636ea
	ldr r1, [r0, #0]	@ 000636ea 0168
.org 0x636ec
	cmp r1, #0	@ 000636ec 0029
.org 0x636ee
	bne.n 0x636f6	@ 000636ee 02d1
.org 0x636f0
	movs r0, #1	@ 000636f0 0120
.org 0x636f2
	strb r0, [r6, #14]	@ 000636f2 b073
.org 0x636f4
	strb r1, [r6, #15]	@ 000636f4 f173
.org 0x636f6
	pop {r4, r5, r6}	@ 000636f6 70bc
.org 0x636f8
	pop {r0}	@ 000636f8 01bc
.org 0x636fa
	bx r0	@ 000636fa 0047
