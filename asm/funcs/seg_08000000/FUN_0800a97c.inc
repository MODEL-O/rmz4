@ FUN_0800a97c  entry 0x0800a97c  size 80
.thumb
.org 0xa97c
FUN_0800a97c:
	push {r4, r5, r6, lr}	@ 0000a97c 70b5
.org 0xa97e
	adds r5, r0, #0	@ 0000a97e 051c
.org 0xa980
	ldrb r6, [r5, #14]	@ 0000a980 ae7b
.org 0xa982
	cmp r6, #0	@ 0000a982 002e
.org 0xa984
	bne.n 0xa9c6	@ 0000a984 1fd1
.org 0xa986
	ldr r0, [r5, #92]	@ 0000a986 e86d
.org 0xa988
	lsls r0, r0, #16	@ 0000a988 0004
.org 0xa98a
	lsrs r0, r0, #20	@ 0000a98a 000d
.org 0xa98c
	lsls r3, r0, #1	@ 0000a98c 4300
.org 0xa98e
	ldr r4, [pc, #60]	@ 0000a98e 0f4c
.org 0xa990
	adds r3, r3, r4	@ 0000a990 1b19
.org 0xa992
	ldr r1, [r5, #100]	@ 0000a992 696e
.org 0xa994
	movs r2, #71	@ 0000a994 4722
.org 0xa996
	orrs r1, r2	@ 0000a996 1143
.org 0xa998
	strh r1, [r3, #0]	@ 0000a998 1980
.org 0xa99a
	lsls r0, r0, #2	@ 0000a99a 8000
.org 0xa99c
	adds r4, #8	@ 0000a99c 0834
.org 0xa99e
	adds r0, r0, r4	@ 0000a99e 0019
.org 0xa9a0
	str r6, [r0, #0]	@ 0000a9a0 0660
.org 0xa9a2
	ldr r0, [pc, #44]	@ 0000a9a2 0b48
.org 0xa9a4
	ldr r0, [r0, #0]	@ 0000a9a4 0068
.org 0xa9a6
	ldr r2, [pc, #44]	@ 0000a9a6 0b4a
.org 0xa9a8
	adds r0, r0, r2	@ 0000a9a8 8018
.org 0xa9aa
	movs r2, #248	@ 0000a9aa f822
.org 0xa9ac
	lsls r2, r2, #5	@ 0000a9ac 5201
.org 0xa9ae
	ands r1, r2	@ 0000a9ae 1140
.org 0xa9b0
	lsls r1, r1, #3	@ 0000a9b0 c900
.org 0xa9b2
	movs r2, #192	@ 0000a9b2 c022
.org 0xa9b4
	lsls r2, r2, #19	@ 0000a9b4 d204
.org 0xa9b6
	adds r1, r1, r2	@ 0000a9b6 8918
.org 0xa9b8
	movs r2, #128	@ 0000a9b8 8022
.org 0xa9ba
	lsls r2, r2, #2	@ 0000a9ba 9200
.org 0xa9bc
	bl 0x128be0	@ 0000a9bc 1ef110f9
.org 0xa9c0
	ldrb r0, [r5, #14]	@ 0000a9c0 a87b
.org 0xa9c2
	adds r0, #1	@ 0000a9c2 0130
.org 0xa9c4
	strb r0, [r5, #14]	@ 0000a9c4 a873
.org 0xa9c6
	pop {r4, r5, r6}	@ 0000a9c6 70bc
.org 0xa9c8
	pop {r0}	@ 0000a9c8 01bc
.org 0xa9ca
	bx r0	@ 0000a9ca 0047
