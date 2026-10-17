@ FUN_0801e9ac  entry 0x0801e9ac  size 116
.thumb
.org 0x1e9ac
FUN_0801e9ac:
	push {r4, r5, lr}	@ 0001e9ac 30b5
.org 0x1e9ae
	ldr r3, [pc, #112]	@ 0001e9ae 1c4b
.org 0x1e9b0
	str r1, [r3, #0]	@ 0001e9b0 1960
.org 0x1e9b2
	movs r5, #0	@ 0001e9b2 0025
.org 0x1e9b4
	strb r0, [r3, #4]	@ 0001e9b4 1871
.org 0x1e9b6
	strb r5, [r3, #5]	@ 0001e9b6 5d71
.org 0x1e9b8
	strb r5, [r3, #6]	@ 0001e9b8 9d71
.org 0x1e9ba
	movs r0, #20	@ 0001e9ba 1420
.org 0x1e9bc
	strb r0, [r3, #7]	@ 0001e9bc d871
.org 0x1e9be
	str r5, [r3, #8]	@ 0001e9be 9d60
.org 0x1e9c0
	movs r4, #0	@ 0001e9c0 0024
.org 0x1e9c2
	strh r5, [r3, #12]	@ 0001e9c2 9d81
.org 0x1e9c4
	strh r5, [r3, #14]	@ 0001e9c4 dd81
.org 0x1e9c6
	strh r5, [r3, #18]	@ 0001e9c6 5d82
.org 0x1e9c8
	ldr r0, [pc, #88]	@ 0001e9c8 1648
.org 0x1e9ca
	mov ip, r0	@ 0001e9ca 8446
.org 0x1e9cc
	ldrh r0, [r0, #2]	@ 0001e9cc 4088
.org 0x1e9ce
	cmp r0, #3	@ 0001e9ce 0328
.org 0x1e9d0
	bne.n 0x1e9d6	@ 0001e9d0 01d1
.org 0x1e9d2
	movs r0, #9	@ 0001e9d2 0920
.org 0x1e9d4
	strb r0, [r1, #0]	@ 0001e9d4 0870
.org 0x1e9d6
	mov r2, ip	@ 0001e9d6 6246
.org 0x1e9d8
	adds r2, #236	@ 0001e9d8 ec32
.org 0x1e9da
	ldr r0, [pc, #76]	@ 0001e9da 1348
.org 0x1e9dc
	add r0, ip	@ 0001e9dc 6044
.org 0x1e9de
	movs r1, #149	@ 0001e9de 9521
.org 0x1e9e0
	lsls r1, r1, #1	@ 0001e9e0 4900
.org 0x1e9e2
	add r1, ip	@ 0001e9e2 6144
.org 0x1e9e4
	ldrb r1, [r1, #0]	@ 0001e9e4 0978
.org 0x1e9e6
	ldrb r0, [r0, #0]	@ 0001e9e6 0078
.org 0x1e9e8
	adds r1, r1, r0	@ 0001e9e8 0918
.org 0x1e9ea
	ldr r0, [pc, #64]	@ 0001e9ea 1048
.org 0x1e9ec
	add r0, ip	@ 0001e9ec 6044
.org 0x1e9ee
	ldrb r0, [r0, #0]	@ 0001e9ee 0078
.org 0x1e9f0
	adds r0, r0, r1	@ 0001e9f0 4018
.org 0x1e9f2
	strb r0, [r3, #16]	@ 0001e9f2 1874
.org 0x1e9f4
	movs r0, #150	@ 0001e9f4 9620
.org 0x1e9f6
	lsls r0, r0, #1	@ 0001e9f6 4000
.org 0x1e9f8
	add r0, ip	@ 0001e9f8 6044
.org 0x1e9fa
	ldrb r1, [r0, #0]	@ 0001e9fa 0178
.org 0x1e9fc
	ldrb r0, [r2, #17]	@ 0001e9fc 507c
.org 0x1e9fe
	cmp r0, #18	@ 0001e9fe 1228
.org 0x1ea00
	bne.n 0x1ea04	@ 0001ea00 00d1
.org 0x1ea02
	adds r1, #1	@ 0001ea02 0131
.org 0x1ea04
	strb r1, [r3, #17]	@ 0001ea04 5974
.org 0x1ea06
	strb r4, [r3, #24]	@ 0001ea06 1c76
.org 0x1ea08
	strb r4, [r3, #23]	@ 0001ea08 dc75
.org 0x1ea0a
	strb r4, [r3, #22]	@ 0001ea0a 9c75
.org 0x1ea0c
	strb r4, [r3, #21]	@ 0001ea0c 5c75
.org 0x1ea0e
	strb r4, [r3, #20]	@ 0001ea0e 1c75
.org 0x1ea10
	strb r4, [r3, #25]	@ 0001ea10 5c76
.org 0x1ea12
	strb r4, [r3, #26]	@ 0001ea12 9c76
.org 0x1ea14
	strh r5, [r3, #32]	@ 0001ea14 1d84
.org 0x1ea16
	strh r5, [r3, #30]	@ 0001ea16 dd83
.org 0x1ea18
	strh r5, [r3, #28]	@ 0001ea18 9d83
.org 0x1ea1a
	pop {r4, r5}	@ 0001ea1a 30bc
.org 0x1ea1c
	pop {r0}	@ 0001ea1c 01bc
.org 0x1ea1e
	bx r0	@ 0001ea1e 0047
