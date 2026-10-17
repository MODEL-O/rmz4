@ FUN_0810217c  entry 0x0810217c  size 122
.thumb
.org 0x10217c
FUN_0810217c:
	push {r4, r5, r6, lr}	@ 0010217c 70b5
.org 0x10217e
	adds r6, r0, #0	@ 0010217e 061c
.org 0x102180
	ldr r1, [pc, #116]	@ 00102180 1d49
.org 0x102182
	ldrb r0, [r6, #9]	@ 00102182 707a
.org 0x102184
	lsls r0, r0, #2	@ 00102184 8000
.org 0x102186
	adds r0, r0, r1	@ 00102186 4018
.org 0x102188
	movs r1, #1	@ 00102188 0121
.org 0x10218a
	str r1, [r6, #12]	@ 0010218a f160
.org 0x10218c
	ldr r0, [r0, #0]	@ 0010218c 0068
.org 0x10218e
	ldr r0, [r0, #4]	@ 0010218e 4068
.org 0x102190
	str r0, [r6, #20]	@ 00102190 7061
.org 0x102192
	movs r4, #205	@ 00102192 cd24
.org 0x102194
	ldr r0, [pc, #100]	@ 00102194 1948
.org 0x102196
	lsls r2, r4, #1	@ 00102196 6200
.org 0x102198
	adds r0, r0, r2	@ 00102198 8018
.org 0x10219a
	movs r1, #240	@ 0010219a f021
.org 0x10219c
	lsls r1, r1, #1	@ 0010219c 4900
.org 0x10219e
	strh r1, [r0, #0]	@ 0010219e 0180
.org 0x1021a0
	ldr r5, [pc, #92]	@ 001021a0 174d
.org 0x1021a2
	adds r5, r5, r2	@ 001021a2 ad18
.org 0x1021a4
	movs r0, #10	@ 001021a4 0a20
.org 0x1021a6
	strh r0, [r5, #0]	@ 001021a6 2880
.org 0x1021a8
	lsls r4, r4, #4	@ 001021a8 2401
.org 0x1021aa
	movs r0, #205	@ 001021aa cd20
.org 0x1021ac
	lsls r0, r0, #2	@ 001021ac 8000
.org 0x1021ae
	adds r4, r4, r0	@ 001021ae 2418
.org 0x1021b0
	ldr r0, [pc, #80]	@ 001021b0 1448
.org 0x1021b2
	adds r0, r4, r0	@ 001021b2 2018
.org 0x1021b4
	ldrh r2, [r0, #6]	@ 001021b4 c288
.org 0x1021b6
	lsrs r2, r2, #6	@ 001021b6 9209
.org 0x1021b8
	subs r1, r1, r2	@ 001021b8 891a
.org 0x1021ba
	lsls r1, r1, #5	@ 001021ba 4901
.org 0x1021bc
	movs r2, #128	@ 001021bc 8022
.org 0x1021be
	lsls r2, r2, #9	@ 001021be 5202
.org 0x1021c0
	adds r1, r1, r2	@ 001021c0 8918
.org 0x1021c2
	bl 0x1d30	@ 001021c2 fff6b5fd
.org 0x1021c6
	ldr r0, [pc, #64]	@ 001021c6 1048
.org 0x1021c8
	adds r4, r4, r0	@ 001021c8 2418
.org 0x1021ca
	ldrh r1, [r5, #0]	@ 001021ca 2988
.org 0x1021cc
	ldrb r0, [r4, #7]	@ 001021cc e079
.org 0x1021ce
	subs r1, r1, r0	@ 001021ce 091a
.org 0x1021d0
	lsls r1, r1, #5	@ 001021d0 4901
.org 0x1021d2
	movs r2, #128	@ 001021d2 8022
.org 0x1021d4
	lsls r2, r2, #2	@ 001021d4 9200
.org 0x1021d6
	adds r1, r1, r2	@ 001021d6 8918
.org 0x1021d8
	adds r0, r4, #0	@ 001021d8 201c
.org 0x1021da
	bl 0x2208	@ 001021da 00f715f8
.org 0x1021de
	ldrb r1, [r6, #10]	@ 001021de b17a
.org 0x1021e0
	movs r0, #254	@ 001021e0 fe20
.org 0x1021e2
	ands r0, r1	@ 001021e2 0840
.org 0x1021e4
	movs r1, #2	@ 001021e4 0221
.org 0x1021e6
	orrs r0, r1	@ 001021e6 0843
.org 0x1021e8
	strb r0, [r6, #10]	@ 001021e8 b072
.org 0x1021ea
	adds r0, r6, #0	@ 001021ea 301c
.org 0x1021ec
	bl 0x10220c	@ 001021ec 00f00ef8
.org 0x1021f0
	pop {r4, r5, r6}	@ 001021f0 70bc
.org 0x1021f2
	pop {r0}	@ 001021f2 01bc
.org 0x1021f4
	bx r0	@ 001021f4 0047
