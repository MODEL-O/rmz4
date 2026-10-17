@ FUN_080053ac  entry 0x080053ac  size 108
.thumb
.org 0x53ac
FUN_080053ac:
	push {r4, r5, r6, lr}	@ 000053ac 70b5
.org 0x53ae
	mov r6, r9	@ 000053ae 4e46
.org 0x53b0
	mov r5, r8	@ 000053b0 4546
.org 0x53b2
	push {r5, r6}	@ 000053b2 60b4
.org 0x53b4
	adds r5, r0, #0	@ 000053b4 051c
.org 0x53b6
	adds r6, r1, #0	@ 000053b6 0e1c
.org 0x53b8
	mov r9, r2	@ 000053b8 9146
.org 0x53ba
	adds r0, r6, #0	@ 000053ba 301c
.org 0x53bc
	movs r1, #15	@ 000053bc 0f21
.org 0x53be
	bl 0x129120	@ 000053be 23f1affe
.org 0x53c2
	adds r4, r0, #0	@ 000053c2 041c
.org 0x53c4
	mov r0, r9	@ 000053c4 4846
.org 0x53c6
	movs r1, #10	@ 000053c6 0a21
.org 0x53c8
	bl 0x129120	@ 000053c8 23f1aafe
.org 0x53cc
	ldr r2, [r5, #12]	@ 000053cc ea68
.org 0x53ce
	ldrb r1, [r2, #0]	@ 000053ce 1178
.org 0x53d0
	muls r0, r1	@ 000053d0 4843
.org 0x53d2
	adds r0, r0, r4	@ 000053d2 0019
.org 0x53d4
	adds r0, r0, r2	@ 000053d4 8018
.org 0x53d6
	ldrb r0, [r0, #4]	@ 000053d6 0079
.org 0x53d8
	mov r8, r0	@ 000053d8 8046
.org 0x53da
	adds r0, r6, #0	@ 000053da 301c
.org 0x53dc
	movs r1, #15	@ 000053dc 0f21
.org 0x53de
	bl 0x129198	@ 000053de 23f1dbfe
.org 0x53e2
	adds r4, r0, #0	@ 000053e2 041c
.org 0x53e4
	mov r0, r9	@ 000053e4 4846
.org 0x53e6
	movs r1, #10	@ 000053e6 0a21
.org 0x53e8
	bl 0x129198	@ 000053e8 23f1d6fe
.org 0x53ec
	lsls r1, r0, #4	@ 000053ec 0101
.org 0x53ee
	subs r1, r1, r0	@ 000053ee 091a
.org 0x53f0
	movs r0, #150	@ 000053f0 9620
.org 0x53f2
	mov r2, r8	@ 000053f2 4246
.org 0x53f4
	muls r2, r0	@ 000053f4 4243
.org 0x53f6
	adds r0, r2, #0	@ 000053f6 101c
.org 0x53f8
	adds r0, r0, r4	@ 000053f8 0019
.org 0x53fa
	adds r1, r1, r0	@ 000053fa 0918
.org 0x53fc
	ldr r0, [r5, #8]	@ 000053fc a868
.org 0x53fe
	lsls r1, r1, #1	@ 000053fe 4900
.org 0x5400
	adds r1, r1, r0	@ 00005400 0918
.org 0x5402
	ldrh r0, [r1, #0]	@ 00005402 0888
.org 0x5404
	ldr r1, [r5, #0]	@ 00005404 2968
.org 0x5406
	lsls r0, r0, #1	@ 00005406 4000
.org 0x5408
	adds r0, r0, r1	@ 00005408 4018
.org 0x540a
	ldrb r0, [r0, #0]	@ 0000540a 0078
.org 0x540c
	pop {r3, r4}	@ 0000540c 18bc
.org 0x540e
	mov r8, r3	@ 0000540e 9846
.org 0x5410
	mov r9, r4	@ 00005410 a146
.org 0x5412
	pop {r4, r5, r6}	@ 00005412 70bc
.org 0x5414
	pop {r1}	@ 00005414 02bc
.org 0x5416
	bx r1	@ 00005416 0847
